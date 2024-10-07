#include <stdio.h>

int Recursive(int n, int wage) {
	//時給を返す
	if (n == 1) {
		return wage;
	}
	//前の時間の時給を計算し、それを基に次の時給を計算
	return Recursive(n - 1, wage * 2 - 50);
}

int main()
{
	//一般的な時給
	int hourlyWage = 1072;
	//再帰的な時給
	int recursiveWage = 100;

	//一般的な資金体系
	int generalWageStructure;
	//再帰的な資金体系
	int recursiveWageStructure;
	
	for(int hour = 1; hour <= 10;hour++)
	{
		printf("%d時間目\n", hour);
		//一般的な資金体系の計算
		generalWageStructure = hourlyWage * hour;
		printf("一般的な資金体系：%d\n", generalWageStructure);
		//再帰的な資金体系の計算
		recursiveWageStructure = Recursive(hour, recursiveWage);
		printf("再帰的な資金体系：%d\n\n", recursiveWageStructure);
	}
	

	return 0;
}