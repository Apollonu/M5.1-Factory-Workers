#pragma once

#include "Employee.h"

class ProductionWorker : public Employee {
private:
    int shift;
    double hourlyPayRate;

public:
    ProductionWorker(string name, string employeeNumber, string hireDate, int shift, double hourlyPayRate);
    int getShift() const;
    double getHourlyPayRate() const;
    void setShift(int shift);
    void setHourlyPayRate(double hourlyPayRate);
    void printProductionWorker() const;
};