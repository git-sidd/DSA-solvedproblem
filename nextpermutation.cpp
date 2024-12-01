#include <bits/stdc++.h>
using namespace std;

void nextpermutation(int arr[],int n){
    int pivot=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            pivot=i;
            cout<<"pivot:"<<pivot<<endl;
            break;
        }
    }
   
    if(pivot==-1){
        int i=0;
        int j=n-1;
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;

        }
       return;
    }
    //swapping the pivot with next integer greater than it..
    for(int i=n-1;i>pivot;i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
        }
    }
    //now arranging the elements next to pivot in ascending order
    int l=pivot+1;
    int r=n-1;
    while(l<r){
        swap(arr[l],arr[r]);
        l++;
        r--;
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
    nextpermutation(arr,n);
    return 0;

}