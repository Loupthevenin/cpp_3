/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:22:39 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/16 10:32:42 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap {
protected:
  std::string name;
  int hit;
  int energy;
  int attackDamage;

public:
  ClapTrap(std::string name);
  ClapTrap(std::string name, int hit, int energy, int attackDamage);
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &other);
  virtual ~ClapTrap();

  virtual void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};
