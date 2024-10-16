#include <stdio.h>
#include <Windows.h>
#include <time.h>

/*-------[ 関数の宣言 ]-------*/

int Correct(int dice) {
	printf("%d !! 正解!! \n", dice);
	return 0;
}

int Miss(int dice) {
	printf("%d  不正解\n", dice);
	return 0;
}

int DiceRoll() {
	return rand() % 6 + 1;
}

void SetTimeout(int seconds) {
	Sleep(seconds * 1000);
}

int main() {
	/*-------[ 変数の宣言 ]-------*/

	//ダイスの数字をランダムで変更する
	srand(static_cast<unsigned int>(time(nullptr)));
	//入力された値を記録する
	int inputNum;
	//ダイス。1~6までの数字
	int dice = DiceRoll();
	//待機時間
	int waitTimer = 3;
	int (*result)(int);

	/*-------[ ラムダ式 ]-------*/

	// 結果判定
	auto checkResult = [&dice, &inputNum, &result]() {
		//ダイスが奇数か
		bool isDiceOddNumber = (dice % 2 == 1);
		//入力された値は奇数か
		bool isUserOddNumber = (inputNum == 1);

		if ((isDiceOddNumber && isUserOddNumber) || (!isDiceOddNumber && !isUserOddNumber)) {
			result = Correct;
		} else {
			result = Miss;
		}
	};

	/*-------[ 処理 ]-------*/

	printf("奇数なら1 偶数なら2 を入力してください\n");
	scanf_s("%d", &inputNum);

	// 3秒間の待機
	printf("結果は....\n");
	SetTimeout(waitTimer);
	printf("サイコロ : ");

	//結果
	checkResult();
	result(dice);

	return 0;
}
