#include <iostream>
using namespace std;
/**
 * difference between pass by value and pass by reference and pass by pointer
*/
void passbyValue(int x);
void passbyRef(int &ref);
void passbyPtr(int *ptr);

int main()
{
    int x = 5;
    cout<< "_____Before pass by value_________\n";
    cout<<" x is: "<<x<<"\n";
    passbyValue(x);
    cout<< "________After pass by value________\n";
    cout<<" x is: "<<x<<"\n";
    cout<< "_____Before pass by pointer_________\n";
    cout<<" x is: "<<x<<"\n";
    passbyPtr(&x);
    cout<< "_____After pass by pointer_________\n";
    cout<<" x is: "<<x<<"\n";
    cout<< "_____Before pass by reference_________\n";
    cout<<" x is: "<<x<<"\n";
    passbyRef(x);
    cout<< "_____After pass by reference_________\n";
    cout<<" x is: "<<x<<"\n";
    return 0;
}
void passbyValue(int val)
{
    val = 10;
    cout<<" val is: "<<val<<"\n";
}
void passbyRef(int &ref)
{
    ref = 20;
    cout<<" ref is: "<<ref<<"\n";
}
void passbyPtr(int *ptr)
{
    *ptr = 30;
    cout<<" *ptr is: "<<*ptr<<"\n";
}