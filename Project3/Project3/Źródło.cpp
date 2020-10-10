#include <iostream>

int main (){
	
// x = (c - b) / a

	int total_money;
	
	std::cout << "Please introduce and ammount of money:" << std::endl;
	
	std::cin >> total_money;
	
	int banknotes = 0;

	while (total_money >= 50) {
			total_money = total_money - 50;
			banknotes = banknotes + 1;
	}

	std::cout << "Number of banknotes: " << banknotes << std::endl;


	return 0;

}
