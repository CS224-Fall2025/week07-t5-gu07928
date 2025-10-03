#include <iostream>

using namespace std;

void FindHappiness(int x) {
    if (x < 10) {
        if (x == 1) {cout << "Happy Number!" << endl;}
        else {cout << "Sad Number!" << endl;}
    } else {
        int s = 0;
        while (x > 0) {
            int d = x % 10;
            d = d * d;
            s += d;
            x = x / 10;
        }
        FindHappiness(s);
    }
}

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n < 1) {cout << "Invalid input! Try again!" << endl;}
        else {FindHappiness(n); break;}
    }
    return 0;
}