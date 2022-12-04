#include "nodo.h"

class Lista
{
private:
  Nodo *inicio;
  Nodo *final;

public:
  Lista()
  {
    inicio = final = NULL;
  }
  void insertaInicio(Persona);
  void insertaFinal(Persona);
  void eliminaInicio();
  void elimimaFinal();
  void recorreLista();
  void insertaOrdenado(Persona);
  void eliminaElemento(const char*);//Eliminará buscando el nombre de la persona ;v
};

void Lista::insertaInicio(Persona elemento);
{
  if(inicio==NULL)
  {
    inicio = new Nodo;
    inicio->setPersona(elemento);
    inicio->setSiguiente(NULL);
    final = inicio;
  }
  else
  {
    Nodo *aux;
    aux = inicio;
    inicio = NULL;
    inicio = new Nodo;
    inicio->setPersona(*elemento);
    inicio->setSiguiente(aux);
  }
}
