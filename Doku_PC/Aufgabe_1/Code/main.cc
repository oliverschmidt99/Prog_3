#include "lager.hh"

int main(int argc, char *argv[]) {
  Artikel x("a","1",100,Kg,100,100);
  cout << x.getEinheit()<<endl;
  
  
  Warengruppen w;

  w.addMap(argv[2]);
  w.printMap();
  w.resetMap();
  w.addArtikel("Apfel", "4020010000");
  w.printMap();
  return 0;
}
