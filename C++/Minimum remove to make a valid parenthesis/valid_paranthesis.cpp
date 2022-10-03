#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(a,n) for(int i=a;i<n;i++)
   string minRemoveToMakeValid(string s) {
    
        stack<int>si;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='(')
             si.push(i);
            
          else if(ch==')')
          {
             
              if(!si.empty()&& ( ch==')'&& s[si.top()]=='('  ) ){
                  si.pop();
                  
              }
              else
                  si.push(i);
          }  
            
            
            }
        while(!si.empty()){
            
          s.erase(si.top(),1);
            si.pop();

        }
        return s;
        
    }
int main(){
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
string s;
cin>>s;
cout<<minRemoveToMakeValid(s)<<" ";
return 0;
}
