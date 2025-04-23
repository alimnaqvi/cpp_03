#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap{ "noName", 100, 50, 20 } {
    std::cout << "Default constructor called (ScavTrap class)" << '\n';
}

ScavTrap::ScavTrap( const std::string& initName ) : ClapTrap{ initName, 100, 50, 20 } {
    std::cout << "String constructor called (ScavTrap class)" << '\n';
}

ScavTrap::ScavTrap( const ScavTrap& scavtrap ) : ClapTrap{ scavtrap } {
    std::cout << "Copy constructor called (ScavTrap class)" << '\n';
}

ScavTrap& ScavTrap::operator=( const ScavTrap& scavtrap ) {
    std::cout << "Copy assignment operator called (ScavTrap class)" << '\n';

    if (this != &scavtrap)
        ClapTrap::operator=( scavtrap );
    
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor called (ScavTrap class)" << '\n';
}

void ScavTrap::guardGate();
