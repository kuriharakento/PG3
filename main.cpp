#include <stdio.h>
#include <windows.h>
#include <time.h>

typedef void (*pFunc)(int, int);

//コールバック関数
void Result(int dice, int select)
{
	if (dice / 2 == 0)
	{
		printf("サイコロの結果は....丁です！！\n");
		if (select == 0)
		{
			printf("おめでとう！！当たりだよ！！\n");
		} else
		{
			printf("残念！！不正解だよ！！\n");
		}
	} else
	{
		printf("サイコロの結果は....半です！！\n");
		if (select == 1)
		{
			printf("おめでとう！！正解だよ！！\n");
		} else
		{
			printf("残念！！不正解だよ！！\n");
		}
	}
}

void Gambling(pFunc p, int second, int select)
{
	printf("抽選開始！！！！\n\n");
	//コールバック関数を呼び出す
	Sleep(second * 1000);

	srand(static_cast<unsigned int>(time(0)));
	int dice = rand() % 6;


	p(dice, select);
}

int Input()
{
	int result;
	printf("\n丁なら0、半なら1を入力してね\n");
	scanf_s("%d", &result);
	if (result != 0 && result != 1)
	{
		printf("0か1を入力してね\n");
	}
	return result;
}

int main()
{
	bool isContinue = true;
	while (isContinue)
	{
		//ユーザーが入力した値を受け取る
		int select;

		printf("丁半博打の開始だよ！！\n");
		printf("どっちが出るか予想してみよう\n");
		do
		{
			select = Input();
		} while (select != 0 && select != 1);


		//抽選開始
		Gambling(Result, 3, select);

		//終了条件
		printf("もう一度やる？やるなら1を入力してね\n");
		int continueInput;
		scanf_s("%d", &continueInput); // 修正: isContinue を continueInput に変更
		isContinue = (continueInput == 1);
	}

	return 0;
}