#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>

int main(int argc, char** argv)
{
	  std::string   str;
    double      nb;

    if (argc == 2)
    {
        str = argv[1];
        if (!std::isdigit(str[0]) && str.length() == 1)
            nb = static_cast<int>(str[0]);
        else
            nb = std::atof(argv[1]);
//------------char
        if (!isdigit(str[0]) && str.length() >= 3)
            std::cout << "char: impossible" << std::endl;
        else if (nb >= 32 && nb <= 126)
            std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
//------------int
        if (!std::isdigit(str[0]) && str.length() >= 3) 
            std::cout << "int: impossible" << std::endl;
        else if (nb > std::numeric_limits<int>::max() ||
             nb < std::numeric_limits<int>::min())
           std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(nb) << std::endl;
//-----------float
        std::cout << "float: " << static_cast<float>(nb);
        if (nb - static_cast<int>(nb) == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
//-----------double
        std::cout << "double: " << static_cast<double>(nb);
        if (nb - static_cast<int>(nb) == 0)
            std::cout << ".0";
        std::cout << std::endl;
         return (0);
    }
    std::cout << "Error: Enter the number you want to convert as an argument" << std::endl;
    return (-1);
}