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
    virtual ~ClapTrap();

    void attack( const std::string& target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );

    unsigned int       getHitPoints();
    unsigned int       getEnergyPoints();
    unsigned int       getAttackDamage();
    const std::string& getName();

  protected:
    ClapTrap( const std::string& initName, unsigned int initHitPoints, unsigned int initEnergyPoints,
              unsigned int initAttackDamage );

  private:
    std::string  mName;
    unsigned int mHitPoints;
    unsigned int mEnergyPoints;
    unsigned int mAttackDamage;
};

#endif /* CLAPTRAP_H */
