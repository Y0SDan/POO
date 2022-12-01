#ifndef PERSONA_H
#define PERSONA_H

#define TAM 20

class Persona{
private:
  char genero;//H|M...
  int edad;
  char *nombre;

public:
  void setGenero(char);
  void setEdad(int);
  void setNombre(const char*);

  char getGenero();
  int getEdad();
  char *getNombre();
};

void Persona::setGenero(char g){
  genero = g;
}
void Persona::setEdad(int e){
  edad = e;
}
void Persona::setNombre(const char *n){
  nombre = new char[ strlen(n) + 1];
  assert(nombre != 0);//al parecer sirve para encontrar errores
  strcpy(nombre,n);
}

char Persona::getGenero(){
  return genero;
}
int Persona::getEdad(){
  return edad;
}
char *Persona::getNombre(){//conflicto de defincion, funciona pero le estamos
  return nombre;           //dando la direccion de un atributo privado
}

#endif
