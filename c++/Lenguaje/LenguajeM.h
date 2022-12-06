#include "lcomputadora.h"
#include "LenguajeH.h"

class LenguajeMixto: virtual public Lenguaje_humano, public Lcomputadora{
	private:
		string cadena;
	public:
		LenguajeMixto(string c1, string c2, string simbolos, string cadena): Lenguaje_humano(c1), Lcomputadora(c2, simbolos){
			setCadenaM(cadena);
		}
		void setCadenaM(cadena){
			this->cadena=cadena;
		}
		
		string getCadenaM(){
			return cadena;
		}
};
