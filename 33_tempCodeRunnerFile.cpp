#include<iostream>
using namespace std;
int firstoccurence(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastoccurence(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int odd[7] = {1, 2, 3, 3, 3, 3, 4};
    int even[8] = {1, 2, 2, 2, 3, 4, 5, 6};
    cout <<"first occurence of 3 is at index "<< firstoccurence(odd, 7, 3) << endl;
    cout <<"first occurence is of 5 at index "<< firstoccurence(even, 8, 5) << endl; 
    cout <<"last occurence of 3  is at index "<< lastoccurence(odd, 7, 3) << endl;
    cout <<"last occurence of 5  is at index "<< lastoccurence(even, 8, 5) << endl;
}