#include <iostream>
using namespace std;
int main() {
    int n;
    float sum = 0, arr[100];
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Average: " << sum/n;
    return 0;
}