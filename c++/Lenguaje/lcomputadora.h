class Lcomputadora: public lenguaje{
private:
  string idioma;//define el nombre de este tipo de idioma

public:
  void setIdioma(string i);

  string getIdioma();

  Lcomputadora();
  Lcomputadora(string);
  Lcomputadora(string,string);
};
void Lcomputadora::setIdioma(string i){
  if(i.empty()){
    idioma = i;
  }else{
    cout << "No se pudo reservar memoria" << endl;
  }
}

void Lcomputadora::Lcomputadora(): lenguaje(){
  setIdioma("binario");
}
void Lcomputadora::Lcomputadora(string i){

}
