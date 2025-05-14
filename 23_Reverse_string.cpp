#include <iostream>
using namespace std;

void reverse(char arr[], int n) { 
    int s = 0; 
    int e = n - 1;

    while (s < e) {
        swap(arr[s++], arr[e--]);
    }
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

    reverse(arr, len);
    cout << "Your reversed string is: " << arr << endl;

    return 0;
}
