#include <bits/stdc++.h>
using namespace std;

void majorityElement2(int arr[],int n,int k){
    int res,minH,maxH;
    res=arr[n-1]-arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]-k<0)continue;
        minH=min(arr[0]+k,arr[i]-k);
        maxH=max(arr[n-1]-k,arr[i-1]+k);
        res=min(res,maxH-minH);
    }
    cout<<"result:"<<res;
}
int main(){
     int n;
     int k;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<i<<"th element:";
        cin>>arr[i];
    }
    
    cout<<"Enter k:";
    cin>>k;
    majorityElement2(arr,n,k);
    return 0;

}