#include<bits/stdc++.h>
using namespace std;

void palindrome(int x){
    int rev=0;
    int num=x;
    while(x>0){
        
        int last=x%10;
        x=x/10;
        rev=rev*10+last;
    }
    
    if(num==rev){
        cout<<"palindrome exist";
    }
    else{
        cout<<"palindrome Not exists";
    }
    

}
int main(){
    palindrome(121);
}