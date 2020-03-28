/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
 float a, b, c, D;
 cin >> a >> b >> c ;
 
 D = b*b - 4*a*c;
 
 if (D < 0)
    cout << "корней нет";
     
 else if (D==0)
    cout << (-b / (2*a));
     
 else 
    cout << (-b - pow(D, 0.5)) / (2*a) << " " << (-b + pow(D, 0.5)) / (2*a);
 
  return 0;
    
}

