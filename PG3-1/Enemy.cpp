#include "Enemy.h"
#include<stdio.h>

void(Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Func1,
	&Enemy::Func2,
	&Enemy::Func3
};


void Enemy::Func1()
{
	printf("敵が接近した");
}

void Enemy::Func2()
{
	printf("敵のダメージ");
}

void Enemy::Func3()
{
	printf("敵が離脱した");
}

void Enemy::Update() {

	//現在のフェーズをメンバ関数テーブルで実行

	//行列を更新
}