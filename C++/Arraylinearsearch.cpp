#include<iostream>
using namespace std;
int linearsearch(int array[],int n,int key){
    for(int i=0;i<n;i++){
       if (array[i]==key)
            return i;}
    return 0;
   }
int main(){
    cout<<"Enter size: ";
    int n;
    cin>>n;
    int array[n];
    cout<<"Enter elements in array: ";
    for(int i=0;i<n;i++)
    cin>>array[i];
    int key;
    cout<<"Enter the element for which u want to find index: ";
    cin>>key;
    cout<<"It's index is "<<linearsearch(array,n,key);
    return 0;
}
