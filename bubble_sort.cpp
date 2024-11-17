#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;               
            }
        }
    }
}
void print (int arr[], int size){
    for(int i=0;i<size; i++){
        cout<< arr[i] <<" ";
    }
    cout<< endl;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;   
    int arr[n];
    cout << "Enter elements: "<< endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << "Original Array: ";
    print(arr, n);
    
    bubbleSort(arr, n);
    
    cout << "Sorted Array: ";
    print(arr, n);
    return 0;
}