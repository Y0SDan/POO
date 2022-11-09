class Objeto{
  private:
    char nombre[10];
    static int numObjetos;

  public:
    Objeto(char *cadena = NULL);//Constructor
    ˜Objeto();//Destructor
};

Objeto::Objeto(const char *cadena){
  if(cadena != NULL)
    strcpy(nombre, cadena);
  else
    nombre = NULL;
  numObjetos++;
}
