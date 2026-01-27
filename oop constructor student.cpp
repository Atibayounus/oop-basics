#include <iostream>
#include <string>
using namespace std;

class Student {
	
string name ;
int age ;	
	
	public:
	Student (string n, int a){
		name = n;
		age = a;
	}	
	
	
void display (){
	cout<<"Name : " << name <<"\nAge  : "<< age<<endl ;
	
}

};

int main () {
	
	Student s1( "Atiba" , 18) ;
	s1.display() ;
}
