#include <iostream>

using namespace std;

class Ejemplo3{
  public:
    int x,i,j;
    float y;

    int funX(int a){
      x = a;
      return x;
    }

    float funY(float);
};

int main(){
  Ejemplo3 e1, e2;

  e1.i = 10;
  e1.j = 20;

  e2.i = 100;
  e2.j = 20;

  cout << e1.i << endl;
  cout << e2.i << endl;

  return 0;
}

float Ejemplo3::funY(float b){
  y = b;
  return y;
}
