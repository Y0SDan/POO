#ifndef PROFESOR_H
#define PROFESOR_H

class Profesor: public Persona{
private:
  char *materia;
  char *instituto;
  int cubiculo;

public:
  void setMateria(const char*);
  void setInstituto(const char*);
  void setCubiculo(int);

  char *getMateria();
  char *getInstituto();
  int getCubiculo();
};

void Profesor::setMateria(const char *m){
  materia = new char[strlen(m) + 1];
  assert(materia != 0);
  strcpy(materia, m);
}
void Profesor::setInstituto(const char *i){
  instituto = new char[strlen(i) + 1];
  assert(instituto != 0);
  strcpy(instituto, i);
}
void  Profesor::setCubiculo(int c) {
  cubiculo = c;
}

char *Profesor::getMateria(){
  return materia;
}
char *Profesor::getInstituto(){
  return instituto;
}
int Profesor::getCubiculo(){
  return cubiculo;
}
#endif
