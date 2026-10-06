#pragma once
class Character
{
protected:
	int hp;
	int  attck;
	int defense;
	int evasion;
public:
	Character();

	//ステータス表示
	void ShowStatus();
	//攻撃
	void Attack(Character& target);
	//回復
	void Recover();
	//生存判定
	bool IsAlivee();
	//HP取得
	int GetHp();
};

