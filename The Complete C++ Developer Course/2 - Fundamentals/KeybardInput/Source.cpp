#include <iostream>
#include <string>
using namespace std;

int main() {
	int age;
	string fullName;
	string location;
	int initialScore;

	cout << "Please enter your score" << endl;
	cin >> initialScore;

	cin.get();

	cout << "Please enter your name" << endl;
	getline(cin, fullName);

	cout << "Pleace enter your location" << endl;
	getline(cin, location);

	

	cout << "Hello "<< fullName << endl;
	cout << "We heared you are from location "<< location << endl;
	cout << "Your score is  "<< initialScore << endl;
	return 0;
}