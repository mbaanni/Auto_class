#include <iostream>
#include <fstream>

void	file_cpp(std::fstream &file, std::string file_name)
{
	std::string old_name("ClapTrap");
	std::fstream out;
	out.open(file_name + ".cpp", std::ios::out);
	int i;
	std::string str;
	while (std::getline(file, str))
	{
		i = 0;
		while (i>=0)
		{
			i = str.find(old_name);
			if (i >= 0)
				str.replace(i, old_name.size(), file_name);
		}
		out << str << std::endl;
	}
}

std::string	toup(std::string name)
{
	for (int i = 0; name[i];i++)
		name[i] = std::toupper(name[i]);
	return name;
}

void	file_hpp(std::fstream &file, std::string file_name)
{
	std::string old_name("ClapTrap");
	std::fstream out;
	out.open(file_name + ".hpp", std::ios::out);
	int i;
	std::string str;
	int j = 0;
	while (std::getline(file, str))
	{
		i = 0;
		if (j < 2)
		{
			i = str.find("CLAPTRAP");
			std::string capname;
			capname = toup(file_name);
			str.replace(i, old_name.size(), capname);
		}
		while (i>=0)
		{
			i = str.find(old_name);
			if (i >= 0)
				str.replace(i, old_name.size(), file_name);
		}
		out << str << std::endl;
		j++;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "enter name"<<std::endl;
		return 1;
	}
	std::string class_name = av[1];
	std::fstream fcpp("~/Desktop/Auto_class/automatecpp/ClapTrap.cpp", std::ios::in);
	std::fstream fhpp("~/Desktop/Auto_class/automatecpp/ClapTrap.hpp", std::ios::in);
	if (!fcpp)
		return 15;
	if (!fhpp)
		return 15;
	file_cpp(fcpp, class_name);
	file_hpp(fhpp, class_name);
}
