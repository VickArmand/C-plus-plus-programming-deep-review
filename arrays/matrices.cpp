#include <iostream>
using namespace std;
int main()
{
    int i;
    float sum = 0, price[6];
    // cout<<"Enter the number of elements";
    // cin>> num;
    cout<<"Enter six numbers\n";
    for(i = 0; i < 6; i++)
    {
        cin>> price[i];
        sum+=price[i];
    }
    cout<<"Sum is "<<sum<<"\n";
    return(0);
}
