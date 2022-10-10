/*
**Program name: project2
**Author: Julian Henry
**Date: 04/14/21
**Description: pulse pressure (in mmHg) and mean arterial pressure (in mmHg) for the user using input from user.
**Input: diastolic and systolic pressures (in mmHg).  
**Output: Mean arterial pressure (in mmHg) and pulse pressure (in mmHg).
*/


#include <iostream>
using namespace std;

int main() {

		//declare variables
	float sp = 0;
	float dp = 0;
	float pp = 0;
	float map = 0;

		//introduce program
	cout<<"Welcome, user.\n\n This program will calculate your pulse pressure and your " <<
	"mean arterial pressure. \nTo get your results, you will need to input the following " <<
	"information when prompted:\n\n Your systolic pressure\n Your diastolic  pressure\n" << endl; 

		//get user input
	while (sp <= 0) {
  	cout<<"Enter systolic pressure (in mmHg): ";
		cin>>sp;
		if (sp <= 0) {
			cout<<endl<<"Input not valid. Please enter a valid positive number.\n"<< endl;
			cin.clear();
			cin.ignore();
			}
		}
	while (dp <= 0) {
  	cout<<"Enter diastolic pressure (in mmHg): ";
		cin>>dp;
		if (dp <= 0) {
			cout<<endl<<"Input not valid. Please enter a valid positive number.\n"<< endl;
			cin.clear();
			cin.ignore();
			}
		}

 	// calculate pulse pressure
	if (sp>dp) {
		pp = sp - dp;
	}
	else {
		pp = dp - sp;
	}
	// calculate mean arterial pressure
	map = (pp/3.0) + dp;

	//return outputs to user and check ranges of pp and map
	if (pp > 80) {
		cout << "\nYour pulse pressure is " << pp << " mmHg. This is too high!" << endl; 
	} 
	else {
		cout << "\nYour pulse pressure is "<< pp << " mmHg. This is acceptable." << endl;
	}
	if (map < 60) {
		cout << "\nYour mean arterial pressure is " << map << " mmHg. This is dangerously low. Seek medical attention.\n" << endl;
	}
	else {
		cout << "\nYour mean arterial pressure is " << map << " mmHg. This is acceptable.\n" << endl;
	}
}
