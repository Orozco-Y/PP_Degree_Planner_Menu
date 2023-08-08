#include <iostream>
#include <vector>
#include "Major.h"
#include "Menus.h"
#include "Student.h"

using namespace std;

void clearScreen() {
    cout << "\033[2J\033[1;1H"; // Platform-independent ANSI escape code to clear the screen
}

void displayMainMenu() {
    cout << endl;
    cout << "Degree Planning Program" << endl << endl;
    cout << "1. Major-Degree Plans" << endl;
    cout << "2. Courses" << endl;
    cout << "3. Student Information" << endl;
    cout << "4. Exit" << endl << endl;
    cout << "Please enter your choice (1-4): " << endl;
}

void displayMajorDegreeMenu() {
    cout << "Choose a Major-Degree Plan:" << endl << endl;
    cout << "1. Arts" << endl;
    cout << "2. Business" << endl;
    cout << "3. Computer Science" << endl;
    cout << "4. Cyber Security" << endl;
    cout << "5. Nursing" << endl << endl;
    cout << "Please enter your choice (1-5): " << endl;
}

void majorDegreeMenu(vector<Major>& majors) {
    int majorChoice;
    cout << endl;
    displayMajorDegreeMenu();
    cin >> majorChoice;

    if (majorChoice >= 1 && majorChoice <= 5) {
        Major& selectedMajor = majors[majorChoice - 1];

        int choice;
        cout << endl;
        cout << "Courses for " << selectedMajor.majorName << " Major:" << endl;

        int courseNumber = 1;
        for (const string& course : selectedMajor.courses) {
            cout << courseNumber << ". " << course << endl;
            courseNumber++;
        }

        cout << endl;
        cout << "1. Add Course" << endl;
        cout << "2. Go Back to Main Menu" << endl << endl;
        cout << "Please enter your choice (1-2): " << endl;
        cin >> choice;

        string courseName;
        switch (choice) {
            case 1:
                cout << "Enter the number of the course you want to add: ";
                cin >> choice;
                if (choice >= 1 && choice <= selectedMajor.courses.size()) {
                    string courseName = selectedMajor.courses[choice - 1];
                    selectedMajor.addCourse(courseName);
                    cout << courseName << " added successfully" << endl;
                } else {
                    cout << "Invalid course number. Please try again." << endl;
                }
                break;
            case 2:
                // Go back to the main menu
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } else {
        cout << "Invalid major choice. Please try again." << endl;
    }
}

bool coursesMenu() {
    clearScreen();
    vector<Major> majors = {
            {"Arts"},
            {"Business"},
            {"Computer Science"},
            {"Cyber Security"},
            {"Nursing"}
    };
    majorDegreeMenu(majors);
    return true;
}

bool studentInformationMenu() {
    int choice;
    bool goBackToMainMenu = false;
    string name;
    string major;
    getline(cin, name);
    getline(cin, major);
    Student student(name, major);

    while (!goBackToMainMenu) {
        cout << "Student Information Menu" << endl << endl;
        cout << "1. View Student Information" << endl;
        cout << "2. View Transcript" << endl;
        cout << "3. Go Back to Main Menu" << endl << endl;
        cout << "Please enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1: // View Student Information
                // Assuming we have some students in a vector
                cout << "List of Students:" << endl << endl;

                // Replace the following loop with student data
                for (int i = 1; i <= 3; ++i) {
                    cout << "Name: Student " << i << endl;
                    cout << "Student ID: 2023" << i << endl;
                    cout << "Major: Computer Science" << endl;
                }
                break;
            case 2:
                student.displayTranscript();
                break;
            case 3: // Go back to the main menu
                goBackToMainMenu = true;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        // Clear the screen before showing the menu again
        clearScreen();
    }



    return true;
}
