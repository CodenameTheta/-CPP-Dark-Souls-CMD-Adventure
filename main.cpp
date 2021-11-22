#include <iostream>
#include <string>
#include <windows.h>
#include "enemies.h"
#include "sound&music.h"
#define LOG(x) std::cout << x << std::endl

using namespace std;

class CharacterCreation{
public:

    std::string heroType;
    std::string heroName;
    double heroAttributes[4];

    double knightHealth = 150;
    double knightStamina = 90;
    double knightESP = 30;
    double knightPower = 100;

    double warriorHealth = 100;
    double warriorStamina = 120;
    double warriorESP = 10;
    double warriorPower = 80;

public:

    void createYourHero(){

        bool titleScreenMusic = PlaySound("titleScreen.wav" , NULL, SND_ASYNC);
        LOG("\nwelcome chosen hero of the Goddesses! Please tell me your name: \n");
        getline(cin, heroName);
        std::cout << "\n" << heroName << "? That name speaks of pure strength...0_0\n" << std::endl;


    }

    void playerSelection(){

            std::cout << "Hero " << CharacterCreation::heroName << ", are you a knight or a warrior?\n" << std::endl;
            getline (cin, heroType);
            if(heroType == "knight"){
                heroCreated();
                LOG("your honor will make your enemies cowar in fear..");
                heroAttributes[0] = knightHealth;
                heroAttributes[1] = knightESP;
                heroAttributes[2] = knightStamina;
                heroAttributes[3] = knightPower;
            }else if(heroType == "warrior"){
                heroCreated();
                LOG("your strength alone will have your enemies scatter..");
                heroAttributes[0] = warriorHealth;
                heroAttributes[1] = warriorPower;
                heroAttributes[2] = warriorStamina;
                heroAttributes[3] = warriorESP;
            }else{
                LOG("\ni didn't understand your response, please type it again..\n");
                playerSelection();
            }
    }

};

class Level1 : public CharacterCreation{
public:


};




int main()
{

    CharacterCreation CreatePlayer;

    CreatePlayer.createYourHero();
    CreatePlayer.playerSelection();

    return 0;
}
