//============================================================================
// Name        : Project1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Inputs.h"

using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	int c;
	bool exit=false;
	char input;

	Inputs* inputs;

	while(!exit){
		cout << "Enter input (m,i,r,e):" <<endl;
		cin >> input;

		if( input == 'r' || input == 'i' || input == 'm' )
		{
			inputs->receive_inputs(input);
		}
		else if ( input == 'e' )
		{
			exit = true;
		}
		else
		{
			cout << "Please enter a correct command"<<endl;
		}
		cout << "" <<endl;
	}

	cout << "Goodbye" <<endl;

	return 0;
}
