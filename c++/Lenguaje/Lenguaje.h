#ifndef LENGUAJE_H
#define LENGUAJE_H

#include <iostream>
using namespace std;

class Lenguaje{
private:
  string simbolos;

public:
  void setSimbolos(string);

  string getSimbolos();

  Lenguaje();//constructor sin parametros
  Lenguaje(string);

  friend istream& operator>>(istream&, Lenguaje&);
  friend ostream& operator<<(ostream&, const Lenguaje&);
};
void Lenguaje::setSimbolos(string cad){
      simbolos = cad;
}

string Lenguaje::getSimbolos(){
  return simbolos;
}

Lenguaje::Lenguaje(){
  simbolos.clear();
}
Lenguaje::Lenguaje(string s){
  setSimbolos(s);
}


istream& operator>>(istream& is, Lenguaje& l){
  is >> l.simbolos;
  return is;
}
ostream& operator<<(ostream& os, const Lenguaje& l){
  os << l.simbolos;
  return os;
}

#endif