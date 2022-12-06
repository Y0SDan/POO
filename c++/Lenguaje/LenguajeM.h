#ifndef LENGUAJEM_H
#define LENGUAJEM_H

#include "lcomputadora.h"
#include "LenguajeH.h"

class LenguajeMixto: virtual public Lenguaje_Humano, public Lcomputadora{
    friend ostream& operator<<(ostream&, const LenguajeMixto&);
	private:
		string cadena;
	public:
		LenguajeMixto(string c1, string c2, string simbolos, string cadena): Lenguaje_Humano(c1), Lcomputadora(c2, simbolos){
			setCadenaM(cadena);
		}
		void setCadenaM(string cadena){
			this->cadena=cadena;
		}
		
		string getCadenaM(){
			return cadena;
		}
};

ostream& operator<<(ostream& salida, const LenguajeMixto& a)
{
  salida << "El lenguaje de computadora actual de computadora es: Print(" << a.Lcomputadora::getIdioma()<< "); La cadena mixta acutal es:" << a.cadena << " El lenguaje Humano acutal es :"<<a.Lenguaje_Humano::getIdioma()<<endl;
  return salida;
}

#endif