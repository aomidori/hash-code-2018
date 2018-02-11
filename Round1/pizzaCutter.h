#ifndef PIZZA_CUTTER_H
#define PIZZA_CUTTER_H

#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


struct Cell{
	char value;
	bool available;
};

struct Slice{
	vector <vector <Cell> > content;
	int pos[4];
	int w;
	int h;
	bool qualified;
};

class Pizza{
public:
	int readPizza(string fileName);
	int printPizza();
	int findUnits();
	int expand(Slice *slice);
	//Your public functions here

	
private:
	vector <vector <Cell> > myPizza;  //content of cells for pizza
	vector <Slice> slices;
	int rowNumber;
	int colNumber;
	int L;  //min number for each ingredient
	int H;  //max total number of cells of a slice

	int sliceNumber;

};


#endif