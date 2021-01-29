#include <iostream>
#include <string>

using namespace std;

//This function asks the user for input and checks for invalid input
//feet is a reference parameter that equals the length of the object in feet
//inches is a reference parameter that equals the objects length left over inches 
//returns an int for error checking
int userInput(float &feet, float &inches){
    cout << "enter the lengths number of feet: " << endl;
    cin >> feet;
    //check for incompatible input type
    if (!cin){
        cout << "invalid input" << endl;
        return -1; 
    }
    cout << "enter the lengths number of inches: " << endl;
    cin >> inches;
    //check for incompatible input type
    if (!cin){
        cout << "invalid input" << endl;
        return -1; 
    }
    if(inches >= 12 || inches < 0 || feet < 0 ){
        cout << "invalid input" << endl;
        return -1; 
    }
}

//Function that takes feet and inches and converts it to centimeters and meters
//feet is the value of the objects length in feet
//inches is the value that equals the objects length left over inches 
//totalCentimeters is the reference parameter that equals the length of the object in centimeters, and is later converted to the remainder centimeters
//meters is a reference parameter that equals the length of the object in meters
void conversion(float feet, float inches, float &totalCentimeters, float &meters){
    //feet and inches to centimeters calculation
    totalCentimeters = (inches/12 + feet)* 0.3048;
    meters = 0;
    //removes whole meters from total centimeters and ads them to meters
    while (totalCentimeters >= 1){
        totalCentimeters -= 1;
        meters += 1;
    }
    //convert from decimal
    totalCentimeters *= 100;
}

//function that outputs the result from the calculation
//feet is the value of the objects length in feet
//inches is the value that equals the objects length left over inches 
//totalCentimeters is the value that equals the length of the object in centimeters
//meters is the value that equals the length of the object in meters
void output(float feet, float inches, float totalCentimeters, float meters){
    cout << feet << "'" << inches << "''" << " converts to " << meters << " meters and " << totalCentimeters << " centimeters" << endl;
}

//feet is the value of the objects length in feet
//inches is the value that equals the objects length left over inches 
//totalCentimeters is the value that equals the length of the object in centimeters
//meters is the value that equals the length of the object in meters
//errorCatch is the value stored when their is an error in userInput()
//keepGoing is a bool that determines if the loop continues to ask the user for input
//tempString is a string that stores the users answer to weather or not they want to continue using the program
int main (int argc, char **argv){
    float feet;
    float inches;
    float totalCentimeters;
    float meters;
    int errorCatch;
    bool keepGoing = true;
    string tempInput = " ";

//runtime loop
    while(keepGoing){
    errorCatch = userInput(feet,inches);
    if (errorCatch == -1){
        return -1;
    }
    conversion(feet, inches, totalCentimeters, meters);
    output(feet, inches, totalCentimeters, meters);
    cout << "would you like to enter another measurment? (type 'quit' to stop press enter anything to continue)" << endl;
    cin >> tempInput;
    if (tempInput != "quit"){
        continue;
    }
    else{
        keepGoing = false;
    }
    }
   
	return 0;
}