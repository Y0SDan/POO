class NuevoEnum{
   enum cosas{
     dado, lapida, arbol, mesa, cartas
   }

   public static void main(String argv[]){
     int i=1;

     for(cosas t: cosas.values()){
       System.out.println("Cosa # " + i);
       System.out.println(t);
       i++;
     }
   }
}
