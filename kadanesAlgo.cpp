#include <bits/stdc++.h>
using namespace std;

void kadane(int arr[],int n){
    int maxend=arr[0];
    int res=arr[0];


    for(int i=1;i<n;i++){
        maxend=max(maxend+arr[i],arr[i]);
        res=max(maxend,res);
    }
    cout<<"Result:"<<res;
}
int main(){
     int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<i<<"th element:";
        cin>>arr[i];
    }
    kadane(arr,n);
    return 0;

}