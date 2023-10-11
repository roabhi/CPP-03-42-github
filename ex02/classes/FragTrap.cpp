// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/11 15:54:28 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/11 16:27:00 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("anonymous", 100, 100, 30)
{
	std::cout << "Default Copy constructor called for FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor called for FragTrap " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &inst)
{
	std::cout << "Copy constructor called for FragTrap" << this->_name << std::endl;
	*this = inst;
}


FragTrap::~FragTrap(void)
{
	std::cout << "Default destructor called for FragTrap " << this->_name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &inst)
{
	this->_name = (inst.getName());
	this->_hitPoints = (inst.getHitPoints());
	this->_energyPoints = (inst.getEnergyPoints());
	this->_attackDamage = (inst.getAttackDamage());

	std::cout << "FragTrap copy constructor called for " << this->_name << std::endl;

	return (*this);
	
}

void FragTrap::highFiveGuys()
{
	std::string msg;

	std::cout << "FragTrap " << this->getName()	\
	<< " says 'HIGH FIVE GUYS!'" << std::endl;
	if (!std::getline(std::cin, msg))
		return ;
	if (msg == "HIGH FIVE")
		std::cout << "YEEEEEEAHHHH!" << std::endl;
	else
	{
		std::cout << "Ok...why if you just type HIGH FIVE?" << std::endl;
		msg.erase();
		this->highFiveGuys();
	}
	
}
