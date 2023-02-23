#include <iostream>
using namespace std;

struct abc
{
	int a;
	char value;
};
int main(int argc, char** argv)
{
	struct abc var;
	struct abc *ptr=&var;
	ptr->a=1007;
	ptr->value='A';
	cout<<ptr->a<<endl;
	cout<<ptr->value<<endl;
	cout<<var.a<<endl;
	cout<<var.value<<endl;
	return 0;
}