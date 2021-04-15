#pragma once
class Stats
{
private:
	float health;
	int nbProjectile;
	float attackSpeed;

public:
	float getHealth();
	void setHealth(float health);

	int getNbProjectile();
	void setNbProjectile(int nbProjectile);

	float getAttackSpeed();
	void setAttackSpeed(float attackSpeed);


};

