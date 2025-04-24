#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"
#include <string>
#include <iostream>

class ScavTrap : public ClapTrap {
  public:
    ScavTrap();
    ScavTrap( const std::string& initName );
    ScavTrap( const ScavTrap& scavtrap );
    ScavTrap& operator=( const ScavTrap& scavtrap );
    virtual ~ScavTrap() override;

    void guardGate();

  private:
    bool mGuardMode;
};

#endif /* SCAVTRAP_H */
