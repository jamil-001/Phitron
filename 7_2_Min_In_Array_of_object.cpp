#include<bits/stdc++.h>
using namespace std;
class Student
{
   public:
   string name;
   int roll;
   int mark;
};
int main(){
    int n;
    cin>> n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin >> a[i].name >> a[i].roll >> a[i].mark;
    }  
    Student mn;
    mn.roll = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i].roll < mn.roll){
            mn = a[i];
        }
    }
    cout << mn.name<<" "<<mn.roll<<" "<<mn.mark <<endl;
    return 0;
}