#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"
using namespace std;

int main() {
    ProductionWorker worker1("Alice Johnson", "PW001", "2023-01-15", 1, 20.50);
    ProductionWorker worker2("Bob Smith", "PW002", "2023-02-20", 2, 22.00);

    cout << "Production Worker 1:" << endl;
    worker1.printProductionWorker();
    cout << endl;

    cout << "Production Worker 2:" << endl;
    worker2.printProductionWorker();
    cout << endl;

    ShiftSupervisor supervisor("Charlie Brown", "SS001", "2022-05-10", 75000, 5000);

    cout << "Shift Supervisor:" << endl;
    supervisor.printShiftSupervisor();
    cout << endl;

    TeamLeader teamLeader("Diana Prince", "TL001", "2023-03-01", 1, 25.00, 1500, 40, 35);

    cout << "Team Leader:" << endl;
    teamLeader.printTeamLeader();
    cout << endl;

    return 0;
}
