#include <iostream>
#include <string>

char letter_changer(char *l) {
	int temp;
	char new_char;
	temp = (int) *l;
	temp++;
	new_char = (char)temp;
	*l = new_char;
	return 0;
}

void printer(char *l, int c) {
	for (int i = c; i > 0; i--) {
		std::cout << *l;
	}
	std::cout << " ";
}

void printer2(char *l, int c) {
	for (int i = c; i > 0; i--) {
		printer(l, i);
		letter_changer(l);
	}
}

void main() {
	int counter;
	std::cout << "Enter number: ";
	std::cin >> counter;
	
	char letter;
	std::cout << "Enter letter: ";
	std::cin >> letter;
	char *l = new char;
	*l = letter;

	for (int i = counter; i > 0; i--) {
		printer2(l, i);
		std::cout << "" << std::endl;
		*l = letter;
	}

	delete l;
	
	system("Pause");
	
}