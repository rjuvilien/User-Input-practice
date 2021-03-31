import java.util.Scanner;

import javax.lang.model.util.ElementScanner6;
class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
  System.out.print("Enter an integer between 0 and 99999: ");
  int Number = input.nextInt();
  int Digits;
  if (Number > 0 && Number < 10)
    Digits = 1;
  else if (Number > 9 && Number < 100)
    Digits = 2; 
  else if (Number > 99 && Number < 1000)
    Digits = 3;     
  else if (Number > 999 && Number < 10000)
    Digits = 4;  
  else 
    Digits = 5;  
  System.out.print("The amount of digits in your number is: "+Digits);  
  }
}