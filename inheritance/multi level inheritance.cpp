#include <iostream>
using namespace std;
class Grandparent {
	public :
		void showgp(){
			cout<<"this is grandparent class"<< endl;
		}
		
};
class parent : public Grandparent{
	public:
	void showp(){
					cout<<"this is parent class"<< endl;

	}
};

class child : public parent{
	public:
		void showc(){
								cout<<"this is child class"<< endl;

		}			
	
};

int main (){
	child obj ;
	obj.showgp();
	obj.showp();
	obj.showc();
	return 0 ;
	
}

