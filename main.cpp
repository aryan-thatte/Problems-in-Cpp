#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

int main() {
    
    string cards;
    vector <char> C (13);
    vector <char> D (13);
    vector <char> H (13);
    vector <char> S (13);
    int Cscore = 0;
    int Dscore = 0;
    int Hscore = 0;
    int Sscore = 0;

    cin >> cards;

    for (int x = 0; x < cards.length() - 1; x++) {
        if (cards.at(x) == 'C') {
            for (int yay = x + 1; cards.at(yay) != 'D'; yay++) {
                C[yay] = cards.at(yay);
                if (cards.at(yay) == 'J') {
                    Cscore += 1;
                }
                if (cards.at(yay) == 'Q') {
                    Cscore += 2;
                }
                if (cards.at(yay) == 'K') {
                    Cscore += 3;
                }
                if (cards.at(yay) == 'A') {
                    Cscore += 4;
                }
            }
        }
        else if (cards.at(x) == 'D') {
            for (int yay = x + 1; cards.at(yay) != 'H'; yay++) {
                D[yay] = cards.at(yay);
                if (cards.at(yay) == 'J') {
                    Cscore += 1;
                }
                if (cards.at(yay) == 'Q') {
                    Cscore += 2;
                }
                if (cards.at(yay) == 'K') {
                    Cscore += 3;
                }
                if (cards.at(yay) == 'A') {
                    Cscore += 4;
                }
            }
        }
        else if (cards.at(x) == 'H') {
            for (int yay = x + 1; cards.at(yay) != 'S'; yay++) {
                H[yay] = cards.at(yay);
                if (cards.at(yay) == 'J') {
                    Cscore += 1;
                }
                if (cards.at(yay) == 'Q') {
                    Cscore += 2;
                }
                if (cards.at(yay) == 'K') {
                    Cscore += 3;
                }
                if (cards.at(yay) == 'A') {
                    Cscore += 4;
                }
            }
        }
        else if (cards.at(x) == 'S') {
            for (int yay = x + 1; x != cards.length(); yay++) {
                S[yay] = cards.at(yay);
                if (cards.at(yay) == 'J') {
                    Cscore += 1;
                }
                if (cards.at(yay) == 'Q') {
                    Cscore += 2;
                }
                if (cards.at(yay) == 'K') {
                    Cscore += 3;
                }
                if (cards.at(yay) == 'A') {
                    Cscore += 4;
                }
            }
        }
             
    }

    cout << "Clubs ";
    for (int x = 0; x < 13; x++) {
        cout << C[x];
    }
    
    return 0;
}
