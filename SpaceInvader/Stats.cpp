#include "Stats.h"

float Stats::getHealth()
{
	return this->health;
}

void Stats::setHealth(float health)
{
	this->health = health;
}

int Stats::getNbProjectile()
{
	return this->nbProjectile;
}

void Stats::setNbProjectile(int nbProjectile)
{
	this->nbProjectile = nbProjectile;
}

float Stats::getAttackSpeed()
{
	return this->attackSpeed;
}

void Stats::setAttackSpeed(float attackSpeed)
{
	this->attackSpeed = attackSpeed;
}
