#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

class Estudiante: public Persona{
private:
  char *grado;
  int matricula;

public:
  void setGrado(const char*);
  void setMatricula(int);

  char *getGrado();
  int getMatricula();
};

void Estudiante::setGrado(const char *g){
  grado = new char[strlen(g) + 1];
  assert(grado != 0);
  strcpy(grado,g);
}
void Estudiante::setMatricula(int m){
  matricula = m;
}

char *Estudiante::getGrado(){
  return grado;
}
int Estudiante::getMatricula(){
  return matricula;
}
#endif
