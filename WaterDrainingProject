/*
**Program name: project4
**Author: Julian Henry
**Date: 05/05/21
**Description: water height and volume lost are displayed for every
	second for the user using water tank height, tank radius, and time 
	as inputs from user.
**Input: tank height (in inches), tank radius (in inches), and amount
	of time (in seconds).   
**Output: time elapsed at step (in seconds), water height (in inches),
	and volume lost (in gallons).
*/


#include <iostream>
#include <math.h>
using namespace std;
const float PI = 3.14159265359;

void nowatermessage(){
  cout << "No more water\n.";
			}
      
int main() {

	//welcome and instructions
	cout<<"Welcome, user.\n\n This program will calculate how much " <<
	"water leaves a cylindrical water tank through a 2 inch nozzle."<<
	"\nTo get your results, you will need to input the following " <<
	"information when prompted:\n\nWater tank height in inches (as a " <<
	"float)\nRadius of the water tank in inches (as a float)\nNumber "<<
	"of seconds nozzle is open\n" << endl; 

	// initialize variables
	float height = 0;
	float radius = 0;
	float time = 0;
	float lost_volume = 0;
	float water_height = 0;
	float velocity = 0;
	float init_volume = 0;
	float current_volume = 0;

	
	//Get inputs
	while (height < 36 || height > 2880){  
		cout<<"Enter the height of the cylindrical tank, in inches(36-2880): ";
		cin>>height;
		if (height < 36 or height > 2880) {
			cout << "Your input is out of limit. please enter a number between 36 and 2880.\n";
			height = 0;
		}
	}
	while (radius < 24 || radius > 432){  
		cout<<"Enter the radius of the cylindrical tank, in inches(24-432): ";
		cin>> radius;
		if (radius < 24 || radius > 432) {
			cout << "Your input is out of limit. please enter a number between 24 and 432.\n";
			radius = 0;
		}
	}
	while (time < 1 || time > 500){  
		cout<<"Enter the number of time steps, in seconds (1-500): ";
		cin>> time;
		if (time < 1 || time > 500) {
			cout << "Your input is out of limit. please enter a number between 1 and 500.\n";
			time = 0;
		}
	}
	// calculate and print outputs
	init_volume = PI * radius * radius * height;

	cout << "Initial volume in tank: " << init_volume * 0.004329 << " gallons.\n";


	//get equation variables ready
	int x =1;
	current_volume = init_volume;
	water_height = current_volume / (PI * radius * radius);
	//time loop
	for (x = 1; x <= time; x++) {
		velocity = 8.02 * 12  * float (sqrt(water_height));
		lost_volume = velocity * 4 * PI;
		current_volume -= lost_volume;
		water_height = current_volume / (PI * radius * radius);

		//  tell user outputs
		cout<< "After " << x << " second(s):\n";
		cout << "Volume lost at this time step: " << lost_volume * .004329 << " gallon(s)\n";
		cout << "Water height at this time step: " << water_height << " inch(s)\n";

		if (water_height <= 0) {
			nowatermessage();
			return 0;
		}	
	}
}
