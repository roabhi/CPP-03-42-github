// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScravTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/10 19:24:52 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/10 20:16:22 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScravTrap.hpp"

ScravTrap::ScravTrap(void) : ClapTrap("anonymous", 100,50,20)
{
	this->_guardStatus = false;
	std::cout << "Default constructor called for ScrapTrap" << std::endl;
	return ;
}

ScravTrap::ScravTrap(std::string name) : ClapTrap(name, 100,50,20)
{
	this->_guardStatus = false;
	std::cout << "ScravTrapp constructor called for ";
	std::cout << name << std::endl;
}

ScravTrap::ScravTrap(const ScravTrap &inst)
{
	std::cout << "Copy constructor called for" << this->_name << std::endl;
	*this = inst;
}

ScravTrap::~ScravTrap(void)
{
	std::cout << "Default destructor called for ScravTrap " << this->_name << std::endl;
}

ScravTrap &ScravTrap::operator=(const ScravTrap &inst)
{
	this->_name = inst.getName();
	this->_hitPoints = inst.getHitPoints();
	this->_energyPoints = inst.getEnergyPoints();
	this->_attackDamage = inst.getAttackDamage();
	this->_guardStatus = inst.getGuardStatus();

	std::cout << "ScravTrap copy assignment operator called for ";
	std::cout << _name << " to become " << this->_name << std::endl;

	return (*this);
}

void ScravTrap::attack(const std::string &target)
{
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ScravTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage;
		std::cout << " points of damage! ";
		if (_energyPoints > 0)
			std::cout << this->_energyPoints << " energy points left!" << std::endl;
		else
			std::cout << "No energy points left!" << std::endl;
		
		//&target.takeDamage(attackDamage); //Make target take damage
		return ;
	}

	std::cout << "ScravTrap " << this->_name << " can't attack " << target;
	std::cout << ", because don't have enough Energy or Hit Points!";
	std::cout << std::endl;
}

void ScravTrap::guardGate()
{
	this->_guardStatus = true;
	std::cout << "ScravTrap " << this->_name << " is NOW in keeper mode" << std::endl;
	
}

bool ScravTrap::getGuardStatus() const
{
	if (this->_guardStatus)
		std::cout << this->_name << " is on keerper mode" << std::endl;
	else
		std::cout << this->_name << " is NOT on keeper mode" << std::endl;
	return (this->_guardStatus);
}
