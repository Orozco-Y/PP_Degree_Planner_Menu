#include "Major.h"

Major::Major(const std::string& name) : majorName(name) {
    // Initialize the predefined courses for each major
    initializeCourses();
}

void Major::initializeCourses() {
    if (majorName == "Arts") {
        courses = {
                "Art History",
                "Painting Techniques",
                "Sculpture Fundamentals",
                "Drawing and Sketching",
                "Photography Basics"
        };
    } else if (majorName == "Business") {
        courses = {
                "Financial Accounting",
                "Marketing Principles",
                "Business Ethics",
                "Management Fundamentals",
                "Entrepreneurship"
        };
    } else if (majorName == "Computer Science") {
        courses = {
                "Introduction to Programming",
                "Data Structures and Algorithms",
                "Operating Systems",
                "Computer Networks",
                "Database Management"
        };
    } else if (majorName == "Cyber Security") {
        courses = {
                "Introduction to Cyber Security",
                "Network Security",
                "Ethical Hacking",
                "Digital Forensics",
                "Information Security Management"
        };
    } else if (majorName == "Nursing") {
        courses = {
                "Anatomy and Physiology",
                "Nursing Fundamentals",
                "Pharmacology",
                "Medical-Surgical Nursing",
                "Pediatric Nursing"
        };
    }
}

void Major::addCourse(const std::string& course) {
    courses.push_back(course);
}
