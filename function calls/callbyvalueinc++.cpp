#include <iostream>
using namespace std;
void my_function(int x){
x=50;
cout<<"Value of x from this function is: "<<x<<endl;	
}
int main(){
int x=10;
my_function(x);
cout<<"Value of x from main function is: "<<x<<endl;	
}