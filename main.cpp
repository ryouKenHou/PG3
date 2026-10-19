#include <iostream>

int recursion(int n = 1, int salary = 100, bool first = true, int t = 0, int sum1 = 0, int sum2 = 0) {
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

	sum1 += salary;
	sum2 += 1226;

	printf("|| Hour %3d:|recursive Salary: %5d, earned: %5d \t| Normal Salary: 1226 , earned: %5d\n", t, salary, sum1, sum2);

	return recursion(n - 1, salary, first, t, sum1, sum2);
}

int main() {
	printf("Enter the number of hours: ");
	int hours;
	std::cin >> hours;

	int salary = recursion(hours, 100, true);
	printf("Salary = % d\n", salary);

	return 0;
}