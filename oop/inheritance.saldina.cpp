#include <iostream>
using namespace std;
class AbstractEmployee{
	virtual void AskForPromotion()=0;
};
class Employee:AbstractEmployee{
	private:
		string Name;
		string Company;
		int Age;
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
				return Company;
			}
			void setAge(int age){
				Age=age;
			}
			int getAge(){
				return Age;
			}
			void introduceyourself(){
				cout<<"Name-"<<Name<<endl;
				cout<<"Company-"<<Company<<endl;
				cout<<"Age-"<<Age<<endl;
			}
			Employee(string name,string company,int age){
				Name=name;
				Company=company;
				Age=age;
			}
			void AskForPromotion(){
				if(Age>30){
					cout<<Name<<"got promoted!"<<endl;
					
				}
				else
				{
					cout<<Name<<"sorry no promotion for you"<<endl;
				}
			}
		
			
};
class Developer:Employee{
	public:
		string FavProgrammingLanguage;
		Developer(string name,string company,int age,string favProgrammingLanguage)
			:Employee(name,company,age)
			{
				FavProgrammingLanguage=favProgrammingLanguage;
			}
		void FixBug(){
			cout<<getName()<<"fixed bug using"<<FavProgrammingLanguage<<endl;
		}	
};
int main()
{
	Employee employee1=Employee("saldina","YT-CodeBeauty",25);
	Employee employee2=Employee("John","Amazon",35);
	Developer d=Developer("saldina","YT-CodeBeauty",25,"C++");
	d.FixBug();
	return 0;
}