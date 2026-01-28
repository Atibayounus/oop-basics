#include <iostream>
#include <cstdlib> 
using namespace std;

class vehicle {
	public:
	string brand;
	int speed ;
	void show (){
		cout<<"brand is"<<brand<<endl;
	}
};
class car :public vehicle {
	public:
	string fueltype;
	void display (){
		show();
		cout<<"fueltype is"<< fueltype <<endl;
	}
	
};
int main(){
	vehicle v1;
	v1.brand = "hondaa";
	v1.speed = 200;	
	v1.show ();
	
	car c1;
	c1.brand ="civic";
	c1.speed =100;
	c1.fueltype="petrol";
	c1. display ();
	
	return 0 ;
}
