#include<iostream>
using namespace std;
int main() {
  const int smallroom_cleancharge = 25;
  const int largeroom_cleancharge = 30;
  double tax = 6.6;
  int charge;
  int totalcost;
     string name;
      cout<<"Enter the name of the costumer:";
      cin>>name;
  int small_room;
  cout << "\nEnter no of the small room to cleaned:";
  cin >> small_room;
  int large_room;
  cout << "\nEnter the no  large room to cleaned: ";
  cin >> large_room;
  charge = (small_room * smallroom_cleancharge) +
           (large_room * largeroom_cleancharge);
  totalcost = (charge *tax);
  cout<<"\n Hello "<<name;
  cout << "\nThe total cost to be paid is " << totalcost;
  cout << "\nThis estimate is valid for 30 days";
  return 0;
}