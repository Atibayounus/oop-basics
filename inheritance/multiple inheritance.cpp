#include <iostream>
using namespace std;

class Father{
public:
void skillsFather()	{
	cout<<"father can cook"<<endl;
}
	
};

class Mother {
	public:
		void skillsMother(){
			cout<<"mother can bake"<<endl;
		}
	
};

class child:public Father, public Mother{
	public:
	
 	void skillsChild(){
			    	cout<<"i can eat "<<endl;

		}
	
};

int main(){
	child c;
	c.skillsFather();
	c.skillsMother();
	c.skillsChild();
	return 0;

}





