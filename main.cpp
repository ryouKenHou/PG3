#include <iostream>
#include <stdio.h>

int t = 0;

int recursion(int n = 1, int salary = 100, bool first = true) {
	if (n == 0) {
		return salary;
	}
	if (first) {
		salary = 100;
		first = false;
	}
	else {
		salary = salary * 2 - 50;
	}

	t++;

	if (t * 1226 <= salary) {
		printf("\nt = %d, salary = %d/%d\n", t, salary, t * 1226);
	}

	return recursion(n - 1, salary, first);
}

int main() {

	printf("choose wage system (1: noraml, 2:recursion): ");
	int choice = 0;
	while (choice != 1 && choice != 2) {
		std::cin >> choice;
		if (choice != 1 && choice != 2) {
			printf("Invalid choice. Please enter 1 or 2: ");
		}
	}

	printf("Enter the number of hours: ");
	int hours;
	std::cin >> hours;

	if (choice == 1) {
		int salary = hours * 1226;
		printf("Salary = % d\n", salary);
	}
	else if (choice == 2) {		
		int salary = recursion(hours, 100, true);
		printf("Salary = % d\n", salary);

	}

	return 0;
}