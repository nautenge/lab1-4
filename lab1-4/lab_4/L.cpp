#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int* heights = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int height;
    cin>>height;

    int position_height = 1;

    for (int i = 0; i < n; i++) {
        if (height <= heights[i]) {
            position_height= i + 1;
            break;
        }
    }
    cout<<position_height;
    delete[] heights;
}
