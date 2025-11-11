//
// Created by sarag on 11/11/2025.
//

#ifndef MILESTONE01_PERSON_H
#define MILESTONE01_PERSON_H
using namespace std;
class Person {
private:
    string name;
    int id;
public:
    Person(string name, int id);
    Person();
    void display();
    string getName();
    int getId();
};
#endif //MILESTONE01_PERSON_H
