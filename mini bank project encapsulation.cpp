#include<iostream>
using namespace std;

class BankAccount{
	private:
		string accountNumber;
		double balance;
	public:
		BankAccount( string accNum,double initialBalance){
			accountNumber=accNum;
			balance=initialBalance;
		}
//getter
double getBalance() const {
	return balance ;
	
}

void deposit(double amount){
	if(amount>0){
		balance+=amount;
		cout<<"Deposited amount:"<<amount<<endl;

	}else
	cout<<"Invalid deposit amount"<<endl;
	
}
void withdraw(double amount){
	if(amount>0 && amount<=balance){
			balance-=amount;
		}else
		
	cout<<"Invalid withdrawn amount"<<endl;

}
};

int main(){
	BankAccount myAccount("121221",5000);
 cout << myAccount.getBalance() << endl;
	myAccount.deposit(1000);
	myAccount.withdraw(300);

return 0 ;
}















