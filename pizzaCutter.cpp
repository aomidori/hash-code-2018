#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "pizzaCutter.h"

using namespace std;

int Pizza::readPizza(string fileName){
	//Read the first line of conditions R, C, L, H
	string condition;
	ifstream inFile;
	inFile.open(fileName);
	getline(inFile, condition);
	stringstream(condition)>>rowNumber>>colNumber>>L>>H;
	//Read the whole pizza into myPizza
	for(int i=0; i < rowNumber; i++){
		string row;
		getline(inFile,row);
		vector<char> r;
		myPizza.push_back(r);
		for(int j=0; j<colNumber; j++){
			char cell = row[j];
			myPizza[i].push_back(cell);
		}
	}
	inFile.close();
	return 0;
}
 
int Pizza::printPizza(){
	printf("My pizza!\n");
	for(int i=0;i<rowNumber;i++){
		for(int j=0; j<colNumber; j++){
			cout<<myPizza[i][j];
		}
		cout<<endl;
	}
	return 0;
}