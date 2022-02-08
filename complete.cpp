// Void Functions and Parameters

// I CAN write and call functions
// I CAN explain and use function parameters


#include <iostream>
using namespace std;

//** Functions start here **
void welcome() {
	cout << "WELCOME TO THE FUNCTION NOTES" << endl;
	cout << "*****************************" << endl << endl;
}

void doubleIt(int num) {
	cout << num << " doubled is " << num * 2 << endl << endl;
}

void spam(string msg, int times) {
	for (int i = 0; i < times; i++) {
		cout << msg << endl;
	}
}

//** Functions end here **


int main()
{
	//FUNCTIONS are short tasks that allow us to break
	//problems into smaller chunks. 

	//Every function has an IDENTIFIER used to CALL the
	//function. When we CALL the funtion, it performs its 
	//task

	//Call the welcome function
	welcome();

	//PARAMTERS allow us to send information to a function
	//The function uses this information to perform its task

	//Let's call a function that doubles a number
	doubleIt(723);

	//Let's call a function that spams the message "Buy Gecko Insurance!" 
	//20 times
	spam("Buy Gecko Insurance!", 20);

	//You try: spam the message "Drink Pepsi" 13 times
	spam("Drink Pepsi", 13);

	//You try: spam the message "Tibor was here" n times, where
	//         n is a number entered by the user
	int n;
	cout << "Enter a number " << endl;
	cin >> n;
	spam("Tibor was here", n);



	system("pause");
}

