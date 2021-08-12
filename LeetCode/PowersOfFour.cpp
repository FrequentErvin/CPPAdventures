#include<bits/stdc++.h>
using namespace std;
bool isPowerOfFour(int n) {
        if(log(n)/log(4) == floor(log(n)/log(4)))
            return true;
        return false;
    }
double log_a_to_base_b(int a, int b){
    return log(a) / log(b);
}
/*int main(){
    int n;
    cin >> n;
   cout << log_a_to_base_b(n,4);
}*/