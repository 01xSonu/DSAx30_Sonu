#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int size = 2 * N - 1;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            int val = N - min(min(i, j), min(size - 1 - i, size - 1 - j));
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
