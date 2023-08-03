#ifndef MENUS_H
#define MENUS_H

#include "Major.h"

// Function to clear the screen
void clearScreen();

// Displays main menu options
void displayMainMenu();

// Displays Major options to choose from
void displayMajorDegreeMenu();

// Major-Degree Plans submenu
void majorDegreeMenu(std::vector<Major>& majors);

// Function to handle the Courses submenu
bool coursesMenu();

// Function to handle the Student Information submenu
bool studentInformationMenu();

#endif // MENUS_H
