#include <iostream>
using namespace std;

class Box {
	int length ;
	public :
		Box(){
			length = 23 ;
		}
		
		void show(){
			cout << " length : " <<  length << endl ;
		}
		
};
int main (){
	Box b ;
	b.show();
}
