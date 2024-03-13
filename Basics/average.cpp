#include<iostream>
  #include<bits/stdc++.h>
  using namespace std;
   int main ()
{
    float a,b,c;
    float sum;
    float avg;
    cout<< "Enter  first  number :";
    cin >> a;
     cout<< "Enter  second  number :";
    cin >> b;
     cout<< "Enter   third number :";
    cin >> c;

    sum= a+b+c;
     cout << " The sum of three numbers is: " << sum<< endl;

     avg = sum/3;
     cout << " The avg of three numbers is: " << avg<< endl;
}