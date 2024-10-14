#include <iostream>
#include <chrono>

using namespace std;

void insertionSort(long int arr[], int n) {
    for (int i = 1; i < n; i++){
        int k= arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > k){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}

// void print(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

int main(){
    // int n;
    // cout << "Enter size of array: ";
    // cin >> n;

    // int arr[n];  
    // cout << "Enter elements of array: "<< endl;
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // cout << "Original array: ";
    // print(arr, n);

    // insertionSort(arr, n);

    // cout << "Sorted array: ";
    // print(arr, n);

    long int n = 10000; 
    int it = 0; 
  
    // Arrays to store time duration 
    // of sorting algorithms 
    double  time[10]; 
    // // Seed the random number generator
    //  srand(time(0));

  
    cout<<"size, Insertion_time\n"; 
  
    // Performs 10 iterations 
    while (it < 10) { 
        long int a[n];

  
        // generating n random numbers 
        // storing them in arrays a, b, c 
        for (int i = 0; i < n; i++) { 
            long int no = rand() % n + 1; 
            a[i] = no; 
            
        } 

        // Insertion sort 
         auto start = chrono::high_resolution_clock::now(); 
        insertionSort(a,n); 
        auto end = chrono::high_resolution_clock::now();
        
        chrono::duration<double> duration = end - start;
        time[it] = duration.count();
  

    cout << n << ", "<< time[it] << ","<<endl;

        // increases the size of array by 10000 

     n+=10000;

     it++;
}
 return 0;
}


