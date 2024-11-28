#include <bits/stdc++.h>

using namespace std;

void movingzerotoend(int arr[],int n){
    
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
          j=i;
          break;
        }
    }
    if(j==-1)return;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
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
    movingzerotoend(arr,n);
    
    
    return 0;
}