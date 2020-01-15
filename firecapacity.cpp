#include <iostream>
using namespace std;

int main(int argc, char **argv){
  int roomCapacity;
  int numPeople;

  cout << "Enter Maximum Room Capacity: " << endl;
  cin >> roomCapacity;
  cout << "Enter number of people attending the meeting: ";
  cin >> numPeople;

  if(numPeople>roomCapacity){
    cout <<"The meeting cannot be held because of fire regulations. " << numPeople-roomCapacity << " people must be excluded in order for the fire regulations to be met." << endl;
  }else{
    cout <<  "The meeting can be held." << endl;
  }

  return 0;
}
