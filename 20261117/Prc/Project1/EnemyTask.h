#pragma once
class EnemyTask
{
private:
	//HP参照?
	int hp;
public:
	EnemyTask();
	~EnemyTask();
	//ダメージ管理
	void Damage(int damage);
	//HP取得
	int GetHp() const;
	//？
	bool IsAlive() const;
};
