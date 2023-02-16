// Void Functions and Parameters
// 
// I CAN write and call void functions

#include <iostream>
using namespace std;


// Welcome function
// Displays a greeting message
void welcome() {
	cout << "WELCOME TO THE VOID FUNCTION NOTES" << endl;
	cout << "*****************************" << endl << endl;
}

//Display msg n times 
void spam(string msg, int n) {
	for (int i = 0; i < n; i++) {
		cout << msg << endl;
	}
}


int main()
{
	//Not all functions produce an output (return value)
	//These functions are call VOID

	//EXAMPLE 1
	//Call the welcome function


	//Void functions do a job, but do not return an answer

	//EXAMPLE 2
	//Let's write and call a function that spams the  
	//message "Buy Gecko Insurance!" 20 times	
	spam("Buy Gecko Insurance!", 20);


	//EXAMPLE 3
	//You try: spam the message "Drink Pepsi" x times, where n
	//is a number entered by the user
	int x;
	cout << "Enter a number " << endl;
	cin >> x;
	spam("Drink Pepsi", x);



	system("pause");
}

