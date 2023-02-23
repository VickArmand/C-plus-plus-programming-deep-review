#include <iostream>
using namespace std;
struct node{
 int data;
 struct node *next;	
}var;

int main(){
struct node *ptr=&var;
cout<<ptr->data<<endl;	
}