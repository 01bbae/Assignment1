#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv){
  double cost;
  int years;
  double inflation;
  double newPrice;

  cout << "Enter the cost of the item: " << endl;
  cin >> cost;
  cout << "Enter the number of years from now that it will be purchased" << endl;
  cin >> years;
  cout << "Enter the inflation rate as a percentage (Do not include the percent symbol): " << endl;
  cin >> inflation;
  // if 25 is inflation, converts inflation to 1.25
  inflation=inflation/100+1;
  newPrice = cost;
  //for loop to recursively create newPrice
  for(int i=0;i<years;++i){
    newPrice*=inflation;
  }
  //formatting
  cout << fixed;
  cout << setprecision(2);
  cout << "The cost of the item will increase from $" << cost << " to $" << newPrice << " in " << years << " years with a " << (inflation-1)*100 << "% inflation rate." << endl;
  return 0;
}
