
// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment:Lab 3A
//Write a program east-storage.cpp that asks the user to input a string representing the date (in MM/DD/YYYY format), and prints out the East basin storage on that day.


#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
using namespace std;

int main(){


ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}

string user_input; // user input
string date; // date
string eastEl, westEl, eastSt, westSt; // east and west coordinates

cout << "Enter date: ";
cin >> user_input; // User input date

string junk;        // new string variable
getline(fin, junk); // read one line from the file 

while(fin >> date >> eastSt >> westSt >> eastEl >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
                          //ignorring the remaining columns 
 
    // for example, to print the date and East basin storage:
    if (user_input == date) { // if the user input date is the same as the date
    cout << date << " East basin storage: " << eastSt <<" billion gallons" << endl; // prints the date and East storage

}
}
fin.close(); // close the file


}