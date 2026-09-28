#include <stdio.h>
#include <iostream>
int main() {
	system("chcp 65001 > nul");

	char str[] = "天気はいいですね";

	printf("%s\n", str);
	
	return 0;
}