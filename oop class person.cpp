#include <iostream>
using namespace std;

class Person {
private:
	string name ;
	int age ;

public:
	void setdata(string n, int a){
	name = n ;
	age  = a ;
}
void showdata (){
	
	cout <<"Name : " <<name <<"\nAge : "<<age;
		
}
};
int main(){
	Person P ;
	P.setdata("alexa",18 );
		P.showdata( );
}
