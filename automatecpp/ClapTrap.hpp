#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap &ref);
        ClapTrap &operator=(const ClapTrap &ref);
};

#endif