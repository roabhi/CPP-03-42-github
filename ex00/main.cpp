// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/09 20:48:28 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/09 22:31:13 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "./classes/ClapTrap.hpp"

int main(void)
{
	ClapTrap ct1;
	ClapTrap ct2("Jack");

	ct1.attack("void");
	ct1.takeDamage(10);
	ct1.setAttack(5);
	ct2.setAttack(5);
	ct1.beRepaired(40);
	ct2.attack("void");
	ct2.attack("void");
	ct2.attack("mierder");
	ct2.attack("mierder");
	ct2.attack("void");

	ct2.attack("void");
	ct2.attack("void");
	ct2.attack("mierder");
	ct2.attack("mierder");
	ct2.attack("void");

	ct1.attack("void");
	ct1.attack("void");
	ct1.attack("mierder");
	ct2.attack("mierder");
	ct1.attack("void");
	ct1.attack("void");
	ct2.attack("void");
	ct1.attack("mierder");
	ct1.attack("void");
	ct1.attack("void");
	ct1.attack("mierder");

	ct1.beRepaired(40);

	ct1.attack("mierder");
	ct1.attack("void");
	ct1.attack("void");

	ct1.beRepaired(40);
	ct1.takeDamage(30);
	

	return (0);
}
