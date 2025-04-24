#include "ScavTrap.h"
#include <iostream>

int main() {
    ClapTrap  rust{ "Rust" };
    ScavTrap  scoob{ "Scoob" };
    ClapTrap* magPtr{ new ScavTrap{ "Mag" } };

    std::cout << MAGENTA;
    scoob.attack( "Rust" );
    rust.takeDamage( scoob.getAttackDamage() );

    std::cout << BLUE;
    rust.attack( "Scoob" );
    scoob.takeDamage( rust.getAttackDamage() );

    std::cout << YELLOW;
    magPtr->attack( "Scoob" );
    scoob.takeDamage( magPtr->getAttackDamage() );

    std::cout << GREEN;
    scoob.guardGate();

    std::cout << RED;
    scoob.attack( "Mag" );
    magPtr->takeDamage( scoob.getAttackDamage() );

    std::cout << YELLOW;
    magPtr->attack( "Scoob" );
    scoob.takeDamage( magPtr->getAttackDamage() );

    std::cout << CYAN;
    scoob.beRepaired( 50 );

    std::cout << RED;
    scoob.attack( "Mag" );
    magPtr->takeDamage( scoob.getAttackDamage() );

    std::cout << GREEN;
    scoob.guardGate();

    std::cout << RED;
    scoob.attack( "Mag" );
    magPtr->takeDamage( scoob.getAttackDamage() );

    std::cout << RESET;
    delete magPtr;

    return 0;
}
