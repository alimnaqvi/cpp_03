#include "ScavTrap.h"

ScavTrap::ScavTrap() {
    std::cout << "Default constructor called (ScavTrap class)" << '\n';
}

ScavTrap::ScavTrap( const std::string& initName )
    : ClapTrap{ initName }, mHitPoints{ 10 }, mEnergyPoints{ 10 }, mAttackDamage{ 0 } {
    std::cout << "String constructor called (ScavTrap class)" << '\n';
}

ScavTrap::ScavTrap( const ScavTrap& scavtrap );
ScavTrap& ScavTrap::operator=( const ScavTrap& scavtrap );
ScavTrap::~ScavTrap() {
    std::cout << "Destructor called (ScavTrap class)" << '\n';
}

void ScavTrap::guardGate();
