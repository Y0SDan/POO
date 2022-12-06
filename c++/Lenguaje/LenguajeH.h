#ifndef LENGUAJEH_H
#define LENGUAJEH_H

#include <iostream>
#include "Lenguaje.h"
using namespace std;

class Lenguaje_Humano: public Lenguaje
{
  private:
  string idioma;
  public:
  Lenguaje_Humano(string, string);
  Lenguaje_Humano(string);
  Lenguaje_Humano();
  void setIdioma(string);
  string getIdioma()const;
};

Lenguaje_Humano::Lenguaje_Humano(string simbolo, string lenguaje) : Lenguaje(simbolo)
{
  setIdioma(lenguaje);
}

Lenguaje_Humano::Lenguaje_Humano(string simbolo) : Lenguaje(simbolo)
{
  setIdioma("Español");
}

Lenguaje_Humano::Lenguaje_Humano():Lenguaje()
{
  setIdioma("Español");
}

void Lenguaje_Humano::setIdioma(string idioma)
{
  this->idioma = idioma;
}
string Lenguaje_Humano::getIdioma() const
{
  return idioma;
}

#endif