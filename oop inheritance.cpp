#include <iostream>
#include <string>
using namespace std ;

class Father{
		protected:
string surname = "Fateh Ali Khan";
};
class son1:Father
{
string name = "Chahat";
 public:
void show(){
	cout<<" "<< name << " " <<surname ;
}
};
class son2:Father{
	string name = "Rahat";
	public:
	void display(){
		cout<<"\n "<< name << " " <<surname ;
}
};
int main ()
{
	son1 s1;
	s1.show();
	
	son2 s2;
	s2.display();
}
