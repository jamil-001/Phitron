#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s,x;
        cin >> s >> x;
    string res = "";
    int lens = s.length();
    int lenx = x.length();
    for(int i=0;i<lens;){
        bool correct = true;
        for(int j = 0; j < lenx;j++){
            if(i + j >= lens || s[i+j] != x[j]){
                correct = false;
                break;
            }
        }
        if(correct){
            res +="#";
            i += lenx;
        }else{
            res += s[i];
            i++;
        }
    }
    cout <<res <<endl;
    }
    return 0;
}