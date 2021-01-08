/*******************************
 ** Program: fraction.cpp
 ** Author: Jacob Eckroth
 ** Date: 11/9/2019
 ** Description: Converts a fraction to its lowest possible terms
 ** Inputs: A numerator and a denominator in the form of integers
 ** Outputs: The fraction fully simplified
 ******************************/
#include <iostream>
#include "helper_functions.h"
#include <string>
#include <cmath>


int main(){
	bool another = true;
	do{
		
		int numerator = 0;
		int denominator = 0;
		inputnumdem(numerator, denominator);

		printfraction(numerator,denominator);
		cout<<"Do you want to enter anther fraction?(0=no,1=yes): ";
		cin >>another;
		cin.ignore(256,'\n');
	}while(another == true);
	return 0;
}



