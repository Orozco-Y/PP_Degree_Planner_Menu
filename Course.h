#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
public:
    std::string courseName;
    int creditHours;
    std::string instructor;

    Course(const std::string& name, int hours, const std::string& instructor);
};

#endif // COURSE_H
