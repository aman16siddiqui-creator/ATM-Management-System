#include<iostream>
using namespace std;

void create_account();
void withdraw();
void transfer();
void deposit();
void electricity();
void gas();
void internet();
 
int main()
{
	double AN, AN1, AN2, AN3, CNIC, Amount, AmountT, ANR,billing,pay;//declartions
	string FirstName, LastName, City, HomeTown,type;
	char AccountType;
	int pin, pin1, pin2, pin3, a,b, age,c,codedigits;
		AN1 = 1234567891112, AN2 = 1234567891213, AN3 = 1234567891314;//initializations of accounts
		pin1 = 1234, pin2 = 5678, pin3 = 6789;//initializations of pins
		while(1){
		
		cout<<"                                      WELCOME                    \n\n\n";
		cout<<"                             1: create a new account                   \n";
		cout<<"                             2: account operations                    \n";
		cout<<"                             3: billing operations                     \n";
		cin>>a;
		switch(a)
		{
			case 1://creation of account
				cout<<" you have selected for creation of account"<<endl;
				create_account();
				
			break;	
			case 2://account operations
				{
				cout<<"you have selected for account operations"<<endl;
				cout<<"enter your account number";
				cin>>AN;
				if(AN== AN1 || AN == AN2 || AN == AN3)
		
				cout<<"enter your pin";
				cin>>pin;
				if (pin == pin1 || pin == pin2 || pin == pin3)
			cout << "Please Select an Option: \n";
		
			cout	<< "1: Withdrawal \n" << "2: Trasnfer \n" << "3: Deposit\n";
			cin >> b;
					switch (b)//withdraw money
	case 1:
			{cout << "Currency is Rs\n";
				cout << "You have selected to Withdraw Cash\n"<<endl;
				withdraw();
				
				break;
	case 2: //transfrer money
	{
	cout << "You have selected to trasnfer cash\n"<<endl;
	transfer();
		
		break; }
	case 3://for deposite money
	 {
	 cout << "Currency is Rs\n";
		cout << "You have selected to Deposit Cash.\n";
		deposit();
		
		break; 
 }
}
}
}
switch(a)
{

	case 3://for billing
		
				cout<<"you have selected for BILLING"<<endl;
		cout<<"enter 1 FOR ELECTRICITY BILL"<<endl;
		cout<<"enter 2 FOR GAS BILL"<<endl;
		cout<<"enter 3 FOR INTERNET BILL"<<endl;
		cin>>c;
		switch(c)
		{
			case 1://for electricity bill
				cout<<"you have selected for ELECTRICITY BILL"<<endl;
				electricity();
				
                  
	
		break;
	
		case 2://for gas bill
		{
				cout<<"you have been selected for GAS BILL"<<endl;
				gas();
			
          
	
			break;
			case 3://for internet bill
				cout<<"you have been selected for INTERNET bill"<<endl;
				internet();
			
					break ;
	}
}
}
}
}
 void create_account(){
 	double AN, AN1, AN2, AN3, CNIC, Amount, AmountT, ANR;//declartions
 		string FirstName, LastName, City, HomeTown,type;
 		char AccountType;
 		int pin, pin1, pin2, pin3, a,b, age,c,codedigits;
		AN1 = 1234567891112, AN2 = 1234567891213, AN3 = 1234567891314;//initializations of accounts
		pin1 = 1234, pin2 = 5678, pin3 = 6789;//initializations of pins
	
		for(int i=0 ;i<1; i++){
		
 	cout<<"enter your first name"<<endl;
				cin>>FirstName;
				cout<<"enter your last name"<<endl;
				cin>>LastName;
				cout<<"enter your CNIC"<<endl;
				cin>>CNIC;
				cout<<"enter your age"<<endl;
				cin>>age;
				if(age<18)
				cout<<"you are underage for creation of account"<<endl;
				else
				cout<<"enter your home town"<<endl;
				cin>>HomeTown;
				cout<<"enter your city"<<endl;
				cin>>City;
				cout<<"enter the account type: press S for saving \n press C for current "<<endl;
				cin>>AccountType;
				cout<<"please wait your application is in process.............\n\n\n Congratulations! your account is created";
			}
 }
 
 void deposit()
 { double AN, AN1, AN2, AN3, CNIC, Amount, AmountT, ANR;//declartions
 	
 	 int pin, pin1, pin2, pin3, a,b, age,c,codedigits;
		AN1 = 1234567891112, AN2 = 1234567891213, AN3 = 1234567891314;//initializations of accounts
		pin1 = 1234, pin2 = 5678, pin3 = 6789;//initializations of pins
 	 cout << "Enter Amount: \n";
		cin >> Amount;
		cout << " Amount Deposited.\n";
		cout<<"        THANKYOU!            ";
 }
 
 void transfer()
 {
 		double AN, AN1, AN2, AN3, CNIC, Amount, AmountT, ANR;//declartions
 		int pin, pin1, pin2, pin3, a,b, age,c,codedigits;
		AN1 = 1234567891112, AN2 = 1234567891213, AN3 = 1234567891314;//initializations of accounts
		pin1 = 1234, pin2 = 5678, pin3 = 6789;//initializations of pins
 	cout << "Currency is Rs\n";
		cout << "Enter Recipient's Account Number \n";
		cin >> ANR;
		cout << "Enter Amount: \n";
		cin >> Amount;
		if (Amount > 500)
		{
			AmountT = Amount * 0.01;//for deuction fee
			cout << "Amount Transferred. Transfer Fee: " << AmountT << " Deducted" << endl;
			
		}
	else	if (Amount > 5000)
		{
			AmountT = Amount * 0.15;//deduction fee
			cout << "Amount Transferred. Transfer Fee: " << AmountT << " Deducted" << endl;
		
		}
	else	if (Amount > 50000)

		{
			AmountT = Amount * 0.25;//deduction fee
			cout << "Amount Transferred. Transfer Fee: " << AmountT << " Deducted" << endl;
		
		}
 }
 
 void withdraw()
 {
 	double AN, AN1, AN2, AN3, CNIC, Amount, AmountT, ANR;//declartions
 	int pin, pin1, pin2, pin3, a,b, age,c,codedigits;
		AN1 = 1234567891112, AN2 = 1234567891213, AN3 = 1234567891314;//initializations of accounts
		pin1 = 1234, pin2 = 5678, pin3 = 6789;//initializations of pins
 	
 cout << "Enter Amount\n";
				cin >> Amount;
				cout << "Withdrawal Processed\n";
				cout<<"                      THANKYOU!         ";	
 }
 
 void electricity()
 {
 		double AN,AN2, AN3, CNIC, Amount, AmountT, ANR,billing,pay;//declartions
 	int pin, pin1, pin2, pin3, a,b, age,c,codedigits;
	
		pin1 = 1234, pin2 = 5678, pin3 = 6789;//initializations of pins
		
double		AN1[3]={1234567891112, 1234567891213, 1234567891314};
 	cout<<"please enter account number";
				cin>>AN;
				for(int i=0; i<1;i++){
				
				if(AN == AN1[i])
                      cout<<"enter your amount";
                      cin>>Amount;
                      cout<<"enter your CNIC number";
                      cin>>CNIC;
                  	cout<<"your ELECTRICITY BILL is successfully paid"<<endl;
                  	cout<<"             THANKYOU                    ";
 }}
 
 void gas()
 {
 	double AN, AN2, AN3, CNIC, Amount, AmountT, ANR,billing,pay;//declartions
 	int pin, pin1, pin2, pin3, a,b, age,c,codedigits;
		
		pin1 = 1234, pin2 = 5678, pin3 = 6789;//initializations of pins
		double		AN1[3]={1234567891112, 1234567891213, 1234567891314};
		for(int i=0; i<1;i++){
		
 cout<<"please enter your account number";
			cin>>AN;
			if(AN == AN1[i])
			cout<<"enter your amount";
			cin>>Amount;
			cout<<"enter your CNIC number";
                      cin>>CNIC;
                  cout<<"your GAS BILL is  successfully paid"<<endl;
                  cout<<"          THANKYOU                 ";
}
 }
 
 void internet()
 {
 		double AN, AN2, AN3, CNIC, Amount, AmountT, ANR,billing,pay;//declartions
 	int pin, pin1, pin2, pin3, a,b, age,c,codedigits;
	
		pin1 = 1234, pin2 = 5678, pin3 = 6789;//initializations of pins
			double		AN1[3]={1234567891112, 1234567891213, 1234567891314};
		for(int i=0; i<1;i++){
		
 		cout<<"please enter your account number";
				cin>>AN;
					if(AN == AN1[i])
					cout<<"enter your amount";
					cin>>Amount;
				cout<<"enter your CNIC number";
                      cin>>CNIC;	
					cout<<"your INTERNET BILL is successfully paid"<<endl;
				cout<<"                  THANKYOU!           ";
 }
 
}
	


