#include <iostream>
#include <vector>
#include <stdlib.h>
#include <fstream>

// It's my first ever game!

int main() {
    std::cout << " _____                    _____ _          _____         \n";
    std::cout << "|_   _|___ ___ ___ _ _   |_   _| |_ ___   |   __|___ _ _ \n";
    std::cout << "  | | | -_|  _|  _| | |    | | |   | -_|  |   __| . |_'_|\n";
    std::cout << "  |_| |___|_| |_| |_  |    |_| |_|_|___|  |__|  |___|_,_|\n";
    std::cout << "                  |___|                                  \n";
    std::cout << "By: Nahyree\n\n";
    std::ifstream f("NahyreeAchievement.txt");
    if (f.is_open())
        std::cout << f.rdbuf() << "\n";
    std::ifstream g("SmartbuttAchievement.txt");
    if (g.is_open())
        std::cout << g.rdbuf() << "\n";
    std::ifstream h("LuckyShotAchievement.txt");
    if (h.is_open())
        std::cout << h.rdbuf() << "\n";
    std::ifstream i("WinnerAchievement.txt");
    if (i.is_open())
        std::cout << i.rdbuf() << "\n";
    std::cout << "Input your name: ";
 
    std::string player_name;
    std::cin >> player_name;
    std::cout << "\nIs " << player_name << " your name?: ";

    std::string yn;
    std::cin >> yn;
    std::string yes = "yes";

    //if player answers anything but "yes" the program will continue asking for the players name until they confirm it is correct.

    while (yn != yes) { 
            std::cout << "\nInput your name: ";
            std::cin >> player_name;
            std::cout << "\nIs " << player_name << " your name?: ";
            std::cin >> yn;
        }
    if (player_name == "Nahyree" || player_name == "nahyree") {
        std::cout << "\nWoah your name is Nahyree too? That's so cool!\n";
        std::ofstream myfile;
        myfile.open("NahyreeAchievement.txt");
        myfile << "Copycat Achievement Get!\n";
        myfile.close();
    }

    std::cout << "\nGreat! Nice to meet you " << player_name << ". It's time for an adventure!\n\n";
    std::cout << "Terry is a young fox from the Briar Woods, a dense forest located close to the human town of Marehees.\n\n";
    std::cout << "Terry enjoys his life, spending plenty of time with his Fiancee Ophelia, at least, he did.\n\n";
    std::cout << "Ophelia has been captured by a group of animal trafficers, can you, " << player_name << ", help Terry save her before she's lost forever?\n\n";
    std::cout << "Will you follow the trail [1] or take a shortcut through the forest [2]?: ";

    //if the player answers anything but 1 or 2 the program will loop until 1 or 2 is input.

    int path = 0;
    std::cin >> path;
    while (path != 1 && path != 2) {
        std::cout << "\nWill you follow the trail [1] or take a shortcut through the forest [2]?: ";
        std::cin >> path;
    }
   
    // based on the path the player takes they will encounter different things

    std::string location;
    std::string encounter;
    if (path == 1) {
        location = "on the trail";
        encounter = "a human guard";
    }
    else {
        location = "through the forest";
        encounter = "a tricky spider";
    }
    std::cout << "\n";
    std::cout << "You decide to travel " << location << "!\n\n";
    std::cout << "After walking for a while you encounter " << encounter << "!\n\n";

    if (encounter == "a tricky spider") {
        std::cout << "Hey there Terry and " << player_name << ", if you want to go this way you'll have to answer my riddle\n";
        std::cout << "\nWhat is so fragile that saying it's name breaks it?: ";
        std::string answer;
        std::cin >> answer;
        if (answer == "what" || answer == "What") {
            std::ofstream myfile;
            myfile.open("SmartbuttAchievement.txt");
            myfile << "Smartbutt Achievement Get!\n";
            myfile.close();
        }

        while (answer != "silence" && answer != "Silence") {
            std::cout << "\nWhat is so fragile that saying it's name breaks it?: ";
            std::cin >> answer;
    }
        std::cout << "\nYou got it! Good job " << player_name << "! You and Terry may pass.\n\n";
     }
    else {
        std::cout << "The guard is aloof at his post.\n\n";
        std::cout << "Will you try to sneak around [1] or have Terry hit him with a surprise attack [2]?: ";

        int guardchoice;
        std::cin >> guardchoice;
        while (guardchoice != 1 && guardchoice != 2) {
            std::cout << "\nWill you try to sneak around [1] or have Terry him with a surprise attack [2]?: ";
            std::cin >> guardchoice;
        }
        if (guardchoice == 1) {
            std::cout << "\nYou successfully snuck past the guard!\n\n";
        }
        else {
            srand(time(NULL));
            int success = rand() % 10 + 1;
            if (success > 9) {
                std::cout << "\nTerry successfully attacked the guard and knocked him unconscious!!!\n\n";
                std::ofstream myfile;
                myfile.open("LuckyShotAchievement.txt");
                myfile << "Lucky Shot Achievement Get!\n";
                myfile.close();
            }
            else {
                std::cout << "\nTerry's small body was too weak to knock out the guard. You were captured. Game Over!\n\n";
                exit(0); {
                }
            }
        }
    }
    std::cout << "Having overcome the obstacle before you, you find yourself on top of a hill in the middle of the plains\n\n";
    std::cout << "Looking down you see a wagon, and upon closer inspection, it's the traficcers! Ophelia must be with them!\n\n";
    std::cout << "You do some thinking and conclude you have two choices\n\n";
    std::cout << "Will you let yourself be caught on purpose [1] or create a distraction and free Ophelia in the confusion [2]?: ";

    int finalchoice;
    std::cin >> finalchoice;
    while (finalchoice != 1 && finalchoice != 2) {
        std::cout << "\nWill you let Terry be caught on purpose [1] or create a distraction and free Ophelia in the confusion [2]?: ";
        std::cin >> finalchoice;
    }
    if (finalchoice == 1) {
        std::cout << "\nYou allow Terry to be caught, the traccifers place him inside a cage\n\n";
        std::cout << "There is no way to open the cage from the inside, Terry is brought inside the town and sold. Game Over!\n\n";
        exit(0); {
        }
    }
    else {
        std::cout << "\nYou push a nearby boulder down the hill, it rolls over one of the trafficers leaving the rest confused and distracted\n\n";
        std::cout << "In the confusion, Terry springs the lock on Ophelia's cage and the two of them escape\n\n";
        std::cout << "Ophelia runs up to you and thanks you for your part in freeing her\n\n";
        std::cout << "You win! Congrats on reuniting Terry with his fiancee Ophelia!\n\n";
        std::ofstream myfile;
        myfile.open("WinnerAchievement.txt");
        myfile << "Winner Achievement Get!\n";
        myfile.close();
    }
    }