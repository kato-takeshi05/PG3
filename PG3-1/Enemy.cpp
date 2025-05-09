#include "Enemy.h"
#include<stdio.h>

/// <summary>
/// メンバ関数ポインタテーブルの配列リスト
/// </summary>
void(Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Func1,
	&Enemy::Func2,
	&Enemy::Func3
};

/// <summary>
/// 敵の行動１
/// </summary>
void Enemy::Func1()
{
	printf("敵が接近した\n\n");
}
/// <summary>
/// 敵の行動２
/// </summary>
void Enemy::Func2()
{
	printf("敵のダメージ\n\n");
}
/// <summary>
/// 敵の行動３
/// </summary>
void Enemy::Func3()
{
	printf("敵が離脱した\n\n");
}

/// <summary>
/// エネミーの更新処理
/// </summary>
void Enemy::Update() {
	
	(this->*spFuncTable[0])();
	(this->*spFuncTable[1])();
	(this->*spFuncTable[2])();
}