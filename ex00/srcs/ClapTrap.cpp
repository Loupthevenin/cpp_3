/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:22:27 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/15 14:04:17 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
    : name(name), hit(10), energy(10), attackDamage(0) {
  std::cout << "Create " << name << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &other)
    : name(other.name), hit(other.hit), energy(other.energy),
      attackDamage(other.attackDamage) {
  std::cout << "Copy constructor: Create " << name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  if (this != &other) {
    name = other.name;
    hit = other.hit;
    energy = other.energy;
    attackDamage = other.attackDamage;
    std::cout << "Assignation: " << name << std::endl;
  }
  return *this;
}

ClapTrap::~ClapTrap() { std::cout << "Destroy " << name << std::endl; };

void ClapTrap::attack(const std::string &target) {
  if (energy > 0) {
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
              << attackDamage << " points of damage!" << std::endl;
    energy--;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " << name << " take " << amount << " damage"
            << std::endl;
  hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (energy > 0) {
    std::cout << "ClapTrap " << name << " Repaired " << amount
              << " hit points back" << std::endl;
    hit += amount;
    energy--;
  }
}
