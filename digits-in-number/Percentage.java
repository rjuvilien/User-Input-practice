import java.util.Scanner;
class MaleFemalePercentages {
	public static void main (String[] args) {
	int males, females, totalStudents;
 	double percentM, percentF;
	Scanner input = new Scanner (System.in);
	System.out.print("Enter number of males registered: ");
	males = input.nextInt();
 	System.out.print("Enter number of females registered: ");
 	females = input.nextInt();
 	totalStudents = males + females;
	percentM = males*100/totalStudents;
	percentF = females*100/totalStudents;
	System.out.println("The percentage of males registered is: "+percentM+"%");
	System.out.println("The percentage of females registered is: "+percentF+"%");		
	}
}