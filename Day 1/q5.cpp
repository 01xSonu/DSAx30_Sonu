#include <iostream>
#include <cmath>
using namespace std;

bool isKaprekar(int num) {
    if (num == 1) return true;

    int sq = num * num;
    string str = to_string(sq);
    int len = str.length();

    for (int i = 1; i < len; i++) {
        string left = str.substr(0, i);
        string right = str.substr(i);

        int l = stoi(left);
        int r = stoi(right);

        if (r == 0) continue; 

        if (l + r == num) return true;
    }

    return false;
}

int main() {
    int p, q, count = 0;
    cout << "Enter p: ";
    cin >> p;
    cout << "Enter q: ";
    cin >> q;

    for (int i = p; i <= q; i++) {
        if (isKaprekar(i)) {
            cout << i << " ";
            count++;
        }
    }

    if (count == 0) {
        cout << "No Kaprekar numbers found in range.";
    } else {
        cout << "\nCount of Kaprekar numbers: " << count;
    }

    return 0;
}
