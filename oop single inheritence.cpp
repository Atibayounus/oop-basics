#include <iostream>
using namespace std;

class Base{
	public:
		int x; 
};		

class Derived: public Base{
	public:
		int Y ;
		
};
int main (){
	Derived obj ;
	cout <<"enter x : "<<endl;
	cin >> obj.x ;
	
	cout <<"enter y : "<<endl;
	cin >> obj.Y ;
	
	
	cout << "sum = " << obj.x + obj.Y <<endl;
	return 0;
	
}

