#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"
#include <iostream>
#include <string>

#define MAGENTA "\033[35m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"

class DiamondTrap : public ScavTrap, public FragTrap {
  public:
    DiamondTrap();
    DiamondTrap( const std::string& initName );
    DiamondTrap( const DiamondTrap& diamondtrap );
    DiamondTrap& operator=( const DiamondTrap& diamondtrap );
    virtual ~DiamondTrap() override;

    void attack( const std::string& target );

    void whoAmI();

  private:
    std::string  mName;
};

#endif /* DIAMONDTRAP_H */
