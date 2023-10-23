#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int k;
    cin >> k;
    int size = sqrt(k);
    if (size * size == k) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}
