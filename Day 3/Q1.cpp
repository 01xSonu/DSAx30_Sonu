#include <iostream>
using namespace std;

int bisearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}

int main() {
    int arr[4] = {1, 3, 5, 6};
    

    int target;
    cout << "Enter target: ";
    cin >> target;

    int result = bisearch(arr, 4, target);
    cout << "index : " << result << endl;

    return 0;
}
