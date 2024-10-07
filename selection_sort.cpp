#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements:"<<endl;
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-1; i++){
        int index=i;
        for(int j=i + 1; j < n; j++){
            if(a[j]<a[index]){
                index=j;
            }
        }
        swap(a[i], a[index]);
        cout<<"Swapped elements at index "<<i<<" and "<<index<<endl;
    }
    cout<<endl<<"Sorted array: "<<endl;
    for(int k=0; k<n; k++){
        cout<<a[k]<<endl;
    }
    return 0;
}
