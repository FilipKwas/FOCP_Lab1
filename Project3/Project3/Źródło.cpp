#include <iostream>
#include <array> 
#include <cstdlib>

int main() {

	std::array<int, 10> data = { 1,4,5,6,3,8,2,9,0,7 };

	int smallest = data[0];

	for (int i = 0; i < 10; i++) {
		if (data[i] < smallest) {
			smallest = data[i];
		}
	}

	std::cout << "Smallest number is: " << smallest << std::endl;

	return 0;
}
