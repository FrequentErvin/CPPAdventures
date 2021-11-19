#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int l1,r1,l2,r2;
        cin >> l1 >> r1 >> l2 >> r2;
        int s1,d1,s2,d2;
        cin >> s1 >> d1 >> s2 >> d2;
        if(d1+d2-s1 <= r1){
            cout << d2 << " ooga " << s2 << endl;
        }else{
            s1 += r1-d1;
            if(s2+s1-d2 >= l2){
                cout << s1 << " booga " << s2+s1-d2 << endl;
            }else{
                cout << -1 << endl;
            }
        }
    }
}