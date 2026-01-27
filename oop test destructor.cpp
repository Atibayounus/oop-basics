#include <iostream>
using namespace std;

class Test{
	
	public:
		~Test(){
			cout<<" destructor called "<<endl ;
		}
		
};
int main (){
	Test T ;
}
