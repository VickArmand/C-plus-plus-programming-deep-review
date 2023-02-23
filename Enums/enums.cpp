#include <iostream>
using namespace std;

int main()
{
    enum days{
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday= 10,
        friday,
        saturday
    };
    // if not assigned a value each element in the enum will be assigned a number starting from 0
    cout<<sunday<<"\n";
    cout<<monday<<"\n";
    cout<<tuesday<<"\n";
    cout<<wednesday<<"\n";
    cout<<thursday<<"\n";
    cout<<friday<<"\n";
    cout<<saturday<<"\n";
    days obj;
    obj = monday;
    cout<<obj<<"\n";
}