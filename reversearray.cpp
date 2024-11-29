#include <bits/stdc++.h>

using namespace std;

void revarr(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
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
    revarr(arr,n);
    return 0;
}