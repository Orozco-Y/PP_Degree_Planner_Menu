#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "Course.h"

class Student{
public:
    void studentmenu();
    std::string studentName;
    std::string name;
    std::string major;
    std::vector<std::string>transcript;

    Student(const std::string& name);

    void initializeStudent();

};

#endif
