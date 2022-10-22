public class BinarySearch{
	public static void main(String[] args){
		int[] arr={13,34,45,56,76,78};
		int target=56;
	System.out.println(BinSearch(arr,target));

	}
	public static int BinSearch(int[] arr,int target){
		int start=0,end=arr.length-1;
		int mid;
		while(start<=end){
			mid=start+(end-start)/2;
			if(target<arr[mid])
			{ end=mid-1; }
			else if(target>arr[mid])
			{start=mid+1;}
			else {return mid;}
		}
		return -1;
	}
}

