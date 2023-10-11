// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/11 15:37:16 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/11 15:41:33 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("anonymous", 100,50,20)
{
	this->_guardStatus = false;
	std::cout << "Default constructor called for ScavTrap" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100,50,20)
{
	this->_guardStatus = false;
	std::cout << "ScavTrapp constructor called for ";
	std::cout << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &inst)
{
	std::cout << "Copy constructor called for" << this->_name << std::endl;
	*this = inst;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Default destructor called for ScavTrap " << this->_name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &inst)
{
	this->_name = inst.getName();
	this->_hitPoints = inst.getHitPoints();
	this->_energyPoints = inst.getEnergyPoints();
	this->_attackDamage = inst.getAttackDamage();
	this->_guardStatus = inst.getGuardStatus();

	std::cout << "ScavTrap copy assignment operator called for ";
	std::cout << _name << " to become " << this->_name << std::endl;

	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage;
		std::cout << " points of damage! ";
		if (_energyPoints > 0)
			std::cout << this->_energyPoints << " energy points left!" << std::endl;
		else
			std::cout << "No energy points left!" << std::endl;
		
		//&target.takeDamage(attackDamage); //Make target take damage
		return ;
	}

	std::cout << "ScavTrap " << this->_name << " can't attack " << target;
	std::cout << ", because don't have enough Energy or Hit Points!";
	std::cout << std::endl;
}

void ScavTrap::guardGate()
{
	this->_guardStatus = true;
	std::cout << "ScavTrap " << this->_name << " is NOW in keeper mode" << std::endl;
	
}

bool ScavTrap::getGuardStatus() const
{
	if (this->_guardStatus)
		std::cout << this->_name << " is on keerper mode" << std::endl;
	else
		std::cout << this->_name << " is NOT on keeper mode" << std::endl;
	return (this->_guardStatus);
}
