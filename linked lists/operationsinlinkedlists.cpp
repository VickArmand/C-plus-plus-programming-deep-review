#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
int data;
struct node * next;	
};
struct node *head;
void insertelement();
void printlist();
void lastinsert();
void deleteelement();
void deletelastelement();
void searchelement();
void deleteFirst();
int main()
{
int option=0;
while(option!=10){
cout<<"Select the following options to interact with the linked list"<<endl;
cout<<"1. Insert an element at the beginning of the list"<<endl;
cout<<"2. Insert an element at the end of the list"<<endl;
cout<<"3. Delete an element at any position of the list"<<endl;
cout<<"4. Delete an element in the end of the list"<<endl;
cout<<"5. Display the list of all elements"<<endl;
cout<<"6. Search for an element"<<endl;
cout<<"7. Delete an element at the beginning of the list"<<endl;
cout<<"10. Exit"<<endl;
cout<<"Enter an option"<<endl;
cin>>option;	
switch(option){
	case 1:
		insertelement();
		break;
	case 2:
		lastinsert();
		break;	
	case 3:
		deleteelement();
		break;
	case 4:
		deletelastelement();
		break;
	case 5:
		printlist();
		break;
	case 6:
		searchelement();
		break;
	case 7:
		deleteFirst();
		break;
   default:
     	cout<<"Wrong choice"<<endl;
     	break;
}	
}

}
void insertelement(){
/*Inserting an element at the begining of the linked list */
int item;
cout<<"Enter a value to include as the head"<<endl;
cin>>item;	
struct node * current =(struct node *)malloc(sizeof(struct node));
current->data=item;
current->next=head;
head=current;
cout<<"Node inserted at beginning of list"<<endl;	
}
void lastinsert(){
	/*Inserting an element at the last position of the linked list */
int item;
struct node* temp;
struct node* current =(struct node *)malloc(sizeof(struct node));
cout<<"Enter a value of element"<<endl;
cin>>item;	
current->data=item;
if(head==NULL){
	current->next=NULL;
	head=current;
	cout<<"Node inserted at beginning of list"<<endl;
	
}
else{
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
			
	}
	temp->next=current;
	current->next=NULL;
	cout<<"Node inserted"<<endl;
}
	
}
void searchelement(){
	int value;
	cout<<"Enter the element value to be found"<<endl;
	cin>>value;
	struct node* ptr;
	ptr=head;
	if(ptr==NULL){
	cout<<"Empty list"<<endl;	
	}
	else{
		bool flag=false;
	while(ptr!=NULL){
		
		if(ptr->data==value){
			flag=true;
			break;
			
		}
		else{
			flag=false;
		}
		ptr=ptr->next;
			
	}
	if(flag){
		cout<<"Element found"<<endl;
	}
	else{
		cout<<"Element not found"<<endl;
	}	
	}

}
void deleteFirst(){
	if(head==NULL){
		cout<<"Empty list"<<endl;
	}
	else{
		struct node* ptr;
		ptr=head;
		head=ptr->next;
		free(ptr);	
		cout<<"Element deleted"<<endl;
	}
}
void deleteelement(){
	/* Deleting an element in any position of the list*/

	if(head==NULL){
		cout<<"Empty list"<<endl;
	}
	else{
		struct node *ptr,*ptr1;
	int position;
	cout<<"Enter the position of the element to be deleted"<<endl;
	cin>>position;
	ptr=head;
	for (int i=0;i<position;i++){
		ptr1=ptr;/*pointer to the previous element*/
		ptr=ptr->next;/*pointer to the next element*/
	
	}
		if(ptr==NULL){
			cout<<"Element doesn't exist";	
		}
		else{
	ptr1->next=ptr->next;
	free(ptr);
	cout<<"Element at"<<position<<"deleted"<<endl;
		}	

	}
}
void deletelastelement(){
	/* Deleting an last element of the list*/
	if(head==NULL){
		cout<<"Empty list"<<endl;
	}
	else if(head->next==NULL){
	head=NULL;
	free(head);	
	cout<<"Element deleted"<<endl;
	}
	else{
	struct node* temp,* temp1;
	temp=head;
	while(temp->next!=NULL){
		temp1=temp;/*pointer to the second last element*/
		temp=temp->next;/*pointer to the last element*/
	}
	temp1->next=NULL;	/*Setting the pointer to the last element to null*/
	free(temp);/*Free the address of the last element*/

	cout<<"Element deleted"<<endl;
	}	
}
void printlist(){
	/*Displaying elements in a linked list */
	if(head==NULL){
	cout<<"Empty linked list"<<endl;
}
else{
	cout<<"ELEMENTS IN THE LIST ARE:.... ";
	struct node* ptr=head;
	while(ptr!=NULL){
	cout<<ptr->data<<endl;
	ptr=ptr->next;
		
	}
}
}