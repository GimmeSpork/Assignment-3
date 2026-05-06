/******************************************************************************
# Author:           Lucy Price
# Assignment:       Assignment 3 - Washington State Ferries Fare Calculator
# Date:             April 26, 2026
# Description:      This program will calculate the total cost of the fare for
#                   the ferry given the number of people riding, and if they
#                   driving a vehicle onto it. It will also state if you are
#                   eligible for a discount and how far away you are from one.
# Input:            yesNO as character, numAdults, numSeniors, numYouths and
#                   numBikes as integers.
# Output:           ADULTCOST, SENIORCOST, YOUTHCOST, BIKECHARGE and VEHICLE
#                   as constants. sumPeople as integers. totalCost,
#                   numTilDiscount as doubles.
# Sources:          Assignment 3 resources, and zybooks chapters 2 and 3.
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//main function
int main() {

//declare variables and constants
const double ADULTCOST = 14.95;
const double SENIORCOST = 7.40;
const double YOUTHCOST = 5.55;
const double BIKECHARGE = 4.00;
const double VEHICLE = 57.90;
char yesNo;
int numAdults = 0;
int numSeniors = 0;
int numYouths = 0;
int numBikes = 0;
int sumPeople = 0;
double totalCost = 0.0;
double numTilDiscount = 0.0;

//Welcome Message
cout << "Welcome to the Washington State Ferries Fare Calculator!" << endl;
cout << endl;

//fare description and ticket $
cout << setw(46) << left << "Fare Description";
cout << setw(21) << right << "Ticket $" << endl;

//produce long line
cout << setfill('-') << setw(67) << "" << endl;

//reset fill character back to space
cout << setfill(' ');

//rest of table
cout << setw(46) << left << "Vehicle Under 14\' (less than 168\") & Driver";
cout << setw(21) << right << "$57.90" << endl;
cout << setw(46) << left << "Adult (age 19 - 64)";
cout << setw(21) << right << "$14.95" << endl;
cout << setw(46) << left << "Senior (age 65 & over) / Disability";
cout << setw(21) << right << "$7.40" << endl;
cout << setw(46) << left << "Youth (age 6 - 18)";
cout << setw(21) << right << "$5.55" << endl;
cout << setw(46) << left << "Bicycle Surcharge (included with Vehicle)";
cout << setw(21) << right << "$4.00" << endl;

//produce long line
cout << setfill('-') << setw(67) << "" << endl;

//user input for y/n riding the ferry
cout << setprecision(2) << fixed;
cout << "\nAre you riding a vehicle on the Ferry? (Y/N): ";
cin >> yesNo; 
  if (yesNo == 'y' || yesNo == 'Y') {  //start of if and if-else statements //includes both cases of 'y'
    cout << "\nHow many adults?: ";
    cin >> numAdults;
    if (!(numAdults >= 0 && numAdults <= 20)) {  //if numAdults is not > 0 and <= 20
        cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
        cout << "\nThank you for using Washington State Ferries Fare Calculator!";
        return 1;
    }
    cout << "How many seniors?: ";
    cin >> numSeniors;
    if (!(numSeniors >= 0 && numSeniors <= 20)) {  
        cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
        cout << "\nThank you for using Washington State Ferries Fare Calculator!";
        return 1;
    }
      cout << "How many youths?: ";
      cin >> numYouths;
      if (!(numYouths >= 0 && numYouths <= 20)) {  //if numAdults is not > 0 and <= 20
        cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
        cout << "\nThank you for using Washington State Ferries Fare Calculator!";
        return 1;
      }
      totalCost = (numAdults * ADULTCOST) + (numSeniors * SENIORCOST) +   //calculations for toalCost
      (numYouths * YOUTHCOST) + (numBikes * BIKECHARGE) + (VEHICLE);
      sumPeople = numAdults + numSeniors + numYouths;
      if (sumPeople > 20) {  //if sumPeople is > 20
      cout << "\nUh oh!! Too many people in your group." 
      " Split into 2 groups and try again!" << endl;
      cout << "\nThank you for using Washington State Ferries Fare Calculator!";
      return 1;
      }
      else if (sumPeople <= 20) {  //if the sum of the people is <= 20
        cout << "\nYour total charge is $" << totalCost;
      }
      else {
        cout << "\nError!! Invalid answer!! Please try again later!!!";
        cout << "\nThank you for using Washington State Ferries Fare Calculator!";
        return 1;
      }
  }
  else if (yesNo == 'n' || yesNo == 'N') {  //includes both cases of 'n'
    cout << "\nHow many adults?: ";
    cin >> numAdults;
    if (!(numAdults >= 0 && numAdults <= 20)) {  //if numAdults is not >0 and <=20
        cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
        cout << "\nThank you for using Washington State Ferries Fare Calculator!";
        return 1;
    }
      cout << "How many seniors?: ";
      cin >> numSeniors;
      if (!(numSeniors >= 0 && numSeniors <= 20)) {  //if numAdults is not >0 and <=20
        cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
        cout << "\nThank you for using Washington State Ferries Fare Calculator!";
        return 1;
    }
      cout << "How many youths?: ";
      cin >> numYouths;
      if (!(numYouths >= 0 && numYouths <= 20)) {  //if numAdults is not >0 and <=20
        cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
        cout << "\nThank you for using Washington State Ferries Fare Calculator!";
        return 1;
    }
      cout << "How many bikes?: ";
      cin >> numBikes;
      if (!(numBikes >= 0 && numBikes <= 20)) {  //if numAdults is not >0 and <=20
        cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
        cout << "\nThank you for using Washington State Ferries Fare Calculator!";
        return 1;
    }
      totalCost = (numAdults * ADULTCOST) + (numSeniors * SENIORCOST) +  //calculations for total cost
      (numYouths * YOUTHCOST) + (numBikes * BIKECHARGE);
      sumPeople = numAdults + numSeniors + numYouths;
      if (sumPeople > 20) {  //if sum of people is > 20
        cout << "\nUh oh!! Too many people in your group."
        " Split into 2 groups and try again!" << endl;
        cout << "\nThank you for using Washington State Ferries Fare Calculator!";
        return 1;
      }
      else if (sumPeople <= 20) {  //if the sum of the people is <= 20
        cout << "\nYour total charge is $" << totalCost;
      }
  }
  else {
    cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
    cout << "\nThank you for using Washington State Ferries Fare Calculator!";
    return 1;
  }

  //if-else statement for discount
  numTilDiscount = (100 - totalCost);  //calculations for amount of money til discount
  cout << endl;
    if (totalCost >= 100) {
      cout << "\nYou are eligible for a free adult ticket for your next trip!" << endl;
    }
    else if (totalCost < 100) {
      cout << "\nIf you spend $" << numTilDiscount << " more, you are eligible"
      " for a free adult ticket for the next trip." << endl;
    }
    

  //Goodbye Message
  cout << "\nThank you for using Washington State Ferries Fare Calculator!";

  return 0;
}
