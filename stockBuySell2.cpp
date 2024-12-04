#include <bits/stdc++.h>

using namespace std;

void stockBuySell2(int arr[],int n){

    if(n<2)return ;
    int minPrice=INT_MAX;
    
    int profit=0;
    int maxProfit=0;

    int i=0;
    for (int i = 0; i < n; i++) {
            // Update the minimum price
            minPrice = min(minPrice, arr[i]);

            // Calculate profit if sold at current price
            int profit = arr[i] - minPrice;

            // Update maximum profit
            maxProfit = max(maxProfit, profit);
        }
    cout<<"maxProfit:"<<maxProfit;


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
    stockBuySell2(arr,n);
    return 0;

}