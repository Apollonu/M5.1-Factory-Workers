#include "ShiftSupervisor.h"
#include <iostream>
using namespace std;

ShiftSupervisor::ShiftSupervisor(string name, string employeeNumber, string hireDate, double annualSalary, double annualProductionBonus)
    : Employee(name, employeeNumber, hireDate), annualSalary(annualSalary), annualProductionBonus(annualProductionBonus) {}

double ShiftSupervisor::getAnnualSalary() const {
    return annualSalary;
}
double ShiftSupervisor::getAnnualProductionBonus() const {
    return annualProductionBonus;
}

void ShiftSupervisor::setAnnualSalary(double annualSalary) {
    this-> annualSalary = annualSalary;
}
void ShiftSupervisor::setAnnualProductionBonus(double annualProductionBonus) {
    this-> annualProductionBonus = annualProductionBonus;
}

void ShiftSupervisor::printShiftSupervisor() const {
    printEmployee();
    cout << "Annual Salary: $" << annualSalary << endl;
    cout << "Annual Production Bonus: $" << annualProductionBonus << endl;
}
