#pragma once
#include<memory>
#include<vector>
#include"ConfigTask.h"
#include"EnemyTask.h"
//ゲームの動き
class GameTask
{
private:
	std::vector<std::shared_ptr<EnemyTask>>enemies;

	void Init();

	void Draw()const;

	void Attack();

	bool IsGameClear()const;

public:
	void Run();

};

