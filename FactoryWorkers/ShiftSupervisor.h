#pragma once

#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualProductionBonus;

public:
    ShiftSupervisor(string name, string employeeNumber, string hireDate, double annualSalary, double annualProductionBonus);
    double getAnnualSalary() const;
    double getAnnualProductionBonus() const;
    void setAnnualSalary(double annualSalary);
    void setAnnualProductionBonus(double annualProductionBonus);
    void printShiftSupervisor() const;
};