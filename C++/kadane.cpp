#include<bits/stdc++.h>
using namespace std;
//Kadane's algorithm is used to find the maximum sum of an subarray .
//Approach: We use two integers to store the current sum and if current sum is greater than previous maxSum,then maxSum is updated
//We also check if current sum is negative and then reset it to 0
int maxSumsubarray(int arr[],int n){
    int maxSum=0;int curSum=0;
    for(int i=0;i<n;i++){
        //if all the numbers are -ve
        if(i==n-1 && maxSum==0) maxSum=*max_element(arr,arr+n);
        //addding each index 
        curSum=curSum+arr[i];
        //checking current and max sum
        if(curSum>maxSum) maxSum=curSum;
        //if cur sum goes -ve then we skip that subarray
        if(curSum<0) curSum=0;
    }
    return maxSum;
}
int main()
{   
    int arr[]={5,-5,-2,4,100,-200};
    int n =sizeof(arr)/sizeof(arr[0]);
    cout<<maxSumsubarray(arr,n);
    return 0;
}