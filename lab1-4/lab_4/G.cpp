#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n / 2; ++i) {
        int value = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = value;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}
