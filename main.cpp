#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <functional>

class Enemy {
public:
	void approachingPhace() {
		printf("Enemy is approaching!\n");
	}

	void shootingPhace() {
		printf("Enemy is shooting!\n");
	}

	void leavingPhace() {
		printf("Enemy is leaving!\n");
	}

	void (Enemy::*PhaceTable[3])() = { &Enemy::approachingPhace, &Enemy::shootingPhace, &Enemy::leavingPhace };

	void update() {
		(this->*PhaceTable[currentPhaceIndex_])();		
		currentPhaceIndex_ = (currentPhaceIndex_ + 1) % 3;
	}

private:
	size_t currentPhaceIndex_ = 0;
};

int main() {

	Enemy enemy;

	enemy.update(); // Enemy is approaching!
	enemy.update(); // Enemy is shooting!
	enemy.update(); // Enemy is leaving!


	return 0;
}