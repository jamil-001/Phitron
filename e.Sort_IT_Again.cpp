#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string nm;
    int cls;
    char ch;
    int id;
    int math;
    int eng;

};
bool cmp(Student l,Student r){
    if(l.eng > r.eng){
        return true;
    }else if(l.eng < r.eng){
        return false;
    }else{    // if(l.eng == r.eng)
        if(l.math > r.math){
            return true;
        }else if(l.math < r.math){
            return false;
        }else{ // if(l.math == r.math)
            if(l.id < r.id){
                return true;
            }else{
                return false;
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin >> a[i].nm >> a[i].cls >> a[i].ch >> a[i].id >> a[i].math >> a[i].eng;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout << a[i].nm <<" "<< a[i].cls <<" "<< a[i].ch <<" "<< a[i].id <<" "<< a[i].math <<" "<< a[i].eng <<endl;
    }
    return 0;
}