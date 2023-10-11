// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScravTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/10 19:14:33 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/11 15:40:12 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &inst);
	~ScavTrap(void);

	ScavTrap& operator=(const ScavTrap &inst);

	void	attack(const std::string& target);
	void    guardGate();
	bool    isGuarding();
	bool    getGuardStatus() const;

private:

	bool    _guardStatus;
	
};

#endif
