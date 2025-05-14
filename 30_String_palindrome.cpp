#include <iostream>
using namespace std;

bool palindrome(char arr[], int len) { 
    int s = 0;
    int e = len - 1;

    while (s < e) { 
        if (arr[s] != arr[e]) {
            return false; // Not a palindrome
        }
        s++;
        e--;
    }
    
    return true; // If loop completes, it's a palindrome
}

int length(const char arr[]) { 
    int count = 0; 

    for (int i = 0; arr[i] != '\0'; i++) { 
        count++;
    }

    return count; 
}

int main() {
    char arr[100]; 
    cout << "Enter your string: ";
    cin.getline(arr, 100); // Allows multi-word input

    int len = length(arr);
    cout << "Your length is: " << len << endl;

    bool isPalindrome = palindrome(arr, len);
    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is NOT a palindrome." << endl;
    }

    return 0;
}

