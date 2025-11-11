#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Course.h"
#include "Instructor.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person::Person(string name, int id) {
    this->name = name;
    this->id = id;
}

Person::Person() {
    this->name = "";
    this->id = 0;

}


void Person::display() {
    cout << "Name: " << this->name << endl;
    cout << "ID: " << this->id << endl;
}

string Person::getName() {
    return name;
}

int Person::getId() {
    return id;
}








// ==================== Student Class Implementation ====================

Student::Student(string name, int id, int yearLevel, string major): Person(name, id) {
    this->yearLevel = yearLevel;
    this->major = major;
}

Student::Student() : Person() {
}


void Student::display() {
    cout << "Student Info: " << endl;
    cout << "Name: " << getName() << endl;
    cout << "Year: " << this->yearLevel << endl;
    cout << "Major: " << this->major << endl;
}





// ==================== Instructor Class Implementation ====================

Instructor::Instructor(string name, int id, string department, int experienceYears): Person(name, id) {
    this->department = department;
    this->experienceYears = experienceYears;
}

void Instructor::display() {
    cout << "Instructor Info: " << endl;
    cout << "Name: " << getName() << endl;
    cout << "Department: " << department << endl;
    cout << "Experience: " << experienceYears << " years" << endl;
}




// ==================== Course Class Implementation ====================

Course::Course(string courseCode, string courseName, int maxStudents) {
    this->courseCode = courseCode;
    this->courseName = courseName;
    this->maxStudents = maxStudents;
    this->students =  new Student[maxStudents];
}

Course::Course() {
    this->courseCode = "";
    this->courseName = "";
    this->maxStudents = 0;
}

Course::~Course() {
    delete[] students;
}
void Course::addStudent(const Student &s) {
   
    students[currentStudents] = s;
    currentStudents++;
}

void Course::displayCourseInfo() {
    cout << "Course: " << this->courseCode << " - " << this->courseName << endl;
    cout << "Max Students: " << this->maxStudents << endl;
    cout << "Currently Enrolled: " << students[currentStudents-1].getName() << "(" << students[currentStudents- 1].getId() << ")" << endl;
}









// ==================== Main Function ====================
int main() {
    Student* s = new Student("Omar Nabil", 1000, 2, "Informatics");
    Instructor* i = new Instructor("Dr. Lina Khaled", 1200, "Computer Science", 5 );
    Course* c = new Course("CS101", "Introduction to Programming", 3);
    // c->addStudent(*s);
    // c->displayCourseInfo();
    i->display();
    s->display();

    delete s;
    delete i;
    delete c;

    return 0;
}
