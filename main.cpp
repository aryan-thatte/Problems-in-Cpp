#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
void CCCS101();

void CCCS119();
void CCCS219();

using namespace std;

// CALL IT
int main () {
    CCCS219();
}

// Not work
void CCCS101() {
    
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
                    Dscore += 1;
                }
                if (cards.at(yay) == 'Q') {
                    Dscore += 2;
                }
                if (cards.at(yay) == 'K') {
                    Dscore += 3;
                }
                if (cards.at(yay) == 'A') {
                    Dscore += 4;
                }
            }
        }
        else if (cards.at(x) == 'H') {
            for (int yay = x + 1; cards.at(yay) != 'S'; yay++) {
                H[yay] = cards.at(yay);
                if (cards.at(yay) == 'J') {
                    Hscore += 1;
                }
                if (cards.at(yay) == 'Q') {
                    Hscore += 2;
                }
                if (cards.at(yay) == 'K') {
                    Hscore += 3;
                }
                if (cards.at(yay) == 'A') {
                    Hscore += 4;
                }
            }
        }
        else if (cards.at(x) == 'S') {
            for (int yay = x + 1; x != cards.length(); yay++) {
                S[yay] = cards.at(yay);
                if (cards.at(yay) == 'J') {
                    Sscore += 1;
                }
                if (cards.at(yay) == 'Q') {
                    Sscore += 2;
                }
                if (cards.at(yay) == 'K') {
                    Sscore += 3;
                }
                if (cards.at(yay) == 'A') {
                    Sscore += 4;
                }
            }
        }
    }

    cout << "Clubs ";
    for (int x = 0; x < 13; x++) {
        cout << C[x];
    }
}

// Work
void CCCS119() {
    int topLeft = 1;
    int topRight = 2;
    int bottomLeft = 3;
    int bottomRight = 4;
    int H = 0;
    int V = 0;
    string flips;

    cin >> flips;

    for (int x = 0; x < flips.length(); x++) {
        if (flips.at(x) == 'H')
        {
            H++;
        }
        else
        {
            V++;
        }       
    }

    if (H % 2 == 1 &&  V % 2 == 1)
    {
        topLeft = 4;
        topRight = 3;
        bottomLeft = 2;
        bottomRight = 1;
    }
    else if (H % 2 == 1)
    {
        topLeft = 3;
        topRight = 4;
        bottomLeft = 1;
        bottomRight = 2;
    }
    else if (V % 2 == 1)
    {
        topLeft = 2;
        topRight = 1;
        bottomLeft = 4;
        bottomRight = 3;
    }
    
    cout << topLeft << " " << topRight << endl;
    cout << bottomLeft << " " << bottomRight << endl;
}

// Unifinished
void CCCS219() {
    int N = 0;
    int A = 0;
    int B = 0;

    cin >> N;
    vector <int> Ni (N);

    for (int x = 0; x < N; x++) {
        cin >> Ni[x];
    }

    cout << Ni[0] << Ni[1] << Ni[2] << Ni[3] << endl;

    for (int x = 0; x < N; x++) {
        for (int y = 2; y < Ni[x] / 2; y++) {
            if (Ni[x] % y == 0) {
                
            }
            else {
                A = Ni[x];
                break;
            }
        }
        cout << A;
    }

    

    /*for loop here
    cout << A << " " << B << endl;
    */
}

