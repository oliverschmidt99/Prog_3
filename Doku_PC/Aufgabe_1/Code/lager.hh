#ifndef LAGER_H // include guard
#define LAGER_H

#include <iostream>
#include <string>

using namespace std;
enum masseinheit { stk, kg, l };

class Warengruppe {
public:
private:
};

class Artikel {
protected:
  string art_name;
  string art_nummer;
  double lagerbestand;
  masseinheit einheit;
  double verkaufspreis;
  double normpreis;

public:
  // Konstrucktor erstellen und den Destrucktor
  Artikel(string art_name, string art_nummer, double lagerbestand,
          masseinheit einheit, double verkaufspreis, double normpreis);
  ~Artikel();

  // Getter-Funktionen
  string getName() const;
  string getNummer() const;
  double getLagerbestand() const;
  masseinheit getEinheit() const;
  double getVerkaufspreis() const;
  double getNormpreis() const;

  // Setter-Funktionen
  string setName() const;
  string setNummer() const;
  double setLagerbestand() const;
  masseinheit setEinheit() const;
  double setVerkaufspreis() const;
  double setNormpreis() const;
};



class Schuettgut : Artikel {
public:
  masseinheit getEinheit()  {return einheit;}
  double getLagerbestand()  {return lagerbestand;}
  double getVerkaufspreis() {return verkaufspreis;}

private:
};

class Stueckgut : Artikel {
public:
  masseinheit getEinheit()  {return einheit;}
  double getLagerbestand()  {return lagerbestand;}
  double getVerkaufspreis() {return verkaufspreis;}

private:
};

class Fluessigkeit : Artikel {
public:
  masseinheit getEinheit()  {return einheit;}
  double getLagerbestand()  {return lagerbestand;}
  double getVerkaufspreis() {return verkaufspreis;}

private:
};
#endif