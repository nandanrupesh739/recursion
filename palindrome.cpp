#include <iostream>

using namespace std;

// Recursive function to reverse a number
int reverseNum(int n, int rev = 0) {
    if (n == 0)
        return rev;
    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int rev = reverseNum(num);
    
    if (num == rev)
        cout << num << " is a Palindrome" << endl;
    else
        cout << num << " is NOT a Palindrome" << endl;
    
    return 0;
}
