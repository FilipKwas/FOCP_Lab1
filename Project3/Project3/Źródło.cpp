#include <iostream>

int main (){

	float a;
	float b;
	float c;

	std::cout << "Please introduce a value for a:" << std::endl;

	std::cin >> a;

	std::cout << "Please introduce a value for b:" << std::endl;

	std::cin >> b;

	std::cout << "Please introduce a value for c:" << std::endl;

	std::cin >> c;

	float x = (c - b) / a;

	std::cout << "The value of x is: " << x << std::endl;

	return 0;

}
