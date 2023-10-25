#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int C = 1;

    for (int i = 1; i <= k; i++) {
        C *= (n - i + 1);
        C /= i;
    }

    cout<<C;
}
