#include "Person.h"

Person::Person() {
    name = "";
    cnic = "";
    age = 0;
    contact = "";
}

Person::Person(string n, string c, int a, string cont) {
    name = n;
    cnic = c;
    age = a;
    contact = cont;
}

Person::~Person() {
}

// getters
string Person::getName() { return name; }
string Person::getCnic() { return cnic; }
int Person::getAge() { return age; }
string Person::getContact() { return contact; }

void Person::setName(string n) { name = n; }
void Person::setCnic(string c) { cnic = c; }
void Person::setAge(int a) { age = a; }
void Person::setContact(string cont) { contact = cont; }