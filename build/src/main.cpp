#include <iostream>
#include "odysseus/odysseus.h"

int main (int argc, char *argv[]) {
    std::cout << "Built with " << odysseus::compiler().id.name;

    return 0;
}