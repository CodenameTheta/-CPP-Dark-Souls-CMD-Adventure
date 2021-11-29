#include <iostream>
#include <string>
#include <windows.h>
#include "enemies.h"
#include "soundsandmusic.h"
#define LOG(x) std::cout << x << std::endl
#define INPUT(x) getline(cin, x)
using namespace std;

int main()
{
    string heroName;
    string heroType;
    double heroAttributes[4];

    double knightHealth = 150;
    double knightStamina = 90;
    double knightESP = 30;
    double knightPower = 100;

    double warriorHealth = 100;
    double warriorStamina = 120;
    double warriorESP = 10;
    double warriorPower = 80;

    bool titleScreenMusic = PlaySound(("C:\\Users\\pvazquez\\Documents\\DarkSoulsCMDAdventure\\DarkSoulsCMDAdventure\\titleScreen.wav"), NULL, SND_ASYNC);
    Sleep(1000);
    LOG("\nwelcome chosen hero of the Goddesses! Please tell me your name: \n");
    getline(cin, heroName);
    Sleep(1000);
    std::cout << "\n" << heroName << "? That name speaks of pure strength...0_0\n" << std::endl;
    Sleep(1000);

    bool firstLoop = true;
    std::cout << "Hero " << heroName << ", are you a knight or a warrior?\n" << std::endl;
    do {
        getline(cin, heroType);
        if (heroType == "knight") {
            Sleep(1000);
            heroCreated();
            LOG("your honor will make your enemies cowar in fear..");
            heroAttributes[0] = knightHealth;
            heroAttributes[1] = knightESP;
            heroAttributes[2] = knightStamina;
            heroAttributes[3] = knightPower;
            break;
        }
        else if (heroType == "warrior") {
            Sleep(1000);
            heroCreated();
            LOG("your strength alone will have your enemies scatter..");
            heroAttributes[0] = warriorHealth;
            heroAttributes[1] = warriorPower;
            heroAttributes[2] = warriorStamina;
            heroAttributes[3] = warriorESP;
            break;
            
        }
        else {
            LOG("\ni didn't understand your response, please type it again..\n");

        }
    } while (heroName != "knight" || "warrior");

    Sleep(1000);
    cout << "Hero " << heroName << ", I must warn you that your path to victory will be filled with pain, hardship and misery..\n" << endl;
    Sleep(1000);
    cout << "There are a few paths to take, which one will you choose?..\n" << endl;
    Sleep(1000);
    cout << "[1] The blood swamps\n[2] The forest of sacrifices\n[3] road to Death Valley" << endl;
    Sleep(1000);
    LOG("what path will you choose?..");
    string firstPathChoice;
    getline(cin, firstPathChoice);
    if (firstPathChoice == "1" || "the blood swamps" || "The blood swamps") {
        bool bloodSwampsAmbientSound = PlaySound("C:\\Users\\pvazquez\\Documents\\DarkSoulsCMDAdventure\\DarkSoulsCMDAdventure\\ambientSound1.wav", NULL, SND_ASYNC);
        Sleep(2000);
        LOG("You tread through the rough patches of the blood swamps..\n");
        Sleep(2000);
        cout << heroName << " doesn't see anything but senses that something is watching him..\n " << endl;
        Sleep(2000);
        LOG("If you keep moving in the direction you are heading, there might be trouble ahead..\n");
        Sleep(2000);
        cout << "[hero " << heroName << ", what will you do next?..]\n" << endl;
        string test;
        cin >> test;
    }

    return 0;
}
