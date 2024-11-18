#include <iostream>
#include <queue>
using namespace std;

int kthSmallest(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++) {
        minHeap.push(arr[i]);
    }
    for (int i = 1; i < k; i++) {
        minHeap.pop();
    }
    return minHeap.top();
}

int main() {
    int arr[] = {12, 3, 5, 7, 19, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    cout << "The " << k << "-th smallest element is " << kthSmallest(arr, n, k) << endl;
    return 0;
}
