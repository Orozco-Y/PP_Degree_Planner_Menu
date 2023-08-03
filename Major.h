#ifndef MAJOR_H
#define MAJOR_H

#include <string>
#include <vector>
#include "Course.h"

class Major {
public:
    std::string majorName;
    std::vector<std::string> courses;

    Major(const std::string& name);

    //  initialize the predefined courses for each major
    void initializeCourses();

    void addCourse(const std::string& course);
};

#endif // MAJOR_H
