#include <iostream>
using namespace std;
struct SmartPhone{
	string name;
	int storage;
	string color;
	float price;
};
struct Owner{
	string name;
	int age;
	SmartPhone myphone;	
};
void printSmartPhoneInfo(SmartPhone myphone){
	cout<<"-----------------PHONE DETAILS---------------------"<<endl;
	cout<<"Name of phone is "<<myphone.name<<endl;
	cout<<"Storage is "<<myphone.storage<<endl;
	cout<<"Color of phone is "<<myphone.color<<endl;
	cout<<"Phone's price is  "<<myphone.price<<endl;
	cout<<"-----------------FIN-------------------------------\n"<<endl;
}
void printPersonInfo(Owner p){
	cout<<"-----------------PHONE OWNER DETAILS---------------------"<<endl;
	cout<<"Name of owner is "<<p.name<<endl;
	cout<<"Aged  "<<p.age<<endl;
	printSmartPhoneInfo(p.myphone);

}

int main(){
	SmartPhone phone1;
	Owner o;
	phone1.name="Samsung Galaxy S21 Ultra";
	phone1.color="Black";
	phone1.storage=32;
	phone1.price=19999.99;
	o.name="Led Zeppelin";
	o.age=32;
	o.myphone=phone1;
	printPersonInfo(o);
	
	SmartPhone phone2;
	Owner o1;
	phone2.name="IPhone 12";
	phone2.color="Gray";
	phone2.storage=64;
	phone2.price=21999.99;
	o1.name="Billie Armstrong";
	o1.age=39;
	o1.myphone=phone2;
	printPersonInfo(o1);


		
}