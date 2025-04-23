#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
  public:
    ScavTrap();
    ScavTrap( const std::string& initName );
    ScavTrap( const ScavTrap& scavtrap );
    ScavTrap& operator=( const ScavTrap& scavtrap );
    ~ScavTrap();

    void guardGate();
};

#endif /* SCAVTRAP_H */
