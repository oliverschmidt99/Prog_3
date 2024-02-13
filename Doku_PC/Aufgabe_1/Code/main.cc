#include "lager.hh"

int main(int argc, char *argv[]) {
  Warengruppen w;

  w.addMap(argv[2]);
  w.printMap();
  w.resetMap();
  w.addArtikel("Apfel", "4020010000");
  w.printMap();
  return 0;
}
