#include <iostream>
int main() {
	char grade;

	std::cout << "What grade do you want in programming? ";
	std::cin >> grade;

	switch(grade) {
	case 'A':
		std::cout << "Outstanding!";
		break;
	case 'B':
		std::cout << "Very good!";
		break;
	case 'C':
		std::cout << "Good";
		break;
	case 'D':
		std::cout << "Some flaws";
		break;
	case 'E':
		std::cout << "Not very good...";
		break;
	case 'F':
		std::cout << "Fail";
		break;
	default:
		std::cout << "That is not a grade!";
	}
}
