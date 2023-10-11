// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/11 15:45:53 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/11 16:27:38 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "./classes/ClapTrap.hpp"
#include "./classes/ScavTrap.hpp"
#include "./classes/FragTrap.hpp"

int main(void)
{
	ClapTrap cp;
	ScavTrap sc("faemino");
	FragTrap fr("cansado");

	cp.attack("A");
	sc.attack("B");
	sc.getGuardStatus();
	sc.guardGate();
	fr.attack("A");
	fr.highFiveGuys();

	return (0);
}

