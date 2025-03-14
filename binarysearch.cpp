#include<iostream>
using namespace std;
int binarysearch(int arr[], int key, int size){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        int mid = s + (e-s)/2;
    }
    cout << "Element not found" << endl;
    return -1;

}
int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 5;
    int size = 10;
    int value = binarysearch(arr, key, size);
    cout << "Element found at index: " << value << endl;
    return 0;
    
}