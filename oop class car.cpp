#include <iostream>
using namespace std;

class Car {
public:
 string brand;
 int speed ;
 
 void show (){
 	
 	 cout<<"brand : " << brand <<"\nspeed : "<< speed ;
 }	 
};

int main () {
Car C ;
C.brand = "audi" ;
C.speed = 200 ;
C.show();
}

