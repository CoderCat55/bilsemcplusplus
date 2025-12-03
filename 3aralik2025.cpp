/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;
int main()
{
    int c=-8;
    cout << sqrt(pow(c,2))<<endl;
    float d=-4.7;
    cout << fabs(d)<<endl;
    long long e=-999999999999999;
    cout << llabs(e)<<endl;
    
    char f[]="elif";
    cout << strlen(f)<<endl;
    
    string g="Katze";
    cout<<g.length()<<endl;
    
    return 0;
}