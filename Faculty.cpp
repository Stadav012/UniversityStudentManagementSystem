#include "Faculty.h"
#include <iostream>
#include <string>
#include "Users.h"
#include <vector>
using namespace std;

class Faculty : public Users {
public:
    int faculty_id;
    string dateOfAppointment;
    string department;
    vector<string> listOfTeachingCourses; 

    // Constructor
    Faculty(int id, const string& first, const string& last, const string& mail,
        const string& pass, int facID, const string& appointmentDate,
        const string& dept, const vector<string>& courses) {

        faculty_id = id;
        dateOfAppointment = appointmentDate;
        department = dept;
        listOfTeachingCourses = courses;


    };

    void enterGrades() {
    }

    void viewRoster() {
       
        }
    
};

