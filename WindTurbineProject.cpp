/*
**Program name: project1
**Author: Julian Henry
**Date: 04/10/21
**Description: calculates actual and maximum power output for a wind turbine using input from user.
**Input: windspeed, operating efficiency, blade radius, air density.  
**Output: maximum and actual power output, inputs are also printed out to user again.
*/


#include <iostream>
using namespace std;
const float PI = 3.14159265;

int main() {
		//declare variables
	float windspeed = 0;
	float opefficiency = 0;
	float radius = 0;
	float density = 0;

	cout<<"Welcome, user.\n\n This program will calculate the maximum and expected amount of power your wind turbine can produce. \nTo get your results, you will need to input the following information when prompted:\n\n• The average wind speed (in m/s)\n• The operating efficiency of your wind turbine (in %)\n• The radius of the blades on your wind turbine (in meters)\n"<<endl; 


		//get user input
	while (windspeed <= 0) {
  	cout<<"Enter windspeed (in m/s): ";
		cin>>windspeed;
		if (windspeed <= 0) {
			cout<<endl<<"Input not valid. Please enter a positive number.\n"<< endl;
			cin.clear();
			cin.ignore();
			}
		}
	while (opefficiency <= 0 or opefficiency > 100) {
  	cout<<"Enter operating efficiency of your wind turbine in percent (do not include % sign): ";
		cin>>opefficiency;
		if (opefficiency <= 0 or opefficiency > 100) {
			cout<<endl<<"Input not valid. Please enter a positive number between 0 and 100.\n"<< endl;
			cin.clear();
			cin.ignore();
			}
		}
	while (radius <= 0) {
  	cout<<"Enter the radius of the blades on your wind turbine (in meters): ";
		cin>>radius;
		if (radius <= 0) {
			cout<<endl<<"Input not valid. Please enter a positive number.\n"<< endl;
			cin.clear();
			cin.ignore();
			}
		}
	while (density <= 0) {
  	cout<<"Enter the average density of the air by the turbine (in kg/m^3): ";
		cin>>density;
		if (density <= 0) {
			cout<<endl<<"Input not valid. Please enter a positive number.\n"<< endl;
			cin.clear();
			cin.ignore();
			}		
		}
 			// calculate area covered by turbine blades
		float area = radius * radius * PI;
		
			//calculate maximum efficiency
		float maximumEfficiency = 0.50 * density * area * windspeed * windspeed * windspeed;

			//calculate actual efficiency
		float opefficiencyFRACTION = opefficiency/100;
		float actualEfficiency = maximumEfficiency * opefficiencyFRACTION;

			//return outputs to user
		cout << endl << "		RECAP: \nWindspeed is " << windspeed << " m/s." << endl;
		cout << "Operating efficiency is " << opefficiency <<"%" << endl;
		cout << "Turbine blade radius is " << radius << " m." <<endl;
		cout << "Air density is " << density << " kg/m^3.\n" <<endl;
		cout << "		RESULTS: \nMaximum efficiency of turbine is " << maximumEfficiency << " W." <<endl;
		cout << "Actual expected efficiency of turbine is " << actualEfficiency << " W." <<endl;
}
