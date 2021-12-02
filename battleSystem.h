#pragma once
#include "enemies.h"
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>


class lvl2HallowBattleSystem : lvl2Hallow {
public:
	int turn = rand() % 2;
	if(turn <= 1) {
		int *attackValue = &hallowAttack();
		hallowAttack();

		std::cout << "hallow attacks! [damage taken]: " << &attackValue;

	}
	else {
		std::cout << "The hero attacks..";
	}

};