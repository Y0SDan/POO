#include <iostream>
#include "Lenguaje.h"
using namespace std;

class Lcomputadora: public Lenguaje{
private:
  string idioma;//define el nombre de este tipo de idioma

public:
  void setIdioma(string i);

  string getIdioma();

  Lcomputadora();
  Lcomputadora(string);
  Lcomputadora(string,string);
};
void Lcomputadora::setIdioma(string i){
  if(i.empty()){
    idioma = i;
  }else{
    cout << "No se pudo reservar memoria" << endl;
  }
};

Lcomputadora::Lcomputadora(): Lenguaje(){
  setIdioma("binario");
}
Lcomputadora::Lcomputadora(string i):Lenguaje(){
  idioma = i;
}

Lcomputadora::Lcomputadora(string idioma, string simbolo):Lenguaje(simbolo)
{
  setIdioma(idioma);
}

void Lcomputadora::setIdioma(string idioma)
{
  this->idioma = idioma;
}

string Lcomputadora::getIdioma()
{
  return idioma;
}