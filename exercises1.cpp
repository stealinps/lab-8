#include <iostream>
using namespace std;
void difference(int scores[]) {
    int diff = 0, high = -9999, i;

    for (i = 0; i < 5; i++) {
        if (high < scores[i]) {
            high = scores[i];
        }
    }
    cout << "Highest score is " << high<<"\n";
    for (i = 0; i < 5; i++) {
        diff = high - scores[i];
        cout << scores[i] << " is off by " << diff<<"\n";
    }
}
int main() {
    int scores[5];
    cout << "Enter 5 scores:\n";
    int n;
    for (n = 0; n < 5; n++) {
        cin >> scores[n];
    }
    difference(scores);
}
