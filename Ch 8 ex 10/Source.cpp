/*  Program Description
10. Write a function maxv() that returns the largest element of a vector argument.
*/

/*
Standard opening
*/

#include "C:\Users\mark.alexieff\source\repos\std_lib_facilities.h"

/*
global variables
*/



/*
functions declarations
*/

double maxv(vector<double>& vd);




/*
main
*/

int main() {
	vector<double> vdouble (0);
	double temp_value{ 0 };
	cout << "Enter a list of doubles (999 to exit): ";
	cin >> temp_value;
	while (temp_value != 999) {
		vdouble.push_back(temp_value);
		cin >> temp_value;
	}
	cout << "Max value = " << maxv(vdouble);
	keep_window_open();

}


/*
funcion definitions
*/

double maxv(vector<double>& vd) {
	double temp_max{ 0 };
	for (double v : vd) {
		if (v >= temp_max) {
			temp_max = v;
		}
	}
	return temp_max;
}
