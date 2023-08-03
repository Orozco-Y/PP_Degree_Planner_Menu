#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    std::string name;
    std::string studentId;
    std::string major;
    int age;

    // Constructor
    Student(const std::string& name, const std::string& studentId, const std::string& major, int age);
};

#endif // STUDENT_H
