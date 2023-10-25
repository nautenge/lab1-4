#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0, pow2 = 1;

    for (int i = 0; i <= n; i++) {
        sum += pow2;
        pow2 *= 2;
    }
    cout << sum;
}
