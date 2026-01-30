#include <iostream>
using namespace std;
#include <string>


class student {
	int age;
	string Name;


public:
	student(string n,int a){
		Name=n;
		setAge(a);
	}
	void setAge(int a) {
		if(a>0)
		age=a;
		else
		age=0;
	}
	int getAge() const{
		return age;
	}
};

int main (){
	student s("Atibaa",18 );
	cout<<s.getAge();
}
