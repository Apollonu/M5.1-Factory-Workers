#include "ProductionWorker.h"
#include <iostream>
using namespace std;

ProductionWorker::ProductionWorker(string name, string employeeNumber, string hireDate, int shift, double hourlyPayRate)
    : Employee(name, employeeNumber, hireDate), shift(shift), hourlyPayRate(hourlyPayRate) {}

int ProductionWorker::getShift() const {
    return shift;
}
double ProductionWorker::getHourlyPayRate() const {
    return hourlyPayRate;
}

void ProductionWorker::setShift(int shift) {
    this-> shift = shift;
}
void ProductionWorker::setHourlyPayRate(double hourlyPayRate) {
    this-> hourlyPayRate = hourlyPayRate;
}

void ProductionWorker::printProductionWorker() const {
    printEmployee();
    cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
    cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
}
