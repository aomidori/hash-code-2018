#include <iostream>
#include <stdio.h>
#include "pizzaCutter.h"

using namespace std;

int main(int argc, char *argv[])
{
	if(argc < 2){
		cout << "Please mention a input file name"<<endl;
		return 0;
	}
	
	Pizza pizza;
	pizza.readPizza(argv[1]);
	pizza.printPizza();
	

	return 0;
}