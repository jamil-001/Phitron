#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int mark;
};
bool cmp(Student l, Student r){
    if(l.name < r.name){
        return true;
    }else{
        return false;
    }
}
int main(){
  int n;
  cin >> n;
  Student a[n];
  for(int i=0;i<n;i++){
    cin >> a[i].name >> a[i].roll >> a[i].mark;
  }
  sort(a,a+n,cmp);
   for(int i=0;i<n;i++){
   cout<< a[i].name <<" " << a[i].roll <<" "<< a[i].mark<<endl;
  }
    return 0;
}