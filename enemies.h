#ifndef ENEMIES_H_INCLUDED
#define ENEMIES_H_INCLUDED
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>




class lvl2Hallow {
public:
	int hallowHealth = 50;
	int hallowStamina = 70;

	int hallowAttack() {
		return rand() % 10;
	}

};


class lvl4Hallow {
public:
	int hallowHealth = 80;
	int hallowStamina = 100;

	int hallowAttack() {
		return rand() % 20;
	}

};

class lvl7Hallow {
public:
	int hallowHealth = 120;
	int hallowStamina = 130;

	int hallowAttack() {
		return rand() % 30;
	}

};

class lvl9Evangilist {
public:
	int EvangilistHealth = 190;
	int EvangilistStamina = 180;
	int EvangilistESP = 90;

	int evangilistAttackPhysical() {
		return rand() % 50;
	}

	int evangilistAttackMagic() {
		return rand() % 70;
	}

};

class lvl12Evangilist {
public:
	int EvangilistHealth = 210;
	int EvangilistStamina = 200;
	int EvangilistESP = 100;

	int evangilistAttackPhysical() {
		return rand() % 58;
	}

	int evangilistAttackMagic() {
		return rand() % 90;
	}

};

class lvl15Evangilist {
public:
	int EvangilistHealth = 230;
	int EvangilistStamina = 220;
	int EvangilistESP = 150;

	int evangilistAttackPhysical() {
		return rand() % 70;
	}

	int evangilistAttackMagic() {
		return rand() % 90;
	}

};

class lvl17Wraith {
public:
	int wraithHealth = 250;
	int wraithStamina = 250;
	int wraithESP = 160;

	int wraithAttackPhysical() {
		return rand() % 100;
	}

	int wraithAttackMagic() {
		return rand() % 120;
	}

};

lvl2Hallow lvl2hallow;
lvl4Hallow lvl4hallow;
lvl7Hallow lvl7hallow;
lvl9Evangilist lvl9evangilist;
lvl12Evangilist lvl12evangilist;
lvl15Evangilist lvl15evangilist;
lvl17Wraith lvl17wraith;






#endif // ENEMIES_H_INCL
