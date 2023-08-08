#include "Student.h"
#include <string>
#include <iostream>


Student::Student(const std::string& name) : studentName(name){
    initializeStudent();

}

void Student::initializeStudent(){
            if (studentName == "Emily Johnson") {
                name = {
                        "Johnson, Emily\n"
                };
                major = {
                        "Nursing\n"
                };
                transcript = {
                        "BIOL 2301 Anatomy and Physiology \n"
                        "RNSG 1115 Nursing Fundamentals\n"
                        "RNSG 1301 Pharmacology\n"
                        "SRGT 1260 Medical-Surgical Nursing\n"
                        "RNSG 1305 Pediatric Nursing\n"
                };
            }
            else if (studentName == "Liam Martinez") {
                name = {
                        "Martinez, Liam\n"
                };
                major = {
                        "Computer Science\n"
                };
                transcript = {
                        "COSC 1436 Introduction to Programming\n"
                        "COSC 2436 Data Structures and Algorithm\n"
                        "COSC 4366 Operating Systems\n"
                        "COSC 4354 Computer Networks\n"
                        "COSC 5333 Database Management\n"
                };
            }
            else if (studentName == "Sophia Anderson") {
                name = {
                        "Anderson, Sophia\n"
                };
                major = {
                        "Arts\n"
                };
                transcript = {
                        "ARTS 1303 Art History\n"
                        "ARTS 2316 Painting Techniques\n"
                        "ARTS 2326 Sculpture Fundamentals\n"
                        "ARTS 1316 Drawing and Sketching\n"
                        "ARTS 2356 Photography Basics\n"
                };
            }
            else if (studentName == "Noah Thompson") {
                name = {
                        "Thompson Noah\n"
                };
                major = {
                        "Business\n"
                };
                transcript = {
                        "ACCT 2301 Financial Accounting\n"
                        "MAR 2301 Marketing Principles\n"
                        "BUSI 2301 Business Ethics\n"
                        "MGMT 1301 Management Fundamentals\n"
                        "ENTR 3310 Entrepreneurship\n"
                };
            }
            else if (studentName == "Olivia Lee") {
            name = {
                    "Lee, Olivia\n"
            };
            major = {
                    "Cyber Security\n"
            };
            transcript = {
                    "ITEC 3388 Introduction to Cyber Security \n"
                    "COSC 3341 Network Security \n"
                    "COSC 4331 Ethical Hacking\n"
                    "ITEC 4381 Digital Forensics\n"
                    "COSC 4241 Information Security Management\n"
                };
            }
            else if (studentName == "Ethan Rodriguez") {
                name = {
                        "Rodriguez, Ethan\n"
                };
                major = {
                        "Nursing\n"
                };
                transcript = {
                        "BIOL 2301 Anatomy and Physiology \n"
                        "RNSG 1115 Nursing Fundamentals\n"
                        "RNSG 1301 Pharmacology\n"
                        "SRGT 1260 Medical-Surgical Nursing\n"
                        "RNSG 1305 Pediatric Nursing\n"
                };
            }
            else if (studentName == "Ava White") {
                name = {
                        "White, Ava\n"
                };
                major = {
                        "Computer Science\n"
                };
                transcript = {
                        "COSC 1436 Introduction to Programming\n"
                        "COSC 2436 Data Structures and Algorithm\n"
                        "COSC 4366 Operating Systems\n"
                        "COSC 4354 Computer Networks\n"
                        "COSC 5333 Database Management\n"
                };
            }
            else if (studentName == "Jackson Davis") {
                name = {
                        "Davis, Jackson\n"
                };
                major = {
                        "Business\n"
                };
                transcript = {
                        "ACCT 2301 Financial Accounting\n"
                        "MAR 2301 Marketing Principles\n"
                        "BUSI 2301 Business Ethics\n"
                        "MGMT 1301 Management Fundamentals\n"
                        "ENTR 3310 Entrepreneurship\n"

                };
            }
            else if (studentName == "Mia Harris") {
                name = {
                        "Harris, Mia\n"
                };
                major = {
                        "Nursing\n"
                };
                transcript = {
                        "BIOL 2301 Anatomy and Physiology \n"
                        "RNSG 1115 Nursing Fundamentals\n"
                        "RNSG 1301 Pharmacology\n"
                        "SRGT 1260 Medical-Surgical Nursing\n"
                        "RNSG 1305 Pediatric Nursing\n"

                };
            }
            else if (studentName == "Aiden Wilson") {
                name = {
                        "Wilson, Aiden\n"
                };
                major = {
                        "Arts\n"
                };
                transcript = {
                        "ARTS 1303 Art History\n"
                        "ARTS 2316 Painting Techniques\n"
                        "ARTS 2326 Sculpture Fundamentals\n"
                        "ARTS 1316 Drawing and Sketching\n"
                        "ARTS 2356 Photography Basics\n"

                };
            }
            else if (studentName == "Isabella Moore") {
                name = {
                        "Moore, Isabella\n"
                };
                major = {
                        "Cyber Security\n"
                };
                transcript = {
                        "ITEC 3388 Introduction to Cyber Security \n"
                        "COSC 3341 Network Security \n"
                        "COSC 4331 Ethical Hacking\n"
                        "ITEC 4381 Digital Forensics\n"
                        "COSC 4241 Information Security Management\n"

                };
            }
            else if (studentName == "Lucas Jackson") {
                name = {
                        "Jackson, Lucas\n"
                };
                major = {
                        "Computer Science\n"
                };
                transcript = {
                        "COSC 1436 Introduction to Programming\n"
                        "COSC 2436 Data Structures and Algorithm\n"
                        "COSC 4366 Operating Systems\n"
                        "COSC 4354 Computer Networks\n"
                        "COSC 5333 Database Management\n"

                };
            }
            else if (studentName == "Harper Martinez") {
                name = {
                        "Martinez, Harper\n"
                };
                major = {
                        "Arts\n"
                };
                transcript = {
                        "ARTS 1303 Art History\n"
                        "ARTS 2316 Painting Techniques\n"
                        "ARTS 2326 Sculpture Fundamentals\n"
                        "ARTS 1316 Drawing and Sketching\n"
                        "ARTS 2356 Photography Basics\n"

                };
            }
            else if (studentName == "Oliver Thompson") {
                name = {
                        "Thompson, Oliver\n"
                };
                major = {
                        "Business\n"
                };
                transcript = {
                        "ACCT 2301 Financial Accounting\n"
                        "MAR 2301 Marketing Principles\n"
                        "BUSI 2301 Business Ethics\n"
                        "MGMT 1301 Management Fundamentals\n"
                        "ENTR 3310 Entrepreneurship\n"

                };
            }
            else if (studentName == "Amelia Robinson") {
                name = {
                        "Robinson Amelia\n"
                };
                major = {
                        "Nursing\n"
                };
                transcript = {
                        "BIOL 2301 Anatomy and Physiology \n"
                        "RNSG 1115 Nursing Fundamentals\n"
                        "RNSG 1301 Pharmacology\n"
                        "SRGT 1260 Medical-Surgical Nursing\n"
                        "RNSG 1305 Pediatric Nursing\n"

                };
            }
            else if (studentName == "Elijah Adams") {
                name = {
                        "Adams, Elijah\n"
                };
                major = {
                        "Cyber Security\n"
                };
                transcript = {
                        "ITEC 3388 Introduction to Cyber Security \n"
                        "COSC 3341 Network Security \n"
                        "COSC 4331 Ethical Hacking\n"
                        "ITEC 4381 Digital Forensics\n"
                        "COSC 4241 Information Security Management\n"

                };
            }
            else if (studentName == "Charlotte Lewis") {
                name = {
                        "Lewis Charlotte\n"
                };
                major = {
                        "Arts\n"
                };
                transcript = {
                        "ARTS 1303 Art History\n"
                        "ARTS 2316 Painting Techniques\n"
                        "ARTS 2326 Sculpture Fundamentals\n"
                        "ARTS 1316 Drawing and Sketching\n"
                        "ARTS 2356 Photography Basics\n"

                };
            } else if (studentName == "Benjamin Hall") {
                name = {
                        "Hall, Benjamin\n"
                };
                major = {
                        "Business\n"
                };
                transcript = {
                        "ACCT 2301 Financial Accounting\n"
                        "MAR 2301 Marketing Principles\n"
                        "BUSI 2301 Business Ethics\n"
                        "MGMT 1301 Management Fundamentals\n"
                        "ENTR 3310 Entrepreneurship\n"

                };
            } else if (studentName == "Ava Edwards") {
                name = {
                        "Edwards, Ava\n"
                };
                major = {
                        "Nursing\n"
                };
                transcript = {
                        "BIOL 2301 Anatomy and Physiology \n"
                        "RNSG 1115 Nursing Fundamentals\n"
                        "RNSG 1301 Pharmacology\n"
                        "SRGT 1260 Medical-Surgical Nursing\n"
                        "RNSG 1305 Pediatric Nursing\n"

                };
                } else if (studentName == "Mia Turner") {
                name = {
                        "Turner Mia\n"
                };
                major = {
                        "Computer Science\n"
                };
                transcript = {
                        "COSC 1436 Introduction to Programming\n"
                        "COSC 2436 Data Structures and Algorithm\n"
                        "COSC 4366 Operating Systems\n"
                        "COSC 4354 Computer Networks\n"
                        "COSC 5333 Database Management\n"

                };
        }
    }
