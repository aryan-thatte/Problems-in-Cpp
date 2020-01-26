#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

void CCCS101();

void CCCJ318();

void CCCS119();
void CCCS219();
void CCCS319();

// CALL IT
int main () {
    CCCJ318();
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
// */

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
// */

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
// */

// Unfinished
void CCCS319() {
    vector <int> r1 (3);
    vector <int> r2 (3);
    vector <int> r3 (3);
    vector <string> Sr1 (3);
    vector <string> Sr2 (3);
    vector <string> Sr3 (3);
    
    for (int x = 0; x < 3; x++) {
        cin >> Sr1[x];
        if (Sr1[x] != "X") {
            r1[x] = stoi(Sr1[x]);
        }
    }
    for (int x = 0; x < 3; x++) {
        cin >> Sr2[x];
        if (Sr2[x] != "X") {
            r2[x] = stoi(Sr2[x]);
        }
    }
    for (int x = 0; x < 3; x++) {
        cin >> Sr3[x];
        if (Sr3[x] != "X") {
            r3[x] = stoi(Sr3[x]);
        }
    }

    cout << endl;
    
    for (int x = 0; x < 3; x++) {
        if (Sr1[x] == "X") {
            if (x == 0) {
                if (Sr1[1] != "X" && Sr1[2] != "X") {
                    r1[0] = r1[1] - (r1[2] - r1[1]);
                    Sr1[0] = to_string(r1[0]);
                }
                else if (Sr2[0] != "X" && Sr3[0] != "X") {
                    r1[0] = r2[0] - (r3[0] - r2[0]);
                    Sr1[0] = to_string(r1[0]);
                }
            }
            if (x == 1) {
                if (Sr1[0] != "X" && Sr1[2] != "X") {
                    r1[1] = (r1[2] + r1[0]) / 2;
                    Sr1[1] = to_string(r1[1]);
                }
                else if (Sr2[1] != "X" && Sr3[1] != "X") {
                    r1[1] = r2[1] - (r3[1] - r2[1]);
                    Sr1[1] = to_string(r1[1]);
                }
            }
            if (x == 2) {
                if (Sr1[0] != "X" && Sr1[1] != "X") {
                    r1[2] = r1[1] + (r1[1] - r1[0]);
                    Sr1[2] = to_string(r1[2]);
                }
                else if (Sr2[2] != "X" && Sr3[2] != "X") {
                    r1[2] = r2[1] - (r3[2] - r2[2]);
                    Sr1[2] = to_string(r1[2]);
                }
            }
        }
        if (Sr2[x] == "X") {
            if (x == 0) {
                if (Sr2[1] != "X" && Sr2[2] != "X") {
                    r2[0] = r2[1] - (r2[2] - r2[1]);
                    Sr2[0] = to_string(r2[0]);
                }
                else if (Sr1[0] != "X" && Sr3[0] != "X") {
                    r2[0] = (r1[0] + r3[0]) / 2;
                    Sr2[0] = to_string(r2[0]);
                }
            }
            if (x == 1) {
                if (Sr2[0] != "X" && Sr2[2] != "X") {
                    r2[1] = (r2[2] + r2[0]) / 2;
                    Sr2[1] = to_string(r2[1]);
                }
                else if (Sr1[1] != "X" && Sr3[1] != "X") {
                    r2[1] = (r1[1] + r3[1]) / 2;
                    Sr2[1] = to_string(r2[1]);
                }
            }
            if (x == 2) {
                if (Sr2[0] != "X" && Sr2[1] != "X") {
                    r2[2] = r2[1] + (r2[1] - r2[0]);
                    Sr2[2] = to_string(r2[2]);
                }
                else if (Sr1[2] != "X" && Sr3[2] != "X") {
                    r2[2] = (r1[2] + r3[2]) / 2;
                    Sr2[2] = to_string(r2[2]);
                }
            }
        }
        if (Sr3[x] == "X") {
            if (x == 0) {
                if (Sr3[1] != "X" && Sr3[2] != "X") {
                    r3[0] = r3[1] - (r3[2] - r3[1]);
                    Sr3[0] = to_string(r3[0]);
                }
                else if (Sr1[0] != "X" && Sr2[0] != "X") {
                    r3[0] = r2[0] + (r2[0] - r1[0]);
                    Sr3[0] = to_string(r1[0]);
                }
            }
            if (x == 1) {
                if (Sr3[0] != "X" && Sr3[2] != "X") {
                    r3[1] = (r3[0] + r3[2]) / 2;
                    Sr3[1] = to_string(r3[1]);
                }
                else if (Sr1[1] != "X" && Sr2[1] != "X") {
                    r3[1] = r2[1] + (r2[1] - r1[1]);
                    Sr3[1] = to_string(r3[1]);
                }
            }
            if (x == 2) {
                if (Sr3[0] != "X" && Sr3[1] != "X") {
                    r3[2] = r3[1] + (r3[1] - r3[0]);
                    Sr3[2] = to_string(r3[2]);
                }
                else if (Sr1[2] != "X" && Sr2[2] != "X") {
                    r3[2] = r2[2] + (r2[2] - r1[2]);
                    Sr3[2] = to_string(r3[2]);
                }
            }
        }
    }

    cout << r1[0] << " " << r1[1] << " " << r1[2] << endl;
    cout << r2[0] << " " << r2[1] << " " << r2[2] << endl;
    cout << r3[0] << " " << r3[1] << " " << r3[2] << endl;
}
// */

// Work
void CCCJ318() {
    int d1, d2, d3, d4;
    cin >> d1 >> d2 >> d3 >> d4;
    
    cout << 0  << " "<< d1 << " " << d1+d2 << " " << d1+d2+d3 << " " << d1+d2+d3+d4 << " " << endl;
    cout << d1 << " " << 0 << " " <<  d2 << " " << d2+d3 << " " << d2+d3+d4 << " " << endl;
    cout << d1+d2 << " " << d2 << " " << 0 << " " << d3 << " " << d3+d4 << " " << endl;
    cout << d1+d2+d3 << " " << d2+d3 << " " << d3 << " " << 0 << " " << d4 << " " << endl;
    cout << d1+d2+d3+d4 << " " << d2+d3+d4 << " " << d3+d4 << " " << d4 << " " << 0 << " " << endl;
}
// */