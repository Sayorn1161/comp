#include "CPU.h"
#include "RAM.h"
#include "Storage.h"
#include "GPU.h"
#include "Motherboard.h"
#include "PowerSupply.h"
#include "Display.h"
#include "InputDevices.h"
#include "OS.h"
#include "Team.h"
#include "Position.h"

int main() {
    CPU cpu;
    RAM ram;
    Storage storage;
    GPU gpu;
    Motherboard motherboard;
    PowerSupply powerSupply;
    Display display;
    InputDevices inputDevices;
    OS os;

    Team team;
    Unit* unit1 = /* створення конкретного юніта */;
    unit1->setPosition(Position(10, 20));
    team.addUnit(unit1);

    team.print();

    return 0;
}
