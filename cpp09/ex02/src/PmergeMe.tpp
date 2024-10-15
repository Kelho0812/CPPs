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

template <typename T> void PmergeMe<T>::recursiveMergeSort(int left, int right)
{
	int	mid;

	if (left >= right)
		return ;
	mid = left + (right - left) / 2;
	recursiveMergeSort(left, mid);
	recursiveMergeSort(mid + 1, right);
	mergeSortedSections(left, mid, right);
}
template <typename Container> void PmergeMe<Container>::mergeSortedSections(int left, int mid, int right)
{
	Container LMain(this->_main.begin() + left, this->_main.begin() + mid + 1);
	Container RMain(this->_main.begin() + mid + 1, this->_main.begin() + right + 1);
	Container LPend(this->_temp.begin() + left, this->_temp.begin() + mid + 1);
	Container RPend(this->_temp.begin() + mid + 1, this->_temp.begin() + right + 1);

	typename Container::iterator itBeginMain = this->_main.begin() + left;
	typename Container::iterator itBeginPend = this->_temp.begin() + left;
	typename Container::iterator itLMain = LMain.begin();
	typename Container::iterator itLPend = LPend.begin();
	typename Container::iterator itRMain = RMain.begin();
	typename Container::iterator itRPend = RPend.begin();

	while (itLMain != LMain.end() && itRMain != RMain.end()
		&& itLPend != LPend.end() && itRPend != RPend.end())
	{
		if (*itLMain <= *itRMain)
		{
			*itBeginMain = *itLMain;
			*itBeginPend = *itLPend;
			++itLMain;
			++itLPend;
		}
		else
		{
			*itBeginMain = *itRMain;
			*itBeginPend = *itRPend;
			++itRMain;
			++itRPend;
		}
		++itBeginMain;
		++itBeginPend;
	}

	while (itLMain != LMain.end() && itLPend != LPend.end())
	{
		*itBeginMain = *itLMain;
		*itBeginPend = *itLPend;
		++itLMain;
		++itLPend;
		++itBeginMain;
		++itBeginPend;
	}

	while (itRMain != RMain.end() && itRPend != RPend.end())
	{
		*itBeginMain = *itRMain;
		*itBeginPend = *itRPend;
		++itRMain;
		++itRPend;
		++itBeginMain;
		++itBeginPend;
	}
}