#include <iostream>
using namespace std;

struct Interview{
	string question;
	string choices[3];
	int correct; 
};
void printQuestion(Interview i){
	cout<<i.question<<endl;
	for(int x=0;x<i.choices.length();x++){
		cout<<i.choices<<endl;
	}
	
}
int main(){
	Interview i;
	i.question="Who is the fourth president of Kenya";
	i.choices=["William Ruto","Hon. Uhuru Kenyatta","Mzee Daniel Arap Moi"];
	i.correct=1;
		
}