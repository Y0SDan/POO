class Date{
  private int day,month,year;

  void iniDate(){
    day = 0;
    month = 0;
    year = 0;
  }

  public boolean setDay(int d){
    day = d;
    return true;
  }
  public boolean setMonth(int m){
    month = m;
    return true;
  }
  public boolean setYear(int y){
    year = y;
    return true;
  }

  public int getDay(){
    return day;
  }
  public int getMonth(){
    return month;
  }
  public int getYear(){
    return year;
  }

  private boolean leapYear(){
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
  }

  public boolean rightYear(){
    return (year >= 1900 && year <= 2100);
  }
  public boolean rightMonth(){
    return (month > 0 && year <= 12);
  }
  public boolean rightDay(){
    boolean rDay;

    switch(month){
      case 2:
        if(leapYear()){
            return (day >= 1 && day <= 29);
        }else{
          return (day >= 1 && day <= 28);
        }
      case 4:
      case 6:
      case 9:
      case 11:
        return (day >= 1 && day <= 30);
      default:
        return (day >= 1 && day <= 31);
    }
  }

  public void yearDays(){
    int c = 1;

    while(c < month){
      switch(c){
        case 2: day = day + 28; break;
        case 4:
        case 6:
        case 9:
        case 11: day = day + 30; break;
        default: day = day + 31;
      }
      c++;
    }

    if(leapYear() && month > 2 ){
      day = day + 1;
    }
  }

  public void nexDay(){
    day++;

    if(!rightDay() && !rightMonth() && !rightYear()){
      day = 1;
      month ++;
      if(!rightDay() && !rightMonth() && !rightYear()){
        month = 1;
        year ++;
      }
    }
  }

  public static void main(String argv[]){
    Date d = new Date();

    d.iniDate();

    System.out.println(d.getDay() + "/" + d.getMonth() + "/" + d.getYear());

    d.setDay(3);
    d.setMonth(11);
    d.setYear(2022);

    System.out.println(d.getDay() + "/" + d.getMonth() + "/" + d.getYear());

    if(d.leapYear()){
      System.out.println("Es bisiesto");
    }

    d.yearDays();
    System.out.println("Han transcurrido: " + d.getDay() + " días en el año");

    d.nexDay();
    System.out.println("El día siguiente es: " + d.getDay());
  }
}
