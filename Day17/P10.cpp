#include <iostream>
using namespace std;
int main() {
    int n, rev = 0, orig;
    cin >> n;
    orig = n;
    while(n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if(rev == orig) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}