#include <iostream>
using namespace std;
int main() {
    int n, arr[100];
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> arr[i];
    int max = arr[0];
    for(int i = 1; i < n; ++i) if(arr[i] > max) max = arr[i];
    cout << "Largest: " << max;
    return 0;
}