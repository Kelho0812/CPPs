/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe <jorteixe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:06:16 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/09 14:06:49 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int main(int argc, char **argv)
{
	ifstream infile;
	ofstream outfile;
	string infile_name = argv[1];
	string outfile_name = infile_name + ".replace";
	string find_str = argv[2];
	string replace_str = argv[3];
	string file_contents;
	stringstream buffer;

	if (argc < 4)
	{
		cout << "The program takes three parameters in the following order: a filename ";
		cout << "and two strings, s1 and s2.";
		cout << endl;
		exit(1);
	}
	openInFile(infile, infile_name);
	openOutFile(outfile, outfile_name);
	buffer << infile.rdbuf();
	file_contents = buffer.str();
	ft_replace(file_contents, find_str, replace_str);
	outfile << file_contents;
	infile.close();
	outfile.close();
}

void openInFile(std::ifstream &infile, const string &infile_name)
{
	infile.open(infile_name.c_str());
	if (infile.fail())
	{
		cout << "Infile failed to open" << endl;
		exit(1);
	}
}

void openOutFile(std::ofstream &outfile, const string &outfile_name)
{
	outfile.open(outfile_name.c_str());
	if (outfile.fail())
	{
		std::cout << "Infile failed to open" << std::endl;
		exit(1);
	}
}

void ft_replace(string &str, string find_str, string replace_str)
{
	string::size_type found = 0;
	int pos = 0;

	while (found != string::npos)
	{
		found = str.find(find_str, pos);

		// Check if position is -1 or not
		if (found != string::npos)
		{
			string before_str;
			string substitute_str;
			string after_str;

			before_str = str.substr(0, found);
			after_str = str.substr(found + find_str.length());
			str = before_str + replace_str + after_str;
			pos = found + 1;
		}
	}
}