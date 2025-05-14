#include <iostream>
using namespace std;

int search(char arr[]) { 
    int count = 0; 

    for (int i = 0; arr[i] != '\0'; i++) { // Loop until null terminator
        count++;
    }

    return count; 
}

int main() {
    char arr[20]; 
    cout << "Enter your string:" << endl;
    cin >> arr; 

    cout << "Your total length is: " << search(arr) << endl; // Calling function
    return 0;
}
