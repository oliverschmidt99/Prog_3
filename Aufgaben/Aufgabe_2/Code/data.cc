#include "data.hh"
#include <iostream>

// Konstruktor für Get_Artikel
Get_Artikel::Get_Artikel() : Artikel("", "", 0, Masseinheit(), 0.0, 0.0) {
  // Initialisierung, falls benötigt
}

// Destruktor für Get_Artikel
Get_Artikel::~Get_Artikel() {
  // Aufräumarbeiten, falls benötigt
}

void Get_Artikel::open_File() { cout << "Hallo ich bin in Openfile" << endl; }

void Output_Artikel::open_File(const string file_name) {
  cout << "Hallo ich bin in Openfile" << endl;
}

void Output_Artikel::write_file(const std::string &file_name,
                                Artikel artikel_output) {
  cout << "Hallo ich bin in Openfile" << endl;
}