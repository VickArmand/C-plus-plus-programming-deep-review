#include <iostream>
using namespace std;

class Abstractemployee{
	virtual void AskForPromotion()=0;
};
class employee: Abstractemployee  {
	private:
	string Name;
	string Company;
	int age;
	
public:
	void setName(string name){
		Name=name;
	}
	string getName(){
		return Name;
	}
		void setCompany(string company){
		Company=company;
	}
	string getCompany(){
		return  Company;
	}
	void setage(int Age){
		age=age;
	}
	int getage(){
		return age;
	}
	
		
	void intoduceyourself(){
	cout<<"Name = "<<Name<<endl;
	cout<<"company = "<<Company<<endl;
	cout<<"Age = "<<age<<endl;
	}
	employee(string name,string company,int Age){
		Name=name;
		Company=company;
		age=Age;
	}
	void AskForPromotion(){
		if (age>30){
			cout<<"got promoted"<<endl;
		}
		else
		{
			cout<<"not promoted"<<endl;
		}
	}

};
class Developer:employee{
public:	
	   string Favproglanguage;
	   Developer(string name,string company,int Age,string favproglanguage ):employee(name,company,Age ){
		   Favproglanguage=favproglanguage;
	   }
	   void fixbug(){
		   cout<<getName()<<"Continue fixing bags in "<<Favproglanguage<<endl;
	   }
};
int main(int argc, char** argv)
{
		
		
	employee Employee1=employee("Mutembei Moris","Jumia Kenya",30);

	Employee1.intoduceyourself();
	
	Employee1.setage(32);
	cout<<Employee1.getName()<<" is "<<Employee1.getage()<<" years old "<<endl;
	
	Employee1.AskForPromotion();
	Developer d=Developer("Morris mutembei ", "Jumia Kenya" ,32, "Java"); 
	d.fixbug();
	return 0;
}	
	