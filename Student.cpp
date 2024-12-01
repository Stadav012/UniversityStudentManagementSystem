#include "Student.h"
#include <iostream>
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;

class Student : public Users {
public:
    // Attributes
    int student_id;
    DateTime DOB;                           
    //array<unsigned char>^ picture;         
    string major;                     
    DateTime enrollDate;                   


    // Constructor
    Student(const int id, const DateTime& D_O_B, const std::string& maj)
        : student_id(id), DOB(D_O_B), major(maj) {} 
    // Methods
    void enrollCourse() {
        std::cout << "Enrolling in course..." << std::endl;
    }

    void viewGrades() {
        std::cout << "Viewing grades..." << std::endl;
    }
};

