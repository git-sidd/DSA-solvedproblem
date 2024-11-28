#include <bits/stdc++.h>
using namespace std;

bool power(int n){
    if(n==0)return false;
    while(n%2==0){
        n=n/2;
    }
    if(n==1){
        cout<<"yess";
    }else{
        cout<<"No";
    }
}
int main(){
    power(3);
    return 0;
}