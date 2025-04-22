#pragma once

#include <string>
using namespace std;

class Employee {
private:
    string name;
    string employeeNumber;
    string hireDate;

public:
    Employee(string name, string employeeNumber, string hireDate);
    string getName() const;
    string getEmployeeNumber() const;
    string getHireDate() const;
    void setName(string name);
    void setEmployeeNumber(string employeeNumber);
    void setHireDate(string hireDate);
    void printEmployee() const;
};