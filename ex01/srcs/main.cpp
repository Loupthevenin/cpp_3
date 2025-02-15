/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:51:04 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/15 14:50:57 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include <iostream>

int main(void) {
  std::cout << "----CLAPTRAP----" << std::endl;
  ClapTrap harry("Harry Potter");
  harry.attack("Voldemort");
  harry.takeDamage(3);
  harry.beRepaired(5);

  std::cout << "----ScavTrap----" << std::endl;
  ScavTrap ron("Ron");
  ron.attack("Malfoy");
  ron.takeDamage(20);
  ron.beRepaired(15);
  ron.guardGate();

  return 0;
}
