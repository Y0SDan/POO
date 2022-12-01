#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador: public Persona{
private:
  char *puesto;
  float salario;

public:
  void setPuesto(const char*);
  void setSalario(float);

  char *getPuesto();
  float getSalario();
};

void Administrador::setPuesto(const char *p){
  puesto = new char[strlen(p) + 1];
  assert(puesto != 0);
  strcpy(puesto,p);
}
void Administrador::setSalario(float s){
  salario = s;
}

char *Administrador::getPuesto(){
  return puesto;
}
float Administrador::getSalario(){
  return salario;
}
#endif
