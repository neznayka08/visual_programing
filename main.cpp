#include "UserEquipment.h"
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));

    UserEquipment ue(1, 500, 500);

    for (int i = 0; i < 100; i++) {
        ue.moveRandom();
        ue.convertToGeographicCoordinates();
        ue.printPosition();
    }

    ue.printPath();

    return 0;
}