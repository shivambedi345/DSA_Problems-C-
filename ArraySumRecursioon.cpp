#include<iostream>
using namespace std;
void sum(int arr[], int n, int &s){
    if(n==0){
        return;
    }
    s += arr[n-1];
    sum(arr, n-1, s);
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int s = 0;
    sum(arr, n, s);
    cout << "Sum of array elements is: " << s << endl;
    return 0;
}