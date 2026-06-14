#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    string cnic;
    int age;
    string contact;

public:
    Person();
    Person(string n, string c, int a, string cont);
	
    virtual ~Person();

    virtual void displayInfo() = 0;
	
    string getName();
    string getCnic();
    int getAge();
    string getContact();
    
    void setName(string n);
    void setCnic(string c);
    void setAge(int a);
    void setContact(string cont);
};

#endif