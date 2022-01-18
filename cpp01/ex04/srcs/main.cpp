#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		if (ac < 4)
			std::cerr << "Error : Missing one or more arugments" << std::endl;
		if (ac > 4)
			std::cerr << "Error : Too many arugments" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1 != "")
	{
		std::ifstream ifile(filename);
		if (!ifile.is_open())
		{
			std::cerr << "Error : Filename is invalid" << std::endl;
			return (1);
		}
		std::ofstream ofile(filename.append(".replace").data());
		if (!ofile.is_open())
		{
			ifile.close();
			std::cerr << "Error: File open error" << std::endl;
			return (1);
		}
		while (1)
		{
			std::string line;
			std::getline(ifile, line);
			std::string::size_type i = 0;
			std::string::size_type j;
			while ((j = line.find(s1, i)) != std::string::npos)
			{
				line.erase(j, s1.length());
				line.insert(j, s2);
				i = j + s2.length();
			}
			ofile << line;
			if (ifile.eof())
				break;
			ofile << std::endl;
		}
		ifile.close();
		ofile.close();
		return (0);
	}
}