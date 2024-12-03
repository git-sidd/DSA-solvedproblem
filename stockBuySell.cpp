#include <bits/stdc++.h>
using namespace std;



void stockBuySell(int arr[],int n){
    int minPrice=arr[0];
    int maxPrice=arr[0];
    int res=0;
    int i=0;
    if(n<2)return 0

 while (i<n-1){
       while( i<n-1 && arr[i+1]<=arr[i]){
        
            i++;
        
    }
            minPrice=arr[i];
   
     while( i<n-1  && arr[i+1]>=arr[i]){
       
            i++;
        
    }
            maxPrice=arr[i];
    res+=(maxPrice-minPrice);
    
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
    stockBuySell(arr,n);
    return 0;

}