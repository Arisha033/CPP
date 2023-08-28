#include<iostream>
using namespace std;

    int main(){
    //Arrays are contiguous memory block
    int num[] = {20, 10, 9, 48};
    cout << num[0]<<"\n";
    cout << num[1]<<"\n";
    cout << num[2]<<"\n";
    cout << num[3]<<"\n";

    cout<<"using for loop \n";
    //arrays using for loop 
   for (int i = 0; i < 4; i++)
   {
    cout<<num[i]<<endl;
   }

   //Pointers with arrays
   int* p  = num;
    cout<<"The address of array is "<<p<<endl;
    cout<<"The value at num[0] is "<<*p<<endl;
    cout<<"The value at num[1] is "<<*(p+1)<<endl;
    cout<<"The value at num[2] is "<<*(p+2)<<endl;
    cout<<"The value at num[3] is "<<*(p+3)<<endl;

    return 0;

    }
