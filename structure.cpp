#include <iostream>
using namespace std;

//Structure stores different type of data
  struct employee 
    {
        int emId;
        char favChar;
        float salary;
    };

//Unions are similar to structure but helps in better memory allocation
union money
{
    int rice;
    float pounds;
    char car;
};

int main(){
    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;


  struct employee arisha;
  arisha.emId = 1;
  arisha.favChar = 'a';
  arisha.salary = 1000000000;
    cout<<arisha.emId<<endl;
    cout<<arisha.favChar<<endl;
    cout<<arisha.salary<<endl;
    
    
    union money m1;
    /* We can use any one of these at a time
     otherwise it will show us garbage value */
    m1.rice = 34;
    cout<<m1.rice<<endl;
    m1.car = 'c';
    // cout<<m1.car<<endl;
    m1.pounds = 12.20;
    cout<<m1.pounds<<endl;
     
    return 0;
}