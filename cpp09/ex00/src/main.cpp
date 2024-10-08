#include "../includes/BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	try
	{
		BitcoinExchange bitcoin;

		if (ac != 2)
			throw "Wrong number of arguments passed.";
		bitcoin.readData();
		bitcoin.readInput(av[1]);
		bitcoin.processInput();
	}
	catch (const char *str)
	{
		std::cerr << str << std::endl;
	}
	return (0);
}