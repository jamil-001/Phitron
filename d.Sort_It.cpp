#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string nm;
    int cls;
    char ch;
    int id;
    int math;
    int eng;

};
bool cmp(Student l, Student r){
    if(l.math + l.eng == r.math + r.eng){
        if(l.id < r.id){
            return true;
        }else{
            return false;
        }
    }else if(l.math+l.eng > r.math+r.eng)
    {
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
        cin>> a[i].nm >> a[i].cls >> a[i].ch >> a[i].id >> a[i].math >> a[i].eng;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout << a[i].nm << " " << a[i].cls << " " << a[i].ch << " "<< a[i].id <<" "<< a[i].math  <<" "<< a[i].eng<<endl;
    }
    return 0;
}