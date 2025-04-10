#include <iostream>
#include <string>
using namespace std;

// Checks if a string is a palindrome
bool isPalindrome(string text) {
    int start = 0, end = text.length() - 1;
    while (start < end) {
        if (text[start] != text[end]) return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a word: ";
    cin >> input;
    if (isPalindrome(input)) {
        cout << input << " is a palindrome." << endl;
    } else {
        cout << input << " is not a palindrome." << endl;
    }
    return 0;
}
