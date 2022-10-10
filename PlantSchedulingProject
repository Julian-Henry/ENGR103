/*
**Program name: project6
**Author: Julian Henry
**Date: 06/05/21
**Description: a planting schedule is displayed for the user using starting month and day, as well as how many days the plant takes to mature as input from user.
**Input: The vegetable or fruit (as a string of characters), Starting month and day (month as 1-12 and day <= number of days in the month), The days until the plant matures (an integer value greater than 0)
**Output: planting schedule.
*/
#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;
/****************************************************************************** 
* Author: Jennifer Parham-Mocello 
* Date: 5/24/2021 
* Description: This function takes an array of planting months, an array of 
* planting days, the plant, and the number of planting months and days, and it 
* prints the plant and its schedule. 
* Parameters: months is an array of the planting months 
*             days is an array of the planting days 
*             plant is the name of the plant 
*             num_planting is the number of planting dates in the schedule        
* Returns: none 
* Preconditions: months must have an integer between 1-12  
*                days must have an integer between 1 and the last day in the month 
*                plant has a non-empty string of characters
*                num_planting contains an integer between 1-20
* Postconditions:none 
*******************************************************************************/
void print_plant_schedule(int months[], int days[], string plant, int num_planting){   
	cout << "\nWhen to plant the " << plant << ": \n";
	for(int i=0; i<num_planting; i++)      
		cout << "Month: " << months[i] << ", Day: " << days[i] << endl;}
/****************************************************************************** 
* Author: Jennifer Parham-Mocello
* Date: 5/24/2021
* Description: This function takes a planting day and month and number of days
* until maturity, and it calculates the next planting month and day based on  
* the number of days for the plant to mature plus 14 days to harvest and re-plant. 
* Parameters: l_planting_month is an integer representing the last planting month
*             l_planting_day is an integer representing the last planting day 
*             days_till_mature is the number of days until maturity 
*             n_planting_month is the next planting month and l_planting_day is the next planting day       
* Returns: none
* Preconditions: l_planting_month must be an integer between 1-12, and l_planting_day an integer in the 
*                range from 1 to the last possible day in the month. 
*                days_till_mature is an integer greater than zero. 
* Postconditions:n_planting_month will contain an integer between 1-12 and n_planting_month will contain 
*                an integer from 1 to the last day in the month.
* ***************************************************************************/
void calculate_next_plant_date(int l_planting_month, int l_planting_day, int days_till_mature, int &n_planting_month, int &n_planting_day){   
	int month_days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  
	//Now, figure out when mature date from planting date will be   
	n_planting_month=l_planting_month;   
	n_planting_day = l_planting_day+days_till_mature+14;
	while(n_planting_day > month_days[n_planting_month-1]) {      
		n_planting_day -= month_days[n_planting_month-1];
		n_planting_month++;}
	if(n_planting_month>12) 
		n_planting_month=1; }

// isnum returns true or false if the argument is a valid number
//input: string value that may be valid as a float
//output: true if the input would be a valid number, false otherwise
bool isnum(string INPUT){
	int periods = 0;
	for(int i=0; i< INPUT.length(); i++){
		if (INPUT.at(i) == 46){
			periods++;}
		if (periods > 1){
			cout<<"\n	Input not valid. Please enter a valid input.\n"<< endl;
			return false;}
		if(!(INPUT.at(i)>='0' && INPUT.at(i)<='9') && !(INPUT.at(i) == 46)){
			cout<<"\n	Input not valid. Please enter a valid input.\n"<< endl;
			return false;}
	}
	if (periods == INPUT.length()){
		cout<<"\n	Input not valid. Please enter a valid input.\n"<< endl;
		return false;}
	return true;}

// welcome prints a welcome message for the user
//input: no input is required
//output: this function prints the information a user will need to understand this program
void welcome() {
	cout<<"Welcome, user.\n\n This program will provide you with a planting schedule guide. "<<
	"\nTo get your results, you will need to input the following " <<
	"information when prompted:\n\n-plant name\n-starting day\n-starting month\n-numbers of days until plant reaches maturity\n" << endl;
}

// get_input gets user input for plant name, the day and month for when its first planted,
// and how long until it matures
//input: empty variables for plant name, starting month and day, and days until maturity
//output: the function updates variables for the plants name, starting month and day, and 
//days until it matures for use in other functions
void get_input(string &plant,int &l_planting_month,int &l_planting_day,int &days_till_mature){
	string input;
	int month_days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cout<<"Enter name of plant: ";
	cin>>plant;
	do {
		cout<<"Enter starting month (1-12) Frost starts October 1st: ";
		cin>>input;
	 } while (!(isnum(input)) || atoi(input.c_str()) > 12 || atoi(input.c_str()) == 0);
	l_planting_month = atoi(input.c_str());
		do {
		cout<<"Enter starting day: ";
		cin>>input;
	 } while (!(isnum(input)) || atoi(input.c_str()) > month_days[l_planting_month-1]);
	l_planting_day = atoi(input.c_str());
		do {
		cout<<"Enter number of days until maturity: ";
		cin>>input;
	 } while (!(isnum(input))|| atoi(input.c_str()) == 0);
	days_till_mature = atoi(input.c_str());
}


int main() {
	string plant; //initialize variables
	int l_planting_month; //l=last
	int l_planting_day;
	int days_till_mature;
	int n_planting_month=0; // n=next
	int n_planting_day=0; 
	int months[12];
	int days[12];
	int i = 0;
	welcome(); //welcome message
	get_input(plant, l_planting_month, l_planting_day, days_till_mature); //get user inputs
	n_planting_month = l_planting_month;
	while (n_planting_month < 10){ // main loop
		calculate_next_plant_date(l_planting_month, l_planting_day, days_till_mature, n_planting_month, n_planting_day);
		days[i] = l_planting_day;
		months[i++] = l_planting_month;
		l_planting_month = n_planting_month;
		l_planting_day = n_planting_day;}
	print_plant_schedule(months, days, plant, i);}
