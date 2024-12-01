#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Course : public Users {
public:
    int course_id;                      
    string courseName;            
    int credits;                       
    string schedule;              



    // Constructor
    Course(int id, const string& name, int credit, const string& sched)
        : course_id(id), courseName(name), credits(credit), schedule(sched) {}

    // Methods
    void assignFaculty(const string& facultyName) {
    }

    void registerStudent(const string& studentName) {

    }
};

