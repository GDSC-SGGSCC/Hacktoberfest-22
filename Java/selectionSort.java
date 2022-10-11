package com.Sorting;
import java.util.Arrays;
public class selectionSort {
    public static void main(String[] args){
    int[] arr={12,43,78,30,89};
    SelectSort(arr);
System.out.println(Arrays.toString(arr));
    }
    public static void SelectSort(int[] arr){
     for(int i=0;i<arr.length;i++){
        int last=arr.length-i-1;
        int maxIndex=getMaxIndex(arr,0,last);
        swap(arr,maxIndex,last);
     }
    }
    static void swap(int[] arr,int first,int second){
        int temp=arr[first];
        arr[first]=arr[second];
        arr[second]=temp;
    }
    static int getMaxIndex(int[] arr,int start,int end){
        int max=start;
        for(int i=start;i<=end;i++){
            if(arr[max]<arr[i]){
                max=i;
            }
        }
        return max;
    }
}
