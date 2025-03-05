#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,ans;
    cout << " Enter the number :";
    cin >> n;
    while(n!=0){
        int ans = 0;
        int digit = n%10;
        // to keep it in range of integers
        if ((ans>INT32_MAX/10) || (ans<INT32_MIN/10)){
                cout<<0;
            }
        ans=(ans*10)+digit;
        n=n/10;
        cout << ans;
    }
}
