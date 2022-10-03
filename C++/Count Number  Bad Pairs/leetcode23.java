class Solution {
    public long countBadPairs(int[] a) {
        int n=a.length;
        long g=0l;
        HashMap<Integer,Integer> hm=new HashMap<>();

        for(int i=0;i<n;i++){
            if(hm.containsKey(i-a[i])){g+=(long)hm.get(i-a[i]);}
            hm.put(i-a[i],hm.getOrDefault(i-a[i],0)+1);
        }
 
        long tot=((long)(n)*(long)(n-1))/(long)2;
       
        return tot-(long)g;
    }
}