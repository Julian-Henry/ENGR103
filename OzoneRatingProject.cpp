/*
Program name: project3
Author: Julian Henry
Date: 04/20/21
Description: Ozone rating is displayed for the user using an observed 8-hour
		mean level of ozone at ground level (0-500 micro g/m^3) as input from user.
Input: mean ozone level (in micro g/m^3) 
Output:  safety rating according to the WHO scale.
*/

#include <iostream>
using namespace std;

int main() {

	cout << "\nWelcome, user.\n\n This program will tell you the ozone level rating according " <<
	"to a scale provided by the WHO. \nTo get your results, you will need to input the " <<
	"observed 8-hour mean level of ozone at ground level (0-500 micro g/m^3)\n" << endl; 

	// initialize variable
	float ozonelvl = -1;

	//Get input
	while (ozonelvl < 0 || ozonelvl > 500){
		cout << " Enter the mean level of ozone at ground level in micro g/m^3. This should be between 0 and 500: ";
		cin>> ozonelvl;
 		if (ozonelvl < 0 || ozonelvl > 500){
			cout << "Please enter a number between 0 and 500." << endl;
			ozonelvl = -1;
		}
	}
 
// print quality level
	if (ozonelvl <= 50) {
		cout << "Your ozone level is GOOD." << endl;
	}
	else if (ozonelvl <= 100) {
		cout << "Your ozone level is MODERATE." << endl;
	}
	else if (ozonelvl <= 150) {
		cout << "Your ozone level is UNHEALTHY FOR SENSITIVE GROUPS." << endl;
	}
	else if (ozonelvl <= 200) {
		cout << "Your ozone level is UNHEALTHY." << endl;
	}
	else if (ozonelvl <= 300) {
		cout << "Your ozone level is VERY UNHEALTHY." << endl;
	}
	else {
		cout << "Your ozone level is HAZARDOUS." << endl;
	}

// print ozone limit has been exceeded message
	if (ozonelvl > 100) {
		cout << "Your ozone level has exceeded the 8-hour mean of 100 micro g/m^3." << endl;
	}
}
