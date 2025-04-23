#include "ClapTrap.h"

ClapTrap::ClapTrap() : ClapTrap{ "noName" } {
    std::cout << "Default constructor called" << '\n';
}

ClapTrap::ClapTrap( const std::string& initName )
    : mName{ initName }, mHitPoints{ 10 }, mEnergyPoints{ 10 }, mAttackDamage{ 0 } {
    std::cout << "String constructor called" << '\n';
}

ClapTrap::ClapTrap( const ClapTrap& claptrap )
    : mName{ claptrap.mName }, mHitPoints{ claptrap.mHitPoints }, mEnergyPoints{ claptrap.mEnergyPoints },
      mAttackDamage{ claptrap.mAttackDamage } {
    std::cout << "Copy constructor called" << '\n';
}

ClapTrap& ClapTrap::operator=( const ClapTrap& claptrap ) {
    std::cout << "Copy assignment operator called" << '\n';

    if ( this != &claptrap ) {
        this->mName         = claptrap.mName;
        this->mHitPoints    = claptrap.mHitPoints;
        this->mEnergyPoints = claptrap.mEnergyPoints;
        this->mAttackDamage = claptrap.mAttackDamage;
    }

    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << '\n';
}

void ClapTrap::attack( const std::string& target ) {
    if ( mHitPoints < 1 ) {
        std::cout << "ClapTrap " << mName << " cannot attack because it is out of hit points" << '\n';
        return;
    } else if ( mEnergyPoints < 1 ) {
        std::cout << "ClapTrap" << mName << "cannot attack because it is out of energy points" << '\n';
        return;
    }

    mEnergyPoints--;
    std::cout << "ClapTrap " << mName << " attacks " << target << ", causing " << mAttackDamage << " points of damage!"
              << '\n';
}

void ClapTrap::takeDamage( unsigned int amount ) {
    if ( mHitPoints < 1 ) {
        std::cout << "ClapTrap " << mName << " cannot take damage because it is already dead (out of hit points)!"
                  << '\n';
        return;
    }

    if ( amount < mHitPoints )
        mHitPoints -= amount;
    else
        mHitPoints = 0;
    std::cout << "ClapTrap " << mName << " takes " << amount << " damage. It now has " << mHitPoints << " hit points!"
              << '\n';
}

void ClapTrap::beRepaired( unsigned int amount ) {
    if ( mEnergyPoints < 1 ) {
        std::cout << "ClapTrap" << mName << "cannot be repaired because it is out of energy points" << '\n';
        return;
    }

    mEnergyPoints--;
    mHitPoints += amount;
    std::cout << "ClapTrap " << mName << " repairs " << amount << " hit points. It now has " << mHitPoints
              << " hit points!" << '\n';
}

unsigned int ClapTrap::getAttackDamage() {
    return mAttackDamage;
}
