#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"
#include <string>
#include <iostream>

#define MAGENTA     "\033[35m"
#define BLUE        "\033[34m"
#define CYAN        "\033[36m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define RESET       "\033[0m"

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
