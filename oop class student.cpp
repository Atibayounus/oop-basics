#include <iostream>
using namespace std;

class Student {
public:
	string name;
	int roll;
	
	void display (){
			cout<<"name : "<<name << "\nroll : "<<roll;
	}
};
int main (){
Student s;
s.name = "atibaaa";
s.roll = 111;
s.display();
}
 
