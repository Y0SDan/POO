#ifndef LENGUAJEC_H
#define LENGUAJEC_H

#include <iostream>
#include "Lenguaje.h"
using namespace std;

class Lcomputadora: public Lenguaje{

private:
  string idioma;//define el nombre de este tipo de idioma

public:
  void setIdioma(string i);
  string getIdioma() const;
  Lcomputadora();
  Lcomputadora(string);
  Lcomputadora(string,string);
};
void Lcomputadora::setIdioma(string i){
    idioma = i; 
}

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


string Lcomputadora::getIdioma() const
{
  return idioma;
}

#endif