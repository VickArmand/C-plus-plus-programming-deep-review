#include <iostream>
using namespace std;

#define max 50;//Macros
//templates in c++
template <typename T>
T add(T x, T y){
	cout<< x+y<<endl;
	
}
int main(int argc, char** argv)
{
 	add(2.5,3.5);
	 add(2,4);  
	return 0;
}