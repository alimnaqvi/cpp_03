#include "ClapTrap.h"
#include "FragTrap.h"
#include "ScavTrap.h"
#include "DiamondTrap.h"
#include <iostream>

int main() {
    DiamondTrap shiny{ "Shiny" };

    shiny.whoAmI();
    shiny.attack("somebody");
    shiny.guardGate();
    shiny.highFivesGuys();

    return 0;
}
