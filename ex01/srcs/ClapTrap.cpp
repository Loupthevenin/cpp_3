/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:22:27 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 11:44:08 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
    : name(name), hit(10), energy(10), attackDamage(0) {
  std::cout << "ClapTrap " << name << " created!" << std::endl;
};

ClapTrap::ClapTrap(std::string name, int hit, int energy, int attackDamage)
    : name(name), hit(hit), energy(energy), attackDamage(attackDamage) {
  std::cout << "ClapTrap " << name << " created!" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &other)
    : name(other.name), hit(other.hit), energy(other.energy),
      attackDamage(other.attackDamage) {
  std::cout << "Copy constructor: ClapTrap " << name << " created!"
            << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
  if (this != &other) {
    name = other.name;
    hit = other.hit;
    energy = other.energy;
    attackDamage = other.attackDamage;
    std::cout << "Assignation operator: ClapTrap " << name << " assigned!"
              << std::endl;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
};

void ClapTrap::attack(const std::string &target) {
  if (hit <= 0) {
    std::cout << "ClapTrap " << name << " has 0 hit points" << std::endl;
    return;
  }
  if (energy <= 0) {
    std::cout << "ClapTrap " << name << " has 0 energy points" << std::endl;
    return;
  }
  std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
            << attackDamage << " points of damage!" << std::endl;
  energy--;
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " << name << " take " << amount << " damage"
            << std::endl;
  hit -= amount;
  if (hit < 0)
    hit = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (energy > 0) {
    std::cout << "ClapTrap " << name << " Repaired " << amount
              << " hit points back" << std::endl;
    hit += amount;
    energy--;
  } else {
    std::cout << "ClapTrap " << name << " has 0 energy points" << std::endl;
  }
}
