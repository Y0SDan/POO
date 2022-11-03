#include <iostream>

using namespace std;

class Hora{
  private:
    int hora,min,seg;

  public:
    void iniHora(){
      hora = min = seg = 0;
    }

    bool setHora(int h){
      hora = (h >= 0 && h < 24) ? h : 0;
      return hora != 0;
    }
    bool setMin(int m){
      min = (m >= 0 && m < 60) ? m : 0;
      return hora != 0;
    }
    bool setSeg(int s){
      seg = (seg >= 0 && seg < 60) ? s : 0;
      return s != 0;
    }

    int getHora(){
      return hora;
    }
    int getMin(){
      return min;
    }
    int getSeg(){
      return seg;
    }

    void aumenta(){
      seg++;
      if(seg >= 60){
        seg = 0;
        min++;
        if(min >= 60){
          min = 0;
          hora++;
          if(hora >= 24){
            hora = 0;
          }
        }
      }
    }

    void horaEstandar(){
      if(hora == 0 || hora == 12){
        cout << hora;
      }else{
        cout << hora % 12;
      }
      cout << ":";
      if(min < 10){
        cout << "0";
      }
      cout << min;
      cout << ":";
      if(seg < 10){
        cout << "0";
      }
      cout << seg;
      if(hora < 12){
        cout << " AM";
      }else{
        cout << " PM";
      }
    }

    void horaMilitar(){
      if(hora < 10){
        cout << "0";
      }
      cout << hora << ":";
      if(min < 10){
        cout << "0";
      }
      cout << min << ":";
      if(seg < 10){
        cout << "0";
      }
      cout << seg;
    }
};

int main(){
  Hora h;

  h.iniHora();

  cout << "La hora inicial militar es ";
  h.horaMilitar();
  cout << endl;
  cout << "La hora inicial estandar es ";
  h.horaEstandar();
  cout << '\n';

  h.setHora(17);
  h.setMin(30);
  h.setSeg(0);

  cout << "La nueva hora asignada es: " << endl;
  cout << "Hora militar: ";
  h.horaMilitar();
  cout << endl;
  cout << "Hora estandar: ";
  h.horaEstandar();

  return 0;
}
