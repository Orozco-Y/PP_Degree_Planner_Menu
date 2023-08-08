#include "Student.h"
#include <iostream>

Course::Course(const std::string& name, int grade)
        : name(name), grade(grade) {}

std::string Course::getName() const {
    return name;
}

int Course::getGrade() const {
    return grade;
}

Student::Student(const std::string& name, const std::string& major)
        : name(name), major(major) {}

void Student::addCourse(const std::string& courseName, int grade) {
    courses.emplace_back(courseName, grade);
}

void Student::displayTranscript() const {
    std::cout << "Transcript for " << name << " (" << major << "):\n";
    for (const Course& course : courses) {
        std::cout << course.getName() << ": " << course.getGrade() << "\n";
    }
}
