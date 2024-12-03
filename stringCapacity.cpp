#include<bits/stdc++.h>
using namespace std;
int main(){
    string s= "hello";
    cout << s.size() << endl;  //for string size
    cout << s.max_size()<<endl;   //for maximum size of string
    cout << s.capacity() << endl;  // for generating dynamic string capacity
    s.clear();    //for clear string
    if(s.empty() == true){   //for check empty or not
        cout << "Empty" <<endl;
    }else{
        cout << "Not Empty"<<endl;
    } 
   s.resize(3);// for resize string
   
   cout << s <<endl;
    return 0;
} 