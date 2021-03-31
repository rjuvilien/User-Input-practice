
/* 

Rejy Juvilien

Lab 3 Loan Payment Summary

Steps 
1. Prompt user for data on a loan.
2. Assign variables with values of the user inputs
3. Use input data and formulas to produce a summary    of data for a loan.
4. Display summary of data to user.

*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  string Name, loanInstitution, DateMY;
  double loanAmount, annualIntRate, loanTerm, monthlyIntRate, numberOfPayments, monthlyPayment, totalInterest, totalPayout;
	// Prompt user for information and assign input values to variables
	cout << "Please enter your full name (first and last name seperated by a space): ";
	getline(cin, Name);
  cout << "Please enter the name of the financial institution: ";
	getline(cin, loanInstitution);
	cout << "Please enter the loan amount: ";
	cin >> loanAmount;
	cout << "Please enter the interest rate: ";
	cin >> annualIntRate;
	cout << "Please enter the loan term in years (enter a number only): ";
	cin >> loanTerm;
  cout << "Please enter the date (Month and year): ";
  cin.ignore();
  getline(cin, DateMY);



  // Use formulas to make calculations using the given data
  monthlyIntRate = (annualIntRate / 12)/100;
  numberOfPayments = loanTerm * 12;
  monthlyPayment = loanAmount * (monthlyIntRate) * (pow((1+ monthlyIntRate), numberOfPayments))/((pow((1+ monthlyIntRate), numberOfPayments)) - 1);
  totalInterest = (monthlyPayment * numberOfPayments) - loanAmount;
  totalPayout = loanAmount + totalInterest;

  // Display Results
  cout << "--------------------------------------" << endl;
  cout << "\nLoan Payment Summary Report " << endl << endl << endl;
  cout << loanInstitution << " Bank & Loan    " << Name << endl;
  cout << "Annual Interest Rate:    " << annualIntRate << "%" << endl;
  cout << "Date:        " << DateMY << endl << endl;
  cout << "Loan Amount:            " << loanAmount << endl;
  cout << "Monthly Interest Rate:   " << fixed << setprecision(2) << (monthlyIntRate * 100) << "%" << endl;
  cout << "Number of Payments:        " << fixed << setprecision(0) << numberOfPayments << endl;
  cout << "Monthly Payment:       $" << fixed << setprecision(2) << monthlyPayment << endl << endl << endl;
  cout << "Total Amount to Pay:$" << fixed << setprecision(2) << totalPayout << endl;
  cout << "Total Interest:      $" << fixed << setprecision(2) << totalInterest << endl << endl;
   cout << "--------------------------------------" << endl;
   
}