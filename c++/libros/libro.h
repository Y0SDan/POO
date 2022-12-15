#ifndef LIBRO_H
#define LIBRO_H

class Libro{
private:
  string nLibro;//nLibro => Nombre del libro
  string editorial;
  string edicion;
  int year;
  Nombre autor[3];

public:
  void setNLibro(string);
  void setEditorial(string);
  void setEdicion(string);
  void setYear(int);
  void setNombre(Nombre,int);

  string getNLibro();
  string getEditorial();
  string getEdicion();
  int getYear();
  Nombre getAutor();
};

void Libro::setNLibro(string nl){
  libro = nl;
}
void Libro::setEditorial(string e){
  editorial = ed;
}
void Libro::setEdicion(string ed){
  edicion = ed;
}
void Libro::setYear(int y){
  year = y;
}
void Libro::setNombre(Nombre n, int pos){
  autor[pos] = n;
}

#endif
