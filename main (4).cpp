/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

float mul_floatnumbers(float a,float b) { return a*b; }

int main()
{
    float A=7.8,  B =8.9 , product;
    product = mul_floatnumbers(A,B);
    cout << product;
    return 0;
}

    
