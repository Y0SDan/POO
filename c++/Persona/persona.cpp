#include <iostream>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include "persona.h"
#include "estudiante.h"
#include "administrador.h"
#include "profesor.h"

using namespace std;

class Persona;
class Estudiante;
class Administrador;
class Profesor;

int main(){
  Persona h1;//humano uno
  Estudiante h2;//humano que estudia
  Administrador h3;//humano burócrata
  Profesor h4;//humano que enseña

  h1.setGenero('M');
  cout << "El género de éste humano es: " << h1.getGenero() << endl;

  h1.setEdad(19);
  cout << "La edad de éste humano es: " << h1.getEdad() << " años" << endl;

  h1.setNombre("EDDY");
  cout << "El nombre de éste humano es: " << h1.getNombre() << endl;

  h2.setNombre("Alfred");
  h2.setEdad(19);
  h2.setGrado("Tercer Semestre");
  h2.setMatricula(2019020163);
  cout << h2.getNombre() << " es un humano de " << h2.getEdad() << " años que estudia el " << h2.getGrado() << " y cuya matricula es " << h2.getMatricula() << endl;

  h4.setNombre("Saul");
  h4.setMateria("Geometría");
  cout << "El humano " << h4.getNombre() << " enseña " << h4.getMateria() << endl;

  return 0;
}
