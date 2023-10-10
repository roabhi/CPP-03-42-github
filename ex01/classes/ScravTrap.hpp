// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScravTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/10 19:14:33 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/10 19:52:55 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScravTrap : public ClapTrap{

public:

	ScravTrap(void);
	ScravTrap(std::string name);
	ScravTrap(const ScravTrap &inst);
	~ScravTrap(void);

	ScravTrap& operator=(const ScravTrap &inst);

	void	attack(const std::string& target);
	void    guardGate();
	bool    isGuarding();
	bool    getGuardStatus() const;

private:

	bool    _guardStatus;
	
};

#endif
