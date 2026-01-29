#include <iostream>
using namespace std;

class shape{
	public:
		void draw(){
			cout<<"draw a shape" <<endl;
		}
};
 class rectangle: public shape {
 	public:
 		void area(){
 			cout<<"area of rectangle = length*width"<<endl;
 		}
 };
 
 class circle: public shape {
 	public:
 		void area(){
 			cout<<"area of circle = Pi*r*r"<<endl;
 		}
 };
 int main () {
 	rectangle r ;
 	circle c ;
 	
 	r.draw () ;
 	r.area ();
 	
 	c.draw ();
 	c.area ();
 	
 	return 0 ;
 }
