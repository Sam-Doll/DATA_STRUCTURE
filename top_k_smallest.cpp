#include <iostream>
#include <queue> 
using namespace std;

void findTopKSmallest(int arr[], int n, int k) {
    priority_queue<int> maxHeap;

    for (int i = 0; i < n; ++i) {
        maxHeap.push(arr[i]); 
        if (maxHeap.size() > k) {
            maxHeap.pop(); 
        }
    }
    int result[k];
    int index = k - 1;
    while (!maxHeap.empty()) {
        result[index--] = maxHeap.top();
        maxHeap.pop();
    }
    cout << "Top " << k << " smallest elements are: ";
    for (int i = 0; i < k; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    if (k > n) {
        cout << "k is larger than size of array" << endl;
        return 0;
    }
    findTopKSmallest(arr, n, k);
    return 0;
}

