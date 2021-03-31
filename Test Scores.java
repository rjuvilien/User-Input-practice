import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    double FirstScore;
    double SecondScore;
    double ThirdScore;
    double Average;
    Scanner input = new Scanner(System.in); 
    System.out.print("Enter the first test score. ");
    FirstScore = input.nextDouble();
    input.nextLine(); 
    System.out.print("Enter the second test score. ");
    SecondScore = input.nextDouble();
    input.nextLine();
    System.out.print("Enter the third test score. ");
    ThirdScore = input.nextDouble();
    input.nextLine();
    Average = (FirstScore+SecondScore+ThirdScore)/3;
    System.out.println("The three test scores entered are: "+FirstScore+", "+SecondScore+", and "+ThirdScore);
    System.out.print("The average of these three scores is: "+Average);
  }
}