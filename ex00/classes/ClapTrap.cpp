// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/09 21:56:17 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/09 22:18:11 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	_name = "anonymous";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "ClapTrap constructor called for ";
	std::cout << name << std::endl;
	//_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	return;
}

ClapTrap::ClapTrap( const ClapTrap &src )
{
	std::cout << "Copy constructor called for" << this->_name << std::endl;
	*this = src;	
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called for " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &inst )
{
	this->_name = inst.getName();
	this->_hitPoints = inst.getHitPoints();
	this->_energyPoints = inst.getEnergyPoints();
	this->_attackDamage = inst.getAttackDamage();


	std::cout << "ClapTrap copy assignment operator called for ";
	std::cout << _name << " to become " << this->_name << std::endl;

	return (*this);
}


void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage;
		std::cout << " points of damage! ";
		if (_energyPoints > 0)
			std::cout << this->_energyPoints << " energy points left!" << std::endl;
		else
			std::cout << "No energy points left!" << std::endl;
		
		//&target.takeDamage(attackDamage); //Make target take damage
		return ;
	}

	std::cout << "ClapTrap " << this->_name << " can't attack " << target;
	std::cout << ", because don't have enough Energy or Hit Points!";
	std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " got " << amount << " damage points. ";
		std::cout << this->_hitPoints << " hit points left!" << std::endl;

	}
	else
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " got " << amount << " damage points. ";
		std::cout << "No hit points left!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " is repaired";
		std::cout << ", increasing " << amount << " hit points! ";
		if (this->_energyPoints > 0)
			std::cout << this->_energyPoints << " energy points left!" << std::endl;
		else
			std::cout << "No energy points left!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired" << std::endl;
	}
}

void ClapTrap::setAttack(unsigned int	attackDamage)
{
	if (!this->_hitPoints || !this->_energyPoints)
	{
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " new attack damage set to: " \
	<< attackDamage << "." << std::endl;
	this->_attackDamage = attackDamage;
}


std::string ClapTrap::getName() const
{
	return (this->_name);
}

int			ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

int			ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

int			ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

