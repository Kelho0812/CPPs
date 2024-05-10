/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorteixe  <jorteixe@student.42porto.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:44:05 by jorteixe          #+#    #+#             */
/*   Updated: 2024/05/10 14:45:17 by jorteixe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::ifstream;
using std::ofstream;

void openInFile(ifstream &infile, const string &infile_name);
void openOutFile(ofstream &outfile, const string &outfile_name);
void fun(string s1, string s2);
void ft_replace(string &str, string find_str, string replace_str);