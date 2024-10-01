/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:25:55 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/01 18:25:55 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

template <typename T> typename T::iterator easyfind(T &tParam, int intParam)
{
	typename T::iterator first = tParam.begin();
	typename T::iterator last = tParam.end();

	typename T::iterator it = std::find(first, last, intParam);

	if (it != tParam.end())
		return (it);
	else
		throw std::runtime_error("Element not found");
}