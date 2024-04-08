#include "data.hh"
#include "lager.hh"

int main(int argc, char *argv[]) {
  Warengruppen w;

  Get_Artikel get_artikel;       // Objekt der Klasse Get_Artikel erstellen
  Output_Artikel output_artikel; // Objekt der Klasse Output_Artikel erstellen
 
  output_artikel.open_File("output.txt");

  w.addArtikel("Apfel", "4020010000");
  w.printMap();
  return 0;
}
