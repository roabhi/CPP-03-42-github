// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/09 20:48:28 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/09 22:05:58 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "./classes/ClapTrap.hpp"

int main(void)
{
	ClapTrap test1;
	ClapTrap test2("Joselete");

	test1.attack("hola");
	test1.takeDamage(10);
	test1.setAttack(5);
	test2.setAttack(5);
	test1.beRepaired(40);
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");
	test2.attack("adeu");

	return (0);
}
