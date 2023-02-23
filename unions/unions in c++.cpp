#include <iostream>
using namespace std;

union abc
{
	int a;
	char value;
};
int main(int argc, char** argv)
{
	union abc var;
	union abc *ptr= &var;
	ptr->a =19;
	ptr->value= 'x';
	cout<<ptr->a<<endl;
	cout<<ptr->value<<endl;
	return 0;
}