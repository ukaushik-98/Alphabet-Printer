#include <iostream>
#include <string>

void ascii_changer(char* letter) {
	int num_letter;
	num_letter = int(*letter);
	num_letter += 1;
	*letter = char(num_letter);
}

void printer(char* letter, int n) {
	for (int i = n+1; i--; i >= 0) {
		for (int i = n+1; i--; i >= 0) {
			std::cout << *letter;
		}
		ascii_changer(letter);
	}
}

int main() {
	int n;
	std::cout << "Please enter number of repetitions: ";
	std::cin >> n;

	char first;
	std::cout << "Please enter first character: ";
	std::cin >> first;

	char* letter = new char;
	*letter = first;

	for (int i = n; i--; i >= 0) {
		printer(letter, i);
		std::cout << "" << std::endl;
	}

	system("Pause");
}