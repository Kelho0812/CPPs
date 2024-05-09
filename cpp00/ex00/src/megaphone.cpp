/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:17:55 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/01 16:20:03 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <ostream>

void	print_all_words(char **words_array, int number_of_words);
char	**to_upper_array(char **words_array, int number_of_words);
char	*to_upper_string(char *word);

int	main(int argc, char **argv)
{
	int		number_of_words;
	char	**words_array;

	number_of_words = argc - 1;
	words_array = argv + 1;
	if (number_of_words == 0)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		to_upper_array(words_array, number_of_words);
		print_all_words(words_array, number_of_words);
	}
	return (0);
}

void	print_all_words(char **words_array, int number_of_words)
{
	int	i;

	i = 0;
	while (i < number_of_words)
	{
		std::cout << words_array[i];
		i++;
	}
	std::cout << std::endl;
}

char	**to_upper_array(char **words_array, int number_of_words)
{
	int	i;

	i = 0;
	while (i < number_of_words)
	{
		to_upper_string(words_array[i]);
		i++;
	}
	return (words_array);
}

char	*to_upper_string(char *word)
{
	int i;

	i = 0;
	while (word[i] != '\0')
	{
		word[i] = std::toupper(word[i]);
		i++;
	}
	return (word);
}