/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:51:59 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/26 15:11:46 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:51:59 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/26 14:51:59 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#

#include "../includes/Serializer.hpp"

int main(void)
{
	uintptr_t raw;
	Data *data = new Data;

	data->name = "John";
	data->age = 42;

	raw = Serializer::serialize(data);
	std::cout << "Serialized data: " << raw << std::endl;
	data = Serializer::deserialize(raw);
	std::cout << "Deserialized data: " << data->name << " " << data->age << std::endl;

	return 0;
}