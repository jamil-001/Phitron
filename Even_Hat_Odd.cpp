#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
       int evencnt=0,oddcnt=0;
        for(int i=0;i<n;i++){
            int num;
            cin >> num;
            if(num % 2 == 0) evencnt++;
            else oddcnt++;
        }
        if(n % 2 != 0){
            cout << -1 <<endl;
        }else{
            int target = n/2;
            if(evencnt > target){
                cout << evencnt - target <<endl;
            }else if(oddcnt > target){
                cout <<oddcnt - target <<endl;
            }else{
                cout<< 0 <<endl;
            }

        }
   
        
    }

    return 0;
}
