#include<iostream>
using namespace std;
int peakIndexInMountainArray(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
       
        else{
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int main(){
    int arr[10] = {1, 2, 3, 4, 5, 10, 9, 8, 7, 6};
    int n = 10;
    cout << "Peak index is: " << peakIndexInMountainArray(arr, n) << endl;
    return 0;
}