#include <iostream>
using namespace std;

int main() {

   int pass;
   cout<<"Enter no of passengers";
    cin>>pass;
    int bus=50;
     int c;
    c=pass%bus;
      cout<< "Remaining no of seats is:"<<c;
   

    return 0;
}