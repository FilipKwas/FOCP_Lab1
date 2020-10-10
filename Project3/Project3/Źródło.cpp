#include <iostream>
#include <array> 

int main () {
	
	std::array<int, 10> data;

	for (int i = 0; i < 10; i++) {
		data[i] = i;
	}

	for (int i = 0; i < 10; i++) {
	std::cout << data[i] << std::endl;

	}
	
	return 0;
}
