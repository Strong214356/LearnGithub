#include <iostream>
#include <ctime>

int main() {
	int nbJ1 = rand()%100+1, nbJ2;
	do {
		std::cout << "Geuss the number : "; std::cin >> nbJ2;
		if(nbJ2 == nbJ1) break;
		else if(nbJ1 > nbJ2) std::cout << "More" << std::endl;
		else std::cout << "Less" << std::endl;
	} while(1);
	std::cout << "You Won" << std::endl;
	return 0;
}
