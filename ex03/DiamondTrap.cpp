#include "DiamondTrap.h"

DiamondTrap::DiamondTrap()
    : ClapTrap{ "noName" "_clap_name", 100, 50, 30 }, mName {"noName"} {
    std::cout << "Default constructor called. Class: DiamondTrap. Object: " << mName << '\n';
}

DiamondTrap::DiamondTrap( const std::string& initName )
    : ClapTrap{ initName + "_clap_name", 100, 50, 30 }, mName{ initName } {
    std::cout << "String constructor called. Class: DiamondTrap. Object: " << mName << '\n';
}

DiamondTrap::DiamondTrap( const DiamondTrap& diamondtrap )
    : ClapTrap{ diamondtrap }, ScavTrap{ diamondtrap }, FragTrap{ diamondtrap }, mName{ diamondtrap.mName } {
    std::cout << "Copy constructor called. Class: DiamondTrap. Object: " << mName << '\n';
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& diamondtrap ) {
    std::cout << "Copy assignment operator called. Class: DiamondTrap. Object: " << mName << '\n';

    if ( this != &diamondtrap ) {
        ClapTrap::operator=( diamondtrap );
        FragTrap::operator=( diamondtrap );
        ScavTrap::operator=( diamondtrap );
        mName = diamondtrap.mName;
    }

    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "Destructor called. Class: DiamondTrap. Object: " << mName << '\n';
}

void attack( const std::string& target ) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << mName << " (ClapTrap name: " << getName() << ')' << '\n';
}
