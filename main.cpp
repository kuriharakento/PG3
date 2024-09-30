#include <stdio.h>

template <typename T>
T Min(T a, T b) {
	if (a < b) {
		return a;
	}
	if(b < a) {
		return b;
	}
}

template <>
char Min<char>(char a, char b) {
	printf("数字以外は入力できません\n");
	return 0;
}

int main() {
	int intA = 10;
	int intB = 20;
	int resultInt = Min<int>(intA, intB);
	printf("Min(%d,%d), result: %d\n",intA,intB, resultInt);

	float floatA = 5.7f;
	float floatB = 3.2f;
	int resultFloat = Min<float>(floatA, floatB);
	printf("Min(%f,%f), result: %f\n",floatA,floatB, resultFloat);

	double doubleA = 5.7;
	double doubleB = 3.2;
	double resultDouble = Min<double>(doubleA, doubleB);
	printf("Min(%f,%f), result: %f\n",doubleA,doubleB, resultDouble);

	char charA = 'a';
	char charB = 'b';
	char resultChar = Min<char>(charA, charB);


	return 0;
}