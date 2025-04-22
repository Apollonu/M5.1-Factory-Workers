#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string name, string employeeNumber, string hireDate)
    : name(name), employeeNumber(employeeNumber), hireDate(hireDate) {}

string Employee::getName() const {
    return name;
}
string Employee::getEmployeeNumber() const {
    return employeeNumber;
}
string Employee::getHireDate() const {
    return hireDate;
}

void Employee::setName(string name) {
    this-> name = name;
}
void Employee::setEmployeeNumber(string employeeNumber) {
    this-> employeeNumber = employeeNumber;
}
void Employee::setHireDate(string hireDate) {
    this-> hireDate = hireDate;
}

void Employee::printEmployee() const {
    cout << "Name: " << name << endl;
    cout << "Employee Number: " << employeeNumber << endl;
    cout << "Hire Date: " << hireDate << endl;
}
