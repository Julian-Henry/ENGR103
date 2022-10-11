#include <iostream>
#include <string>
#include<cmath>
#include <cstdlib>
using namespace std;

// isnum returns true or false if the argument is a valid number
//input: string value that may be valid as a float
//output: true if the input would be a valid number, false otherwise
bool isnum(string INPUT){
	int periods = 0;
	for(int i=0; i< INPUT.length(); i++){
		if (INPUT.at(i) == 46){
			periods++;
		}
		if (periods > 1){
			cout<<"\n	Input not valid. Please enter a valid input.\n"<< endl;
			return false;
		}
		if(!(INPUT.at(i)>='0' && INPUT.at(i)<='9') && !(INPUT.at(i) == 46)){
			cout<<"\n	Input not valid. Please enter a valid input.\n"<< endl;
			return false;
		}
	}
	if (periods == INPUT.length()){
		cout<<"\n	Input not valid. Please enter a valid input.\n"<< endl;
		return false;
	}
	return true;
}
// welcome_message prints the welcome message for the program
//input: n/a
//output: n/a
void welcome_message(){
	cout<<"Welcome, user.\n\n This program will calculate the height, green "<<
	"weight mass, carbon stored, and co2 absorbed of a tree \nTo get your results, " <<
	"you will need to input the following information when prompted:\n\n-The amount " <<
	"of mass, in kg, a tree adds each year (number greater than 0)\n-The tree's age " <<
	"in years (number greater than 0)\n-The diameter breast height in centimeters (number" <<
	" greater than 2)\n-The number of years to calculate the outputs for (number greater than 2)." << endl;
}

// get_inputs gets user inputs for all inputs needed it uses the function isnum to help
//input: input, massAdded, treeAge, diameter, years
//output: user input for input, massAdded, treeAge, diameter, years
void get_inputs(string &input, float &massAdded, int &treeAge, float &diameter, int &years){
		do {cout<<"\nEnter the constant mass added to the tree each year in kg (greater than 0): ";
		cin>> input;
	} while (!(isnum(input)) || atof(input.c_str()) <=0);
	massAdded = atof(input.c_str());
	do {cout<<"\nEnter the tree's age in years (greater than 0): ";
		cin>> input;
	} while (!(isnum(input)) || atoi(input.c_str()) <=0);
	treeAge = atoi(input.c_str());
	do {cout<<"\nEnter the tree's diameter in cm (greater than 2): ";
		cin>> input;	
	} while (!(isnum(input)) || atof(input.c_str()) <= 2);	
	diameter = atof(input.c_str());
	do {cout<<"\nEnter the number of years to calculate (whole number greater than 2): ";
		cin>> input;
	} while (!(isnum(input)) || atoi(input.c_str()) <= 2);
	years = atoi(input.c_str()); 
}

// math_outputs uses a for loop to calculate the outputs for a user-specified amount of years
//input: massAdded, treeAge, diameter, height,	massGW,	carbon,	co2, years, heighttotal, co2total
//output: prints out the result of its calculations for user also outputs heighttotal
void math_outputs(float &massAdded, int &treeAge, float &diameter,	float &height,	float &massGW,	float &carbon,	float &co2, int &years, float &heighttotal,  float &co2total){
	for (int i=0; i<years; i++){
		// calculate and print outputs
		height=sqrt(sqrt((massAdded * treeAge)));      //tree height is calculated here
		if (height < 0.3048){                           // determining if tree is large enough to absorb much co2 is here
				cout<<"\nYour tree is too small to store much co2.";
				break;}
		if (diameter<28)
			massGW= 0.0577*height*diameter*diameter*100;
		else
			massGW= 0.0346*height*diameter*diameter*100;
		carbon= 0.25*massGW;
		co2=3.67*carbon;                            //co2 absorbed is calculated here
		cout<<"\nWhen your tree is " <<treeAge <<" years old:";
		cout<<"\n\n		Approximate height is: " << height <<" meters.\n		Green mass is: " << massGW <<" kilograms.";
		cout<<"\n		Carbon stored is: " << carbon <<" kilograms.\n		Carbon dioxide stored is: " << co2 <<" kilograms.\n";
		if (i==0)
			heighttotal = height;
		treeAge++;
		co2total+=co2; }                //total co2 absorbed is calculated here
	}


int main() {
	float massAdded; //input
	float diameter; //input
	int treeAge; //input
	int years; //input
	float height;
	float massGW;
	float carbon;
	float co2;
	float heighttotal;
	float co2total;
	string input;

	welcome_message(); //call all the functions to do stuff
	get_inputs(input, massAdded, treeAge, diameter, years);
	math_outputs(massAdded, treeAge, diameter, height,	massGW,	carbon,	co2, years, heighttotal, co2total);
	
	heighttotal = height - heighttotal;
	cout<< "\n\nTotal height grown over "<< years <<" years: "<< heighttotal<< " meters.";
	cout<< "\nTotal amount of carbon dioxide stored over "<< years <<" years: "<< co2total<< " kilograms."; }     //total co2 absorbed is output here
