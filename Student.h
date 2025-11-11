//
// Created by sarag on 11/11/2025.
//

#ifndef MILESTONE01_STUDENT_H
#define MILESTONE01_STUDENT_H
#include <string>
#include "Person.h";
using namespace std;
class Student: public Person {
private:
    int yearLevel;
    string  major;
public:
    Student(string name, int id, int yearLevel, string major);
    Student();
    void display();
};
#endif //MILESTONE01_INSTRUCTOR_H
