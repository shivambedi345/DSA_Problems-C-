#include<iostream>
using namespace std;
bool linearSearch(int arr[], int n, int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        return linearSearch(arr+1, n-1, key);
    }
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    if(linearSearch(arr, n, key)){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
}