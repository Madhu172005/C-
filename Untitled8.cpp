#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] != mid) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    int arr[] = {0, 1, 2, 6, 9, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = findSmallestMissing(arr, n);
    cout << "The smallest missing element is: " << missing << endl;

    return 0;
}
