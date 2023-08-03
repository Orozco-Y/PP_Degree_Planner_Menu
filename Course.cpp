#include "Course.h"

Course::Course(const std::string& name, int hours, const std::string& instructor)
        : courseName(name), creditHours(hours), instructor(instructor) {}
