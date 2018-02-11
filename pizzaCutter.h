#ifndef PIZZA_CUTTER_H
#define PIZZA_CUTTER_H

#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Pizza{
public:
	int readPizza(string fileName);
	int printPizza();
	//Your public functions here
	
private:
	vector <vector <char> > myPizza;
	int rowNumber;
	int colNumber;
	int L;  //min number for each ingredient
	int H;  //max total number of cells of a slice
};


#endif