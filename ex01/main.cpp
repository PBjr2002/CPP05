/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-04 10:49:04 by pauberna          #+#    #+#             */
/*   Updated: 2025-02-04 10:49:04 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	person1("General", 1);
	Bureaucrat	person2("Harl", 150);
	Form	form("Execute Harl", 10, 1);

	std::cout<<person1<<std::endl;
	std::cout<<person2<<std::endl;
	std::cout<<form<<std::endl<<std::endl;

	person2.signForm(form);
	std::cout<<form<<std::endl<<std::endl;
	person1.signForm(form);
	std::cout<<form<<std::endl;
	
	return (0);
}
