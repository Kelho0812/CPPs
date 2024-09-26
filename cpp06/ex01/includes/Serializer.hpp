/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:52:46 by jorteixe          #+#    #+#             */
/*   Updated: 2024/09/26 14:52:46 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

struct Data
{
	std::string name;
	int age;
};


class Serializer
{
  private:
	Serializer();
	~Serializer();
	Serializer(const Serializer &copySerializer);
	Serializer const &operator=(Serializer const &copySerializer);
  public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};