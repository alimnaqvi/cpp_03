#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {
  public:
    ClapTrap();
    ClapTrap( const std::string& initName );
    ClapTrap( const ClapTrap& claptrap );
    ClapTrap& operator=( const ClapTrap& claptrap );
    ~ClapTrap();

    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );

    unsigned int getAttackDamage();

  private:
    std::string  mName;
    unsigned int mHitPoints;
    unsigned int mEnergyPoints;
    unsigned int mAttackDamage;
};

#endif /* CLAPTRAP_H */
