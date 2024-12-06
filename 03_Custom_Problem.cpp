#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string jh;
    getline(cin,s);
    cin >> jh;
    int cnt =0;
    stringstream ss(s);
    string word;
    while(ss >> word){
        if(jh == word){
            cnt++;
        }
    }
    cout << cnt <<endl;
    return 0;
}