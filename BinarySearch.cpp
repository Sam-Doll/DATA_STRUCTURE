#include <iostream>
using namespace std;

//function for binary search
void binarySearch(int arr[],int n , int num){
    int low = 0 ;
    int high = n-1;
     
    while (high >= low){
        int mid = ( high -low ) / 2;

        if (arr[mid] == num) {
            cout<< "the element is present at " << mid + 1 ;
        }
         if(arr[mid]< num ){
            low = mid+1 ;
        }
        else{
            high = mid-1 ;
        }
    }
    
}


int main(){

int n;
int num ;

//take capacity input for an array
cout << "enter number of elements in array: " << endl ;
cin >> n;

//take input in an array
int arr[n];
for(int i=0 ; i<n ; i++){
    cout << "enter element " << i+1 << endl ;
    cin >> arr[i];
}

//take number for searching
cout << "enter number u want to search for" <<endl;
cin >> num ;

binarySearch( arr , n , num);

};
