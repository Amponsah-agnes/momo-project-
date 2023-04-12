#include<iostream>
using namespace std;

int main() {
	
	// Set a default values
	string pin = "0000" , new_pin, number;
	float balance = 1000;
	int attempts = 0;
	bool authenticated = false;
	
	
	
		
		// Authenticate user
		string input_pin;ecode:
		cout<< "enter your input_pin:\n";
		cin>>input_pin;
		
		
		if(input_pin==pin) {
			// Correct pin entered, [reset attempt] counter
			   authenticated = true;
			   attempts=0;
		}
		else{
			// Incorrect pin entered, increment attempts counter
			  attempts++;
			  
			if(attempts >= 3) {
				// Too many attempts, [exits program]
				cout<< "too many attempts. Exiting program.\n";
				return 0;
				   
			}
			cout<< "incorrect pin. Try again.\n";
			goto ecode;   
		}
		
	
		// Loop until [user exits]
		while(authenticated){
		
		
		// Authenticated, [display menu]
	     int choice;
		  cout<< "1. Check balance\n";
		  cout<< "2. Send money\n";
		  cout<< "3. Change/reset pin\n";
		  cout<< "4. Exits\n";
		  cout<< "enter your choice:\n";
		  cin>>choice;
		  
		  // Handle [user choice]
		     switch(choice) {
		     	
		     	case 1:
		     		// Check balance
		     		cout<< "your balance is" << balance <<endl;
		     		   break;
		     		   
		     		   case 2:
		     		   	   // Send money
		     		   	   int amount;
		     		   	   cout<< "enter number to send to:\n";
		     		   	   cin>>number;
		     		   	   cout<< "enter amount to send:\n";
		     		   	   cin>>amount;
		     		   	if(amount>balance) {
		     		   		cout<< "insufficient amount.\n";
		     		   		
							}
							else {
								balance=balance-amount;
								cout<<amount<<" sent to "<<number<<endl;
								cout<<"Balance is " <<balance <<endl;
								return 0;
							}
							
							case 3:
								// Change pin
							
								cout<< "enter new_pin:\n";
								cin>>new_pin;
								pin=new_pin;
								cout<<"New_pin is "<<pin;
							  break;
								  
								case 4:
								  	// Exits
								  	cout<< "exiting program" <<endl;
								  	 return 0;
								 	 

								default:
								  	 	cout<< "invalid choice. Try again.\n";
								  	 	return 0;
								break;
			 }
		}
		
			 	return 0;
		}