#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
    *this = ref;
	std::cout << "ClapTrap Copy construct" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ref)
{
    if (this != &ref)
    {
        //file it
    }
	std::cout << "ClapTrap copy assignment" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructed" << std::endl;
}
