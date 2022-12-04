#inlcude "persona.h

class Nodo
{
private:
  Persona nodo;
  Nodo *sig;

public:
  void setPerosna(Persona);
  Persona getPersona();
  void setSiguiente(Nodo*);
  Nodo* getSiguiente();
};

void Nodo::setPerosna(Persona nodo)
{
  this->nodo = nodo;
}

Persona Nodo::getPersona()
{
  return nodo;
}

void Nodo::setSiguiente(Nodo *sig)
{
  this->sig = sig;
}
