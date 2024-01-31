#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& X, float& Y) {
	cout << "Please enter the first value:";
	cin >> X;
	cout << "Please enter the second value:";
	cin >> Y;
	// The rest of this function is an exercise to the reader
}
void firstChoice(float X, float Y, float A) {
	std::cout << X << "+" << Y << "=" << A << endl;
}
void secondChoice(float X, float Y, float B) {
	std::cout << X << "-" << Y << "=" << B << endl;
}
void thirdChoice(float X, float Y, float C) {
	std::cout << X << "*" << Y << "=" << C << endl;
}
void fourthChoice(float X, float Y, float D) {
	std::cout << X << "/" << Y << "=" << D << endl;
}
int main() {
	int choice;
	float X;
	float Y;
	float A{};
	float B{};
	float C{};
	float D{};
	printMenu(choice);
	getChoices(X,Y);
	if (choice == 1) {
		A = X + Y;
		firstChoice(X,Y,A);
	}
	if (choice == 2) {
		B = X - Y;
		secondChoice(X,Y,B);
	}
	if (choice == 3) {
		C = X * Y;
		thirdChoice(X,Y,C);

	}
	if (choice == 4) {
		D = X / Y;
		fourthChoice(X,Y,D);
	}
	return 0;
}

