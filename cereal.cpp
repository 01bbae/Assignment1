#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double ounces;
  cout << "Enter the ounces of a cereal box: "
  cin >> ounces;
  double tons = ounces/35273.92;

  cout << "The cereal is " << tons << " metric ton(s)." << endl;
  cout << "At least " << ceil(1/tons) << " boxes of cereal is needed to yield one metric ton." << endl;
  return 0;
}
