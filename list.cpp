//Link.cpp
#include "List.h"
 
 List :: List(){
	head= tail = NULL;		//short_hand
	
}
List :: ~List(){
	if(head){
		Node*t= head;
		head= head -> next;
		while( head!= NULL){
			delete t;
			t= head;
			head= head -> next;
			
		}
	}
}
bool List::creat_node(string name,int id,int age,float gpa){

Node *temp=new Node;		//dynamic allocatee
temp->name=name;
temp->id=id;
temp->age=age;
temp->gpa=gpa;
if(!head){
	head= temp;
	tail= temp;
	return true; 
	
}
else{
	tail=tail -> next;
	temp= NULL;
	return true;
	
}
return false;
}
void List::display(){
	if(!head){
		cout<<"linked list does not exist"<<endl;
		
	}
	else{
		int node=1;
		Node *t=head;
		while(t!=NULL){
			cout<<"node:"<<node+1<<endl;
			cout<<"----------------------------------------------"<<endl;
			cout<<"ID"<<t->id<<endl;
			cout<<"name"<<t->name<<endl;
			cout<<"age"<<t->age<<endl;
			cout<<"gpa"<<t->gpa<<endl;
			cout<<"----------------------------------------------"<<endl;
		t=t->next;
	}
	
	}
	}

