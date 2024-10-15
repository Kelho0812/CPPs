/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42.fr   >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:44:35 by jorteixe          #+#    #+#             */
/*   Updated: 2024/10/08 10:44:35 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T> PmergeMe<T>::PmergeMe(int argc, char **argv)
{
	parseInput(argc, argv);
	this->beginTimer();
	this->initializeSortedPair(argc, argv);
}
template <typename T> PmergeMe<T>::~PmergeMe(void)
{
}
template <typename T> PmergeMe<T>::PmergeMe(PmergeMe const &copy)
{
	*this = copy;
}
template <typename T> const PmergeMe<T> &PmergeMe<T>::operator=(PmergeMe const &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

template <typename T> void PmergeMe<T>::initializeSortedPair(int argc,
	char **argument)
{
	int	i;
	int	num1;
	int	num2;

	i = 1;
	while (i < argc)
	{
		if (i == argc - 1)
		{
			this->_temp.push_back(std::atoi(argument[i]));
			return ;
		}
		num1 = std::atoi(argument[i]);
		num2 = std::atoi(argument[i + 1]);
		if (num1 >= num2)
		{
			this->_main.push_back(num1);
			this->_temp.push_back(num2);
		}
		else
		{
			this->_main.push_back(num2);
			this->_temp.push_back(num1);
		}
		i += 2;
	}
}

template <typename T> T PmergeMe<T>::getMain(void) const
{
	return (this->_main);
}

template <typename T> T PmergeMe<T>::getTemp(void) const
{
	return (this->_temp);
}

template <typename T> void PmergeMe<T>::printContainer(T container)
{
	typename T::iterator it;
	it = container.begin();
	std::cout << "After: ";
	while (it != container.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

template <typename T> void PmergeMe<T>::beginTimer()
{
	this->_start = clock();
}

template <typename T> void PmergeMe<T>::endTimer()
{
	this->_end = clock();
}

template <typename T> void PmergeMe<T>::printTime()
{
	double	time_taken;

	time_taken = double(this->_end - this->_start) / double(CLOCKS_PER_SEC);
	std::cout << "Time to process a range of " << this->_main.size() << " elements with std::vector : " << std::fixed << time_taken << std::setprecision(6) << " us" << std::endl;
}
