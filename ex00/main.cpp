#include "ClapTrap.h"
#include <iostream>

int main() {
    ClapTrap noName;
    ClapTrap rust {"Rust"};
    ClapTrap jim {"Jim"};

    rust.attack("Jim");
    jim.takeDamage(rust.getAttackDamage());

    noName.attack("Rust");
    rust.takeDamage(noName.getAttackDamage());

    jim.attack("Rust");
    rust.takeDamage(jim.getAttackDamage());

    rust.beRepaired(15);

    rust.attack("noName");
    noName.takeDamage(rust.getAttackDamage());

    rust.attack("Jim");
    jim.takeDamage(rust.getAttackDamage());

    jim.attack("noName");
    noName.takeDamage(jim.getAttackDamage());

    return 0;
}
