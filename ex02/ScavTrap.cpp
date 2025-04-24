#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap{ "noName", 100, 50, 20 }, mGuardMode{ false } {
    std::cout << "Default constructor called. Class: ScavTrap. Object: " << getName() << '\n';
}

ScavTrap::ScavTrap( const std::string& initName ) : ClapTrap{ initName, 100, 50, 20 }, mGuardMode{ false } {
    std::cout << "String constructor called. Class: ScavTrap. Object: " << getName() << '\n';
}

ScavTrap::ScavTrap( const ScavTrap& scavtrap ) : ClapTrap{ scavtrap }, mGuardMode{ scavtrap.mGuardMode } {
    std::cout << "Copy constructor called. Class: ScavTrap. Object: " << getName() << '\n';
}

ScavTrap& ScavTrap::operator=( const ScavTrap& scavtrap ) {
    std::cout << "Copy assignment operator called. Class: ScavTrap. Object: " << getName() << '\n';

    if ( this != &scavtrap ) {
        ClapTrap::operator=( scavtrap );
        mGuardMode = scavtrap.mGuardMode;
    }

    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor called. Class: ScavTrap. Object: " << getName() << '\n';
}

void ScavTrap::guardGate() {
    if ( getHitPoints() < 1 ) {
        std::cout << "ScavTrap " << getName() << " cannot be in gatekeeper mode because it is dead (out of hit points)!"
                  << '\n';
        return;
    } else if ( mGuardMode ) {
        std::cout << "ScavTrap " << getName() << " is already in gatekeeper mode!" << '\n';
        return;
    }

    mGuardMode = true;

    std::cout << "ScavTrap " << getName() << " is now in gatekeeper mode" << '\n';
}
