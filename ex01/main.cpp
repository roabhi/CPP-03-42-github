// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2023/10/10 19:09:30 by rabril-h          #+#    #+#             //
//   Updated: 2023/10/10 20:20:20 by rabril-h         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "./classes/ClapTrap.hpp"
#include "./classes/ScravTrap.hpp"

int main(void)
{
	ScravTrap scr1;
	ScravTrap scr2("pepito");

	scr1.getGuardStatus();
	scr2.guardGate();
	scr2.getGuardStatus();
	scr2.attack("fulanito");
	scr1.attack("fulanito");
	scr1.attack("menganito");
	scr1.setAttack(100);
	scr1.attack("fulanito");
	scr1.takeDamage(10);
	scr1.attack("faemino");
	scr2.attack("cansado");
	
	return (0);
}
