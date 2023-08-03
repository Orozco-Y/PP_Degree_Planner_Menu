#include <iostream>
#include "Menus.h"

using namespace std;

int main() {
    int userChoice;

    while (true) {
        displayMainMenu();
        cin >> userChoice;

        switch (userChoice) {
            case 1: // Major-Degree Plans
                if (!coursesMenu()) {
                    cout << endl;
                    cout << "Goodbye!" << endl;
                    return 0; // Exit the program
                }
                break;
            case 2: // Courses
                if (!coursesMenu()) {
                    cout << endl;
                    cout << "Goodbye!" << endl;
                    return 0; // Exit the program
                }
                break;
            case 3: // Student Information
                if (!studentInformationMenu()) {
                    cout << endl;
                    cout << "Goodbye!" << endl;
                    return 0; // Exit the program
                }
                break;
            case 4: // Exit
                cout << endl;
                cout << "Goodbye!" << endl;
                return 0; // Exit the program
            default:
                cout << endl;
                cout << "Invalid choice. Please try again." << endl << endl;
                break;
        }
    }

    return 0;
}
