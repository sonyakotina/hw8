#include "Student.h"

Student::Student() {};

Student::Student(string firstName, string lastName, string birthDate, string group)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->birthDate = birthDate;
    this->group = group;
}

Student& Student::operator=(Student& other)
{
    if (this != &other) {
        firstName = other.firstName;
        lastName = other.lastName;
        birthDate = other.birthDate;
        group = other.group;
    }

    return *this;
}

ostream& operator<<(ostream& out, Student& s)
{
    out << "Student" << endl;
    out << "Name: " << s.firstName << " " << s.lastName << endl;
    out << "Birth date: " << s.birthDate << endl;
    out << "Group: " << s.group << endl;

    return out;
}

istream& operator>>(istream& in, Student& s)
{
    cout << "First name: ";
    in >> s.firstName;
    cout << "Last name: ";
    in >> s.lastName;
    cout << "Birth date: ";
    in >> s.birthDate;
    cout << "Group: ";
    in >> s.group;
    return in;
}
