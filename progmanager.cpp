// Program Manager

#include <iostream>
#include <string>
using namespace std;

void homescreen();
void addition();
void subtraction();
void multiplication();
void division();

int main() {
	cout << "Welcome to the program manager!" << endl;
	homescreen();
}

void homescreen() {
	string selection;
	string extfunc = "e";
	string addition_str = "Addition";
	string subraction_str = "Subtraction";
	string multiplication_str = "Multiplication";
	string division_str = "Division";
	cout << "Please enter the name of the program you wish to run (case sensitive)." << endl;
	cout << "Available programs:" << endl;
	cout << "Addition" << endl;
	cout << "Subtraction" << endl;
	cout << "Multiplication" << endl;
	cout << "Division" << endl;
	cout << "Or enter 'e' to exit the program." << endl;
	cout << "Selection: "; cin >> selection;
	if (selection == addition_str) {
		addition();
	}
	else if (selection == subraction_str) {
		subtraction();
	}
	else if (selection == multiplication_str) {
		multiplication();
	}
	else if (selection == division_str) {
		division();
	}
	else if (selection == extfunc) {
		cout << "Exiting program manager.";
		exit(0);
	}
	else {
		cout << "Invalid selection. Check spelling, capitalization, and spaces." << endl << endl;
		homescreen();
	}
}

void addition() {
	const int looper = 1;
	while (looper == 1) {
		cout << "\nAddition. Enter 'e' to exit." << endl;
		const string extfunc = "e";
		string a_st, b_st;
		float a_fl, b_fl, c_fl;
		cout << "First number: "; cin >> a_st;
		if (a_st == extfunc) {
			cout << "Exiting to homescreen." << endl << endl;
			homescreen();
		}
		try {
			a_fl = stof(a_st);
		}
		catch (...) {
			cout << "Invalid entry." << endl;
			addition();
		}
		a_fl = stof(a_st);
		cout << "Second number: "; cin >> b_st;
		if (b_st == extfunc) {
			cout << "Exiting to homescreen." << endl << endl;
			homescreen();
		}
		try {
			b_fl = stof(b_st);
		}
		catch (...) {
			cout << "Invalid entry." << endl;
			addition();
		}
		b_fl = stof(b_st);
		c_fl = a_fl + b_fl;
		cout << "The sum is " << c_fl << "." << endl;
	}
}

void subtraction() {
	const int looper = 1;
	while (looper == 1) {
		cout << "\nSubtraction. Enter 'e' to exit." << endl;
		const string extfunc = "e";
		string a_st, b_st;
		float a_fl, b_fl, c_fl;
		cout << "First number: "; cin >> a_st;
		if (a_st == extfunc) {
			cout << "Exiting to homescreen." << endl << endl;
			homescreen();
		}
		try {
			a_fl = stof(a_st);
		}
		catch (...) {
			cout << "Invalid entry." << endl;
			subtraction();
		}
		a_fl = stof(a_st);
		cout << "Second number: "; cin >> b_st;
		if (b_st == extfunc) {
			cout << "Exiting to homescreen." << endl << endl;
			homescreen();
		}
		try {
			b_fl = stof(b_st);
		}
		catch (...) {
			cout << "Invalid entry." << endl;
			subtraction();
		}
		b_fl = stof(b_st);
		c_fl = a_fl - b_fl;
		cout << "The difference is " << c_fl << "." << endl;
	}
}

void multiplication() {
	const int looper = 1;
	while (looper == 1) {
		cout << "\nMultiplication. Enter 'e' to exit." << endl;
		const string extfunc = "e";
		string a_st, b_st;
		float a_fl, b_fl, c_fl;
		cout << "First number: "; cin >> a_st;
		if (a_st == extfunc) {
			cout << "Exiting to homescreen." << endl << endl;
			homescreen();
		}
		try {
			a_fl = stof(a_st);
		}
		catch (...) {
			cout << "Invalid entry." << endl;
			multiplication();
		}
		a_fl = stof(a_st);
		cout << "Second number: "; cin >> b_st;
		if (b_st == extfunc) {
			cout << "Exiting to homescreen." << endl << endl;
			homescreen();
		}
		try {
			b_fl = stof(b_st);
		}
		catch (...) {
			cout << "Invalid entry." << endl;
			multiplication();
		}
		b_fl = stof(b_st);
		c_fl = a_fl * b_fl;
		cout << "The product is " << c_fl << "." << endl;
	}
}

void division() {
	const int looper = 1;
	while (looper == 1) {
		cout << "\nDivision. Enter 'e' to exit." << endl;
		const string exitvar = "e";
		string a_st, b_st;
		float a_fl, b_fl, c_fl;
		cout << "First number: "; cin >> a_st;
		if (a_st == exitvar) {
			cout << "Exiting to homescreen." << endl << endl;
			homescreen();
		}
		try {
			a_fl = stof(a_st);
		}
		catch (...) {
			cout << "Invalid entry." << endl;
			division();
		}
		a_fl = stof(a_st);
		cout << "Second number: "; cin >> b_st;
		if (b_st == exitvar) {
			cout << "Exiting to homescreen." << endl << endl;
		}
		try {
			b_fl = stof(b_st);
		}
		catch (...) {
			cout << "Invalid entry." << endl;
			division();
		}
		b_fl = stof(b_st);
		c_fl = a_fl / b_fl;
		cout << "The quotient is " << c_fl << "." << endl;
	}
}
