#include "lager.hh"
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>

Warengruppen::Warengruppen() {}

void Warengruppen::addMap(string filename) {

  ifstream input(filename);
  if (!input) {
    cerr << "Fehler" << filename << "\n";
  }

  string line;
  while (getline(input, line)) {
    stringstream ss(line);
    string name, nummer;
    getline(ss, nummer, '|');
    getline(ss, name, '|');
    addArtikel(name, nummer);
  }
}

void Warengruppen::addArtikel(string name, string nummer) {
  warengruppenliste[name] = nummer;
}

void Warengruppen::rmArtikel(string nummer) {
  auto it = warengruppenliste.find(nummer);
  if (it != warengruppenliste.end()) {
    warengruppenliste.erase(it);
    cout << "\n Artikel \"" << nummer << "\" wurde erfolgreich gelöscht.\n";
  } else {
    cout << "Artikel \"" << name << "\" nicht gefunden.\n";
  }
}

void Warengruppen::resetMap() {
  warengruppenliste.clear();
  cout << "\nArtikelliste wurde zurückgesetzt" << endl;
}

void Warengruppen::printMap() {
  for (const auto &pair : warengruppenliste) {
    cout << pair.first << " | " << pair.second << endl;
  }
}