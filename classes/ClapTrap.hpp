// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Clatrap.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/09 20:52:10 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/09 21:53:18 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &inst);
	ClapTrap& operator=(const ClapTrap &inst);
	~ClapTrap(void);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	setAttack(unsigned int 	attackDamage);

	std::string getName(void) const;
	int			getHitPoints() const;
	int			getEnergyPoints() const;
	int			getAttackDamage() const;
	

private:

	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
	
};

std::ostream &operator<<(std::ostream &out, const ClapTrap &inst);

#endif
