//DISABLE THE INTRODUCTION PRINTS IF YOU ARE TWEAKING/DEVELOPING THE PROGRAM

#include <iostream>
#include <chrono>
#include <string>
#include <thread>
using namespace std;
// required modules

void sleep(double seconds) {
	this_thread::sleep_for(chrono::milliseconds((int)(seconds * 1000)));
}

string choice; // allows the user to select what mathematics mode they want
double inchoice; // first number
double inchoice2; // second number
double total; // displays the total of inchoice & inchoice2

int main() {
		cout << "\nText Interface Calculator, TIC\n";
		sleep(1); cout << "Version 02.00.00\n";
		sleep(1); cout << "COPYRIGHT VOID STUDIOS, VOID STUDIOS SOURCE PROGRAM 2025-2026\n";
		sleep(1); cout << "GNU General Public License 2.x\n";
		sleep(1); cout << "Reconstruction of Py Calculator\n\n";
	
	while (true) {
		cout << "\nOPTIONS: ADDITION [+], MULTIPLICATIONS [*], SUBTRACTION [-], DIVISION [/]\n";
		cout << "SELECT: ";
		cin >> choice;
		
		if (choice == "..") {
			sleep(2); cout << "\nEXITING...\n";
			break;
		}
		
		
		if (choice == "+") {
			cout << "\nNUMBER: ";
			cin >> inchoice;
			cout << "SECOND NUMBER: ";
			cin >> inchoice2;
			total = inchoice + inchoice2;
			
			cout << "TOTAL: " << total << "\n";
		}
		
		if (choice == "*") {
			cout << "\nNUMBER: ";
			cin >> inchoice;
			cout << "SECOND NUMBER: ";
			cin >> inchoice2;
			total = inchoice * inchoice2;
			
			cout << "TOTAL: " << total << "\n";
		}
		
		if (choice == "-") {
			cout << "\nNUMBER: ";
			cin >> inchoice;
			cout << "SECOND NUMBER: ";
			cin >> inchoice2;
			total = inchoice - inchoice2;
			
			cout << "TOTAL: " << total << "\n";
		}
		
		if (choice == "/") {
			cout << "\nNUMBER: ";
			cin >> inchoice;
			cout << "SECOND NUMBER: ";
			cin >> inchoice2;
			total = inchoice / inchoice2;
			
			cout << "TOTAL: " << total << "\n";
		}
	}
	
	return 0;
}
