//
// Created by sarag on 11/11/2025.
//

#ifndef MILESTONE01_COURSE_H
#define MILESTONE01_COURSE_H
#include "Student.h"
using namespace std;
class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    public:
    Course(string courseCode, string courseName, int maxStudents);
    Course();
    ~Course();
    void addStudent(const Student& s);
    void displayCourseInfo();
};
#endif //MILESTONE01_COURSE_H
