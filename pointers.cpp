#include <iostream>

using namespace std;    
int main(){
   // Pointers are the data type used to store the address of another data type.
    int a = 3;   
    int b = 4;
    //& --> Address of the Operator.
    //* --> Dereference(value) of the Operator.
    int* d = &b;
    int* c = &a;

    cout<<"The address of a is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;

    cout<<"The address of b is "<<d<<endl;
    cout<<"The value at address d is "<<*d<<endl;

//Pointer to pointer
    int** x = &c;
    cout<<"The address of pointer c is "<<x<<endl;

    //prints address of c
    cout<<"The value at address x is "<<*x<<endl; 

    //prints value at address of c
    cout<<"The value at address value of x(value at *x)  is "<<**x<<endl;
    return 0;
}