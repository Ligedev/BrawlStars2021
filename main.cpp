#include <iostream>
#include <string>
using namespace std;

void BackToMenu(int& action) {
    cout << "You're back on the menu, what's next?\n";
    cin >> action;
}

int main() {
    int game = 1; //1 = game going, 0 = game ended
    int trophies = 22569;
    int useractions1;
    int useractions2;
    int useractions3;
    int useractions4;
    int useractions5;
    int useractions6;
    int useractions7;
    int useractions8;
    int useractions9;
    int useractions10;
    int useractions11;
    //A loop that can restart the game.
    while (game == 1) {
        cout << "Welcome in Brawl Stars 2021\nLoading";
        for (int i = 0; i < 6; i++) {
            cout << "."; //Simulates loading
        }
        cout << "\n---===Menu===---\n";
        cout << "1)Profile\n2)Trophy road\n3)Settings\n4)Shop\n5)Brawlers\n6)News\n7)Brawl Pass\n8)Friend\n9)Club\n10)Chat\n11)Selecting a mode\n12)Play\n13)Exit the game.\n";
        cin >> useractions1;
        if (useractions1 == 1) {
            cout << "Your statistics:\nName: hacker777.\nTrophys:" << trophies << ".\nMax Trophys: 22581.\nHighest team league: Bronze III.\nHighest solo league: Gold II.\nWins 3v3: 4793.\nWins solo: 2340.\nWins duo: 1392.\nClub: Heaven\n";
            cout << "\n1)Leave?";
            cin >> useractions2;
            if (useractions2 == 1) {
                BackToMenu(useractions1);
            }
        }
        if (useractions1 == 2) {
            cout << "You have " << trophies << "trophys.\n";
            cout << "\n1)Leave?";
            cin >> useractions2;
            if (useractions2 == 1) {
                BackToMenu(useractions1);
            }
            } else if (useractions1 == 3) {
            cout << "Sound Effects: 10/10.\nMusic^ 0/10.\nHaptic Feedback: off.\nLanguage: English.\nLocation: Earth.\nCredits.\nParents Guide.\nDrop Chances.\nTerms of Service.\nPrivacy Policy.\nHelp and Support.\nEdit Controls.\nManage.\n";
            cout << "Do you want to change the settings?\n";
            cout << "1)Yes.\n2)No, leave.\n";
            cin >> useractions3;
            if (useractions3 == 1) {
                cout << "No, you don't want.\n What's next?\n";
                cin >> useractions1;
            }
            if (useractions3 == 2) {
                BackToMenu(useractions1);
            }
        }
        if (useractions1 == 4) {
            cout << "A bunch of useless stocks, you don't want to take anything.\n";
            cout << "\n1)Leave\n";
            cin >> useractions2;
            if (useractions2 == 1) {
                BackToMenu(useractions1);
            }
        }
        if (useractions1 == 5) {
            cout << "You have:\nShelly\nColt\nBull\nBrock\nBarley\nNita\nEl Primo\nPoco\nTick\nStu\nMortis\nTara\nLeon\nNow you have Mortis selected.\n";
            cout << "\n1)Leave\n";
            cin >> useractions2;
            if (useractions2 == 1) {
                BackToMenu(useractions1);
            }
        }
        if (useractions1 == 6) {
            cout << "A bunch of boring news that you don't want to read.\n";
            cout << "\n1)Leave\n";
            cin >> useractions2;
            if (useractions2 == 1) {
                BackToMenu(useractions1);
            }
        }
        if (useractions1 == 7) {
            cout << "You have level 34 in Brawl Pass.\nNext award is gems.";
            cout << "\n1)Leave\n";
            cin >> useractions2;
            if (useractions2 == 1) {
                BackToMenu(useractions1);
            }
        }
        if (useractions1 == 8) {
            cout << "You have no friends. :D\n";
            cout << "\n1)Leave\n";
            cin >> useractions2;
            if (useractions2 == 1) {
                BackToMenu(useractions1);
            }
        }
        if (useractions1 == 9) {
            cout << "There are 99 members in the club. You don't want to write anything in the chat.\n";
            cout << "\n1)Leave\n";
            cin >> useractions2;
            if (useractions2 == 1) {
                BackToMenu(useractions1);
            }
        }
        if (useractions1 == 10) {
            cout << "To do this you need to be on a team.\n";
            cout << "\n1)Leave\n";
            cin >> useractions2;
            if (useractions2 == 1) {
                BackToMenu(useractions1);
            }
        }
        if (useractions1 == 11) {
            cout << "Select a mode:\n1)Gem Grab.\n2)Showdown.\n3)Brawl Ball.\n4)Hot Zone.\nThere are no special or temporary events.\n";
            cin >> useractions4;
            if (useractions4 == 2) {
                cout << "1)Solo\n2)duo\n";
                cin >> useractions5;
                BackToMenu(useractions1);
            } else if (useractions4 != 2) {
                BackToMenu(useractions1);
            }
        }
        if (useractions1 == 12) {
            if (useractions4 == 1){
                cout << "Your team: Bo, Mortis(you), Shelly.\nEnemies team: Tick, Tara, Brock.\nWhat are you going to do now?\n1)Go to the center\n2)Go left\n3)Go right\n";
                cin >> useractions6;
                if (useractions6 == 1) {
                    cout << "You go to the center and start farming crystals, your allies help you.\nYou collected 10 crystals and you won.\n";
                    cout << "+10 trophies\n";
                    trophies += 10;
                    BackToMenu(useractions1);
                } else if (useractions6 == 2) {
                    cout << "You met Tick, he has 8 crystals, what are you going to do?\n";
                    cout << "1) Attack.\n2) Run.\n";
                    cin >> useractions7;
                    if (useractions7 == 1) {
                        cout << "You killed him and took the crystals. Your team collected 10 crystals and won.\n";
                        cout << "+10 trophies\n";
                        trophies +=10;
                        BackToMenu(useractions1);
                    }
                } else if (useractions6 == 3) {
                    cout << "You stood on the left the entire game without getting a single kill. You lost.\n";
                    cout << "-10 trophies\n";
                    trophies -=10;
                    BackToMenu(useractions1);
                }
            } else if (useractions4 == 2) {
                if (useractions5 == 1) {
                    cout << "Your enemies:\nTara\nMortis\nCrow\nColt\nBull\nTick\nEl Primo\nNita\n8-Bit\n";
                    cout << "There are big bushes in the center, will you go there?\n1) Go with him.\n2) Go away.\n";
                    cin >> useractions8;
                    if (useractions8 == 1) {
                        cout << "Bull was in the center, you had no chance and you lost.\n";
                        cout << "-12 trophies\n";
                        trophies -=12;
                        BackToMenu(useractions1);
                    } else if (useractions8 == 2) {
                        cout << "You went to collect Power Cubes.\nHaving collected the power-up cubes, you go to the center, but the bull was still stronger.\n";
                        cout << "+8 trophies\n";
                        trophies +=8;
                        BackToMenu(useractions1);
                    }
                } else if (useractions5 == 2) {
                    cout << "Your team: Mortis(you), Bo.\nEnemies teams:\nSchelly and Colt.\nTick and Nita.\nEl Primo and Leon.\nCrow and Stu.\n";
                    cout << "Your ally went to collect power cubes, what will you do?\n1) Yes.\n2) No.\n";
                    cin >> useractions9;
                    if (useractions9 == 1) {
                        cout << "You collected the power-up cubes and went out to kill the other teams. You took first place.\n";
                        cout << "+12 trophies\n";
                        trophies +=12;
                        BackToMenu(useractions1);
                    } else if (useractions9 == 2) {
                        cout << "You were both killed separately. You took 3rd place.\n";
                        cout << "+3 trophies\n";
                        trophies +=3;
                        BackToMenu(useractions1);
                    }
                }
            } else if (useractions4 == 3) {
                cout << "Your team: Mortis(you), Bull, Colt.\nEnemies team: Leon, 8-Bit, Bo.\n";
                cout << "What will you do?\n1) Go to the ball.\n2) Go defend the gate.\n";
                cin >> useractions10;
                if (useractions10 == 1) {
                    cout << "You took the ball and with the help of your allies you broke through and scored a goal, and that was the case in the second match too. You win!\n";
                    cout << "+10 trophies\n";
                    trophies +=10;
                    BackToMenu(useractions1);
                } else if (useractions10 == 2) {
                    cout << "Your defense isn't helping much, your teammates got killed, and then you too, after which they scored a goal. It was the same in the second match. You lose.\n";
                    cout << "-10 trophies\n";
                    trophies -=10;
                    BackToMenu(useractions1);
                }
            } else if (useractions4 == 4) {
                cout << "Your team: Mortis(you), Bo, Tick.\nEnemies team: Bibi, Brok, Spike.\n";
                cout << "What will you do?\n1) Go to zone.\n2) Go to enemies spawn.\n";
                cin >> useractions11;
                if (useractions11 == 1) {
                    cout << "You don't help your allies much, but you still win.\n";
                    cout << "+10 trophies\n";
                    trophies +=10;
                    BackToMenu(useractions1);
                } else if (useractions11 == 2) {
                    cout << "You're great at killing everyone who shows up, you win.\n";
                    cout << "+10 trophies\n";
                    trophies +=10;
                    BackToMenu(useractions1);
                }
            }
        }
        if (useractions1 == 13) {
            cout << "\n---===Goodbye!. The game is over.===---";
            game = 0;
        }
    }
    return 0;
}
