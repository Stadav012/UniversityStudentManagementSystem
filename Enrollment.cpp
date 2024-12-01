#include <iostream>
#include <string>
#include "Users.h"
using namespace std;

class Enrollment : public Users {
public:
    int enroll_id;   
    int student_id;      
    int course_id;       
    std::string semester; 
    char grade;         

    // Constructor
    Enrollment(int eID, int sID, int cID, const string& sem, char grd)
        : enroll_id(eID), student_id(sID), course_id(cID), semester(sem), grade(grd) {}

    void getEnrollmentDetails() const {
        
    }
};
