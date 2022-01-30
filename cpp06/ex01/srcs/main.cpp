#include <iostream>
#include <string>
#include <stdint.h>

typedef struct
{
	int i;
	std::string str;
	char c;
	float f;
} Data;

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data test = {42, "bonjour", 'd', 45.2};

	std::cout << "Before serialisation:" << std::endl;
	std::cout << "i = " << test.i << std::endl;
	std::cout << "str = " << test.str << std::endl;
	std::cout << "c = " << test.c << std::endl;
	std::cout << "f = " << test.f << std::endl;

	std::cout << std::endl;
	uintptr_t out = serialize(&test);
	std::cout << "serial uint: " << out << std::endl;
	Data *data = deserialize(out);
	std::cout << std::endl;
	std::cout << "After deserialisation:" << std::endl;
	std::cout << "i = " << data->i << std::endl;
	std::cout << "str = " << data->str << std::endl;
	std::cout << "c = " << data->c << std::endl;
	std::cout << "f = " << data->f << std::endl;
	
}
