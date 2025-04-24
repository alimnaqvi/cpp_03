#include "FragTrap.h"
#include "ScavTrap.h"
#include "ClapTrap.h"
#include <iostream>

int main() {
    FragTrap  haze{ "Haze" };
    ScavTrap  rust{ "Rust" };
    ClapTrap* magPtr{ new ScavTrap{ "Mag" } };

    std::cout << MAGENTA;
    haze.attack( "Rust" );
    rust.takeDamage( haze.getAttackDamage() );

    std::cout << BLUE;
    rust.attack( "Haze" );
    haze.takeDamage( rust.getAttackDamage() );

    std::cout << BLUE;
    rust.guardGate();

    std::cout << YELLOW;
    magPtr->attack( "Haze" );
    haze.takeDamage( magPtr->getAttackDamage() );

    std::cout << GREEN;
    haze.highFivesGuys();

    std::cout << RED;
    haze.attack( "Mag" );
    magPtr->takeDamage( haze.getAttackDamage() );

    std::cout << YELLOW;
    magPtr->attack( "Haze" );
    haze.takeDamage( magPtr->getAttackDamage() );

    std::cout << CYAN;
    haze.beRepaired( 50 );

    std::cout << RED;
    haze.attack( "Mag" );
    magPtr->takeDamage( haze.getAttackDamage() );

    std::cout << GREEN;
    haze.highFivesGuys();

    std::cout << RED;
    haze.attack( "Mag" );
    magPtr->takeDamage( haze.getAttackDamage() );

    std::cout << RESET;
    delete magPtr;

    return 0;
}
