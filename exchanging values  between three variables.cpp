#include <iostream>
using namespace std;

int main() { 

      int a= 8; 
      int b= 11;
      int c=5;
     
      int d;
      int e;
      int f;
         d=a;
        e=b;
        f=c;
        a=f;
        b=d;
        c=e;

      /* Now you can understand my code easily. What i have done is 
      i have stored three different values  into three new different variables (d,e,f respectively a to d, b to e and finally c to f). 
      So which makes all three a, b, c variables empty and they can take the required variable in a reverse form as value of a goes to b
      similarly value of b goes to c and value of c goes to a */   


    cout <<a <<endl;
    cout <<b <<endl;
    cout <<c <<endl;
    return 0;
}