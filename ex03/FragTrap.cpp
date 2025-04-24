#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap{ "noName", 100, 100, 30 } {
    std::cout << "Default constructor called. Class: FragTrap. Object: " << getName() << '\n';
}

FragTrap::FragTrap( const std::string& initName ) : ClapTrap{ initName, 100, 50, 20 } {
    std::cout << "String constructor called. Class: FragTrap. Object: " << getName() << '\n';
}

FragTrap::FragTrap( const FragTrap& fragtrap ) : ClapTrap{ fragtrap } {
    std::cout << "Copy constructor called. Class: FragTrap. Object: " << getName() << '\n';
}

FragTrap& FragTrap::operator=( const FragTrap& fragtrap ) {
    std::cout << "Copy assignment operator called. Class: FragTrap. Object: " << getName() << '\n';

    if ( this != &fragtrap ) {
        ClapTrap::operator=( fragtrap );
    }

    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "Destructor called. Class: FragTrap. Object: " << getName() << '\n';
}

void FragTrap::highFivesGuys( void ) {
    if ( getHitPoints() < 1 ) {
        std::cout << "FragTrap " << getName() << " cannot high five because it is dead (out of hit points)!" << '\n';
        return;
    }

    std::cout << "FragTrap " << getName() << " says: HIGH FIVE GUYS!" << '\n';
}
