/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:05:08 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 11:16:53 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
  std::cout << "FragTrap " << name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << "Copy constructor: FragTrap " << name << " created!"
            << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  if (this != &other) {
    ClapTrap::operator=(other);
  }
  std::cout << "Assignation operator: FragTrap " << name << " assigned!"
            << std::endl;
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << name << " wants a high five !" << std::endl;
}
