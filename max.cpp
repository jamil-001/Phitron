#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int maxval = a[0], minval = a[0];
    for(int i=0;i<n;i++){
        maxval = max(maxval, a[i]);
        minval = min(minval,a[i]);
    }

    cout <<minval<<" "<< maxval<<endl;
    return 0;
}