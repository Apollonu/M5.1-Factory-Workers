#include "TeamLeader.h"
#include <iostream>
using namespace std;

TeamLeader::TeamLeader(string name, string employeeNumber, string hireDate, int shift, double hourlyPayRate,
    double monthlyBonus, int requiredTrainingHours, int attendedTrainingHours)
    : ProductionWorker(name, employeeNumber, hireDate, shift, hourlyPayRate),
    monthlyBonus(monthlyBonus), requiredTrainingHours(requiredTrainingHours), attendedTrainingHours(attendedTrainingHours) {}

double TeamLeader::getMonthlyBonus() const { return monthlyBonus; }
int TeamLeader::getRequiredTrainingHours() const { return requiredTrainingHours; }
int TeamLeader::getAttendedTrainingHours() const { return attendedTrainingHours; }

void TeamLeader::setMonthlyBonus(double monthlyBonus) { this->monthlyBonus = monthlyBonus; }
void TeamLeader::setRequiredTrainingHours(int requiredTrainingHours) { this->requiredTrainingHours = requiredTrainingHours; }
void TeamLeader::setAttendedTrainingHours(int attendedTrainingHours) { this->attendedTrainingHours = attendedTrainingHours; }

void TeamLeader::printTeamLeader() const {
    printProductionWorker();
    cout << "Monthly Bonus: $" << monthlyBonus << endl;
    cout << "Required Training Hours: " << requiredTrainingHours << endl;
    cout << "Attended Training Hours: " << attendedTrainingHours << endl;
}
