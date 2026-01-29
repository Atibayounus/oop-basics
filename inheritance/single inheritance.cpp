#include <iostream>
using namespace std;

class Employee {
	protected:
		
	int id;
	string name ;
	
	public :
		void setEmployee(int i , string n){
			
			id = i ;
			name = n ;
			
			
		}
		
};
class salary :public Employee {
	private :
		float salary ;
	public:
		void setsalary ( int i , string n , float s){
			setEmployee (i , n);
			salary = s;
		}
	void display (){
		cout <<"employee id : " << id << endl ;
		cout <<"name  : " << name << endl ;
		cout <<"salary : " << salary << endl ;

	}
};
int main (){
	salary s ;
	s. setsalary (100 , "chahat" ,2000) ;
	s.display() ;
	return 0 ;
}
