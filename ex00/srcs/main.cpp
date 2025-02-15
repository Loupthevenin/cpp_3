/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:51:04 by ltheveni          #+#    #+#             */
/*   Updated: 2025/02/15 13:56:15 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void) {
  ClapTrap anakin("Anakin");

  anakin.attack("Obi Wan");
  anakin.attack("Obi Wan");
  anakin.attack("Obi Wan");
  anakin.attack("Obi Wan");
  anakin.attack("Obi Wan");
  anakin.attack("Obi Wan");
  anakin.attack("Obi Wan");
  anakin.attack("Obi Wan");
  anakin.attack("Obi Wan");
  anakin.attack("Obi Wan");
  anakin.beRepaired(50);
  anakin.attack("Obi Wan");
  anakin.takeDamage(20);
  anakin.takeDamage(100);
  return 0;
}
