#include <iostream>

template <typename T>
T Min(T a, T b){
   if (a > b) {
	   return b;
   }
   return a;
}

int main() {
	int intNum = Min<int>(10, 20);
	float floatNum = Min<float>(10.5f, 20.5f);
	double doubleNum = Min<double>(10.123456789, 20.123456789);

	printf("Integer: %d\n", intNum);
	printf("Float: %.9f\n", floatNum);
	printf("Double: %.9lf\n", doubleNum);

    return 0;
}