#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap {
  public:
    FragTrap();
    FragTrap( const std::string& initName );
    FragTrap( const FragTrap& fragtrap );
    FragTrap& operator=( const FragTrap& fragtrap );
    virtual ~FragTrap() override;

    void highFivesGuys( void );
};

#endif /* FRAGTRAP_H */
