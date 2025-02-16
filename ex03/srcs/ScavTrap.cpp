/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:20:49 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 11:39:02 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
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
  if (hit <= 0) {
    std::cout << "ScavTrap " << name << " has 0 hit points" << std::endl;
    return;
  }
  if (energy <= 0) {
    std::cout << "ScavTrap " << name << " has 0 energy points" << std::endl;
    return;
  }
  std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
            << attackDamage << " points of damage!" << std::endl;
  energy--;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << name << " is now in Gate keeper mode !"
            << std::endl;
}
