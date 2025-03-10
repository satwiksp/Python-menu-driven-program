
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};
    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    insertionSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
