#include <iostream>

template <typename T>
T getNum(){
    T num;
	num = static_cast<T>(30.123456789);
    return num;
}

int main() {
	int intNum = getNum<int>();
	float floatNum = getNum<float>();
	double doubleNum = getNum<double>();

	printf("Integer: %d\n", intNum);
	printf("Float: %.9f\n", floatNum);
	printf("Double: %.9lf\n", doubleNum);

    return 0;
}