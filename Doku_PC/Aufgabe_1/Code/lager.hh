#ifndef LAGER_H // include guard
#define LAGER_H

#include <algorithm>
#include <iostream>
#include <map>
#include <stdexcept>
#include <string>

using namespace std;
// Enumerationstyp für Maßeinheiten
enum class Masseinheit { Stk, Kg, L };

class Warengruppen {
private:
  map<string, string> warengruppenliste;
  map<string, string>::iterator iter;
  string name;
  string nummer;

public:
  Warengruppen();
  ~Warengruppen();
  void addMap();
  void addArtikel(string name, string nummer);
  void rmArtikel(string name, string nummer);
  void reset();
};

class Artikel {
protected:
  string name;
  string nummer;
  unsigned int lagerbestand;
  Masseinheit einheit;
  double vp; // verkaufspreis
  double np; // normpreis

public:
  Artikel(string name, string nummer, unsigned int lagerbestand,
          Masseinheit einheit, double vp, double np);
  ~Artikel();

  static Warengruppen gruppe;

  // Getter-Funktionen
  string getName() const;
  string getNummer() const;
  unsigned int getLagerbestand() const;
  Masseinheit getEinheit() const;
  double getVerkaufspreis() const;
  double getNormpreis() const;

  // Setter-Funktionen
  void setName(string name);
  void setNummer(string nummer);
  void setLagerbestand(unsigned int lagerbestand);
  void setEinheit(Masseinheit einheit);
  void setVerkaufspreis(double vp);
  void setNormpreis(double np);
};

class Schuettgut : public Artikel {
private:
  double losgroesse; // lg
public:
  Schuettgut(string name, string nummer, double losgroesse, Masseinheit einheit,
             unsigned int lagerbestand, double np, double vp);
  ~Schuettgut();

  // Getter-Funktionen
  double getLosgroesse() const;

  // Setter-Funktionen
  void setVerkaufspreis(double vp);
  void setLosgroesse(double losgroesse);
};

class Stueckgut : public Artikel {
private:
public:
  Stueckgut(string name, string nummer, unsigned int lagerbestand, double vp);
  ~Stueckgut();
};

class Fluessigkeit : public Artikel {
private:
  double volumen;

public:
  Fluessigkeit(string name, string nummer, Masseinheit einheit,
               unsigned int lagerbestand, double volumen, double np);
  ~Fluessigkeit();

  // Getter-Funktionen
  double getVolumen() const;
  // Setterfunktionen
  void setVolumen(double volumen);
  void setVerkaufspreis(double vp);
};

#endif
