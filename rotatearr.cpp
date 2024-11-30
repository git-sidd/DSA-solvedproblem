#include <bits/stdc++.h>

using namespace std;

void rotatearr(int arr[],int n,int d){
    d=d%n;   //handle case of d>n
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n+i-d]=temp[i];
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
    rotatearr(arr,n,3);
    return 0;

}