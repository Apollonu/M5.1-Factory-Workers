#pragma once

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    TeamLeader(string name, string employeeNumber, string hireDate, int shift, double hourlyPayRate,
        double monthlyBonus, int requiredTrainingHours, int attendedTrainingHours);
    double getMonthlyBonus() const;
    int getRequiredTrainingHours() const;
    int getAttendedTrainingHours() const;
    void setMonthlyBonus(double monthlyBonus);
    void setRequiredTrainingHours(int requiredTrainingHours);
    void setAttendedTrainingHours(int attendedTrainingHours);
    void printTeamLeader() const;
};