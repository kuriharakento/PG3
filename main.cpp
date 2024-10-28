#include <stdio.h>

#include "Enemy.h"

int main()
{
	/*-------[ 変数の宣言 ]-------*/

	//敵クラス
	Enemy enemy;
	enemy.Initialize();

	while (enemy.IsAlive())
	{
		enemy.Update();
	}

	return 0;
}
