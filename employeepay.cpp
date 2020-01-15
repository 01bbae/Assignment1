#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv){
  double hours;
  double grossPay;
  double socialSecurity;
  double federalIncome;
  double stateIncome;
  const double medicalInsurance = 10.0; //medical insurance is constant
  double netPay;

  cout << "Enter the number of hours worked in a week: ";
  cin >> hours;
  
  //if overtime else regular pay
  if(hours > 40){
    grossPay=(40*16)+((hours-40)*16)*1.5;
  }else{
    grossPay=hours*16;
  }

  //calculation of each tax;
  socialSecurity= grossPay*.06;
  federalIncome = grossPay*.14;
  stateIncome = grossPay*.5;
  netPay=grossPay-socialSecurity-federalIncome-stateIncome-medicalInsurance;

  //formatting
  cout << fixed;
  cout << setprecision(2);
  cout << "Gross Pay: $" << grossPay << endl;
  cout << "Social Security tax: $" << socialSecurity << endl;
  cout << "Federal Income tax: $" << federalIncome << endl;
  cout << "State Income : $" << stateIncome << endl;
  cout << "Medical Insurance: $" << medicalInsurance << endl;
  cout << "Net Pay: $"<< netPay << endl;

  return 0;
}
