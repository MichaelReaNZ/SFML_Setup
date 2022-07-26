#pragma once
#include <string>
#include <iostream>
using namespace std;

//Enemy class
enum EnemyType
{
	Warewolf,
	Zombie,
	Vampire,
};


class Enemy
{
protected:
	EnemyType type;
	int health;
	int attack;
	string name;


	Enemy(EnemyType type, int health, int attack, string name)
	{
		this->type = type;
		this->health = health;
		this->attack = attack;
		this->name = name;
	}

	virtual void Attack() {
		cout << "Enemy " << name << " attacks!" << endl;
	}

	virtual void Move() {
		cout << "Enemy " << name << " moves!" << endl;
	}

	virtual void Heal() {
		cout << "Enemy " << name << " heals!" << endl;
	}


};