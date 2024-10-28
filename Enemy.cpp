#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,	//接近
	&Enemy::Shoot,		//攻撃
	&Enemy::Leave,		//離脱
};

void Enemy::Initialize()
{
	phase = Phase::Approach;
}

void Enemy::Update()
{
	(this->*spFuncTable[static_cast<size_t>(phase)])();
}

void Enemy::Approach()
{
	printf_s("接近\n");
	phase = Phase::Shoot;
}

void Enemy::Shoot()
{
	printf_s("攻撃\n");
	phase = Phase::Leave;
}

void Enemy::Leave()
{
	printf_s("離脱\n");
	isAlive = false;
	phase = Phase::Leave;
}
