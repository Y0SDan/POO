class Enum{
  enum nombres{
    Sofia,Carlos,Caribe,Jorge,Daniel
  }

  public static void main(String argv[]){
    int i = 0;

    for(nombres t: nombres.values()){
      System.out.println(t);
    }

  }
}
