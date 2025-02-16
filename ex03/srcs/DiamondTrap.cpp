/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 14:12:32 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 15:11:54 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name", 100, 50, 30), FragTrap(name),
      ScavTrap(name), name(name) {
  std::cout << "DiamondTrap " << name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.name) {
  std::cout << "Copy constructor: DiamondTrap " << name << " created!"
            << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    name = other.name;
  }
  std::cout << "Assignation operator: DiamondTrap " << name << " assigned!"
            << std::endl;
  return *this;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap " << name << " destroyed!" << std::endl;
}

void DiamondTrap::whoamI() {
  std::cout << "DiamondTrap name: " << name
            << ", ClapTrap name: " << ClapTrap::name << std::endl;
}
