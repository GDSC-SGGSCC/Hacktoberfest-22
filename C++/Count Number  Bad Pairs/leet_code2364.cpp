#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
    unordered_map<int,int>m;
        long long n=nums.size();
        long long total_pair=n*(n-1)/2;
        long long goodpairs=0;
        for(int i=0;i<n;i++)
        {
            goodpairs+=m[i-nums[i]];
            m[i-nums[i]]++;
        }
        
        
        long long ans =  total_pair-goodpairs;
        return ans;
    }
};
// Java 
// class Solution {
//     public long countBadPairs(int[] a) {
//         int n=a.length;
//         long g=0l;
//         HashMap<Integer,Integer> hm=new HashMap<>();
// //find occurrence of all Good Pairs and then substract from total posible pairs to get the count of Bad Pairs.! //  
//         for(int i=0;i<n;i++){
//             if(hm.containsKey(i-a[i])){g+=(long)hm.get(i-a[i]);}
//             hm.put(i-a[i],hm.getOrDefault(i-a[i],0)+1);
//         }
//      // Formula to calculate the total possible pairs of an array of size N //  
//         long tot=((long)(n)*(long)(n-1))/(long)2;
       
//         return tot-(long)g;
//     }
// }
#define ll long long
#define fi(a,n) for(int i=a;i<n;i++)
int main(){
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
vector<int>nums;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    nums.push_back(x);
}
Solution S1;
cout<<S1.countBadPairs(nums)<<" ";
return 0;
}
