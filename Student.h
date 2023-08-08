#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>

class Course {
public:
    Course(const std::string& name, int grade);

    std::string getName() const;
    int getGrade() const;

private:
    std::string name;
    int grade;
};

class Student {
public:
    Student(const std::string& name, const std::string& major);

    void addCourse(const std::string& courseName, int grade);
    void displayTranscript() const;

private:
    std::string name;
    std::string major;
    std::vector<Course> courses;
};

#endif // STUDENT_H
