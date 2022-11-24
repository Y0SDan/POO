//programa que implementa una calse person y sus derivados
//se pueden declarar prototipos de clase?
#include <iostream>

using namespace std;

class Persona;
class Estudiante;
class Administrador;

class Persona{
private:
  int age;
  int name;

public:
  void setAge(int);
  void setName(int);

  int getAge();
  int getName();
};

class Estudiante{
private:
  char *grado;
  int matricula;

public:
  void setGrado(char);
  void setMatricula(int);

  char *getGrado();
  int getMatricula();
};
class Administrador{
private:
  char *puesto;
  float salario;
  char *empresa;

public:
  void setPuesto(char);
  void setSalario(float);
  void setEmpresa(char);

  char *getPuesto();
  float getSalario();
  char *getEmpresa();
};
