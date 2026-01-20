#include <iostream>
#include <algorithm>
using namespace std;

void find_k_max(int arr[]) {
    int k = 2;

    sort(arr, arr + 5);

    int count = 0;
    int last = -1;

    cout << "Top " << k << " values (with ties): ";

    for (int i = 4; i >= 0; i--) {
        if (arr[i] != last) {
            count++;
            last = arr[i];
        }

        if (count <= k) {
            cout << arr[i] << " ";
        } else {
            break;
        }
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    find_k_max(arr);

    return 0;
}
