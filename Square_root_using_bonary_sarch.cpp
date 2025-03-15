#include<iostream>
using namespace std;
int binarysearch(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e){
        long long int square = mid * mid;
        if (square == n){
            return mid;
        }
       if (square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
   return ans;
}
int mysqrt(int n){
    if (n == 0 || n == 1){
        return n;
    }
    return binarysearch(n);
}
int main(){
    int n;
    cin>>n;
    cout<<mysqrt(n);
    return 0;
}