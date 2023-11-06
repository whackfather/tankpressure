// Simple Calculator Program

// Setup
#include <iostream>
#include <string>
using namespace std;
void calculator();

// Main loop
int main() {
	cout << "Welcome to the calculator. Enter 'e' to exit." << endl;
	calculator();
}

// Calculator loop
void calculator() {
	while (true) {
		// Define variables
		char op;
		float a_fl, b_fl, c_fl;
		string a_st, b_st, c_st;
		string ext = "e";

		// Input and check first number
		cout << "1st num: "; cin >> a_st;
		if (a_st == ext) {
			cout << "Exiting program.";
			exit(0);
		}
		try {
			a_fl = stof(a_st);
		}
		catch (...) {
			cout << "Invalid entry." << endl;
			calculator();
		}
		a_fl = stof(a_st);

		// Input and check operator
		cout << "Operator: "; cin >> op;
		switch (op) {
		case 'e':
			cout << "Exiting program.";
			exit(0);
		case '+':
			break;
		case '-':
			break;
		case '*':
			break;
		case '/':
			break;
		default:
			cout << "Invalid entry." << endl;
			calculator();
		}

		// Input and check second number
		cout << "2nd num: "; cin >> b_st;
		if (b_st == ext) {
			cout << "Exiting program.";
			exit(0);
		}
		try {
			b_fl = stof(b_st);
		}
		catch (...) {
			cout << "Invalid entry.";
			calculator();
		}
		b_fl = stof(b_st);

		// Calculate and print the correct case
		switch (op) {
		case '+':
			c_fl = a_fl + b_fl;
			cout << "Sum: " << c_fl << endl;
			calculator();
		case '-':
			c_fl = a_fl - b_fl;
			cout << "Diff: " << c_fl << endl;
			calculator();
		case '*':
			c_fl = a_fl * b_fl;
			cout << "Prod: " << c_fl << endl;
			calculator();
		case '/':
			c_fl = a_fl / b_fl;
			cout << "Quot: " << c_fl << endl;
			calculator();
		}
	}
}
