#include <stdio.h>
#include <windows.h>
#include <time.h>

typedef void (*pFunc)(int *);

//コールバック関数
void Result(int *dice)
{
	if(dice / 2 == 0)
	{
		printf("偶数です\n");
	}
	else
	{
		printf("奇数です\n");
	}
}

void SetTimeout(pFunc p,int second)
{
	//コールバック関数を呼び出す
	Sleep(second*1000);

	srand(static_cast<unsigned int>(time(0)));
	int dice = rand() % 6;


	p(&dice);
}

int main()
{
	
	
	return 0;
}