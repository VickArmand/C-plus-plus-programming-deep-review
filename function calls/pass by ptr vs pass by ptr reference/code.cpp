#include <iostream>
using namespace std;
/**
 * finding out the difference between int*ptr(pass by pointer) and int*&ptr(pass by pointer reference) 
 * in pass by pointer a copy of the address is stored in another variable while in pass by pointer reference the same variable that is passed is manipulated
*/
int box1 = 1;
int box2 = 2;
int *gptr;

void passbyPtr(int *ptr);
void passbyPtrRef(int *&ptrRef);

int main(void)
{
    int *p = &box1;
    gptr = &box2;
    cout<<"\n_________Normal Condition______\n";
    if(p == &box1)
    {
        cout<<"p is pointing to box 1";
    }
    else if (p == &box2)
    {
        cout<<"p is pointing to box 2";
    }
    else
    {
        cout<<"p is pointing to another box";
    }
    if(gptr == &box1)
    {
        cout<<"gptr is pointing to box 1";
    }
    else if (gptr == &box2)
    {
        cout<<"gptr is pointing to box 2";
    }
    else
    {
        cout<<"gptr is pointing to another box";
    }
    cout<<"\n_________Condition after function call______\n";
    passbyPtr(p);
    cout<<"\nValue of box1 and box2 after function call is: "<<box1<<" "<<box2;
    passbyPtrRef(p);
     cout<<"\nValue of box1 and box2 after function call is: "<<box1<<" "<<box2;
}
void passbyPtr(int *ptr)
{
   *ptr = 5;
    ptr = gptr;
    *ptr = 3;
    cout<<"\n_________passbyPtr called successfully______\n";

}
void passbyPtrRef(int *&ptrRef)
{
    *ptrRef = 15;
    ptrRef = gptr;
    *ptrRef = 13;
    cout<<"\n_________passbyPtrRef called successfully______\n";
}