
#ifndef MILESTONE01_INSTRUCTOR_H
#define MILESTONE01_INSTRUCTOR_H
#include <string>

#include "Person.h"
using namespace std;
class Instructor : public Person {
private:
    string department;
    int experienceYears;
public:
    Instructor(string name, int id, string department, int experienceYears );
    void display();
};
#endif //MILESTONE01_INSTRUCTOR_H
