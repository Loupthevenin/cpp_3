/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:51:04 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 11:56:07 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include <iostream>

int main(void) {
  int i;
  std::cout << "----CLAPTRAP----" << std::endl;
  ClapTrap harry("Harry Potter");
  harry.attack("Voldemort");
  harry.takeDamage(3);
  harry.beRepaired(5);

  std::cout << "----ScavTrap----" << std::endl;
  ScavTrap ron("Ron");
  i = 0;
  while (i < 50) {
    ron.attack("Malfoy");
    i++;
  }
  ron.takeDamage(20);
  ron.attack("Malfoy");
  ron.beRepaired(15);
  ron.guardGate();

  std::cout << "----FragTrap----" << std::endl;
  FragTrap hermione("Hermione");
  i = 0;
  while (i < 100) {
    hermione.attack("Belatrix");
    i++;
  }
  hermione.attack("Belatrix");
  hermione.beRepaired(5);
  hermione.highFivesGuys();
  hermione.takeDamage(1000);
  hermione.attack("Belatrix");
  return 0;
}
