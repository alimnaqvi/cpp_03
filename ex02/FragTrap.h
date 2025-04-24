#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"
#include <iostream>
#include <string>

#define MAGENTA "\033[35m"
#define BLUE    "\033[34m"
#define CYAN    "\033[36m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define RESET   "\033[0m"

class FragTrap : public ClapTrap {
  public:
    FragTrap();
    FragTrap( const std::string& initName );
    FragTrap( const FragTrap& fragtrap );
    FragTrap& operator=( const FragTrap& fragtrap );
    virtual ~FragTrap() override;

    void highFivesGuys( void );
};

#endif /* FRAGTRAP_H */
