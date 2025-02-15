/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:20:49 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/15 14:47:33 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  hit = 100;
  energy = 50;
  attackDamage = 20;
  std::cout << "ScavTrap " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  std::cout << "Copy constructor: ScavTrap " << name << " created!"
            << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
  }
  std::cout << "Assignation operator: ScavTrap " << name << " assigned!"
            << std::endl;
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << name << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  if (energy > 0) {
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
              << attackDamage << " points of damage!" << std::endl;
    energy--;
  }
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << name << " is now in Gate keeper mode !"
            << std::endl;
}
