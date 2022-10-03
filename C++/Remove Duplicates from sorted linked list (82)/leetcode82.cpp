
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(a,n) for(int i=a;i<n;i++)
class ListNode{
    public:
    int val;
    ListNode*next;
    ListNode(int data){
        this->val=data;
        this->next=NULL;
    }
    ~ListNode(){
        int val=this->val;
        if(this->next!= NULL){
            delete next;
        }
        cout<<endl<<"deleted val"<<val<<" ";
    }
};
// JAVA function FOR THE question
// class Solution {
//     public ListNode deleteDuplicates(ListNode head) {
//         if(head==null)
//             return null;
//         ListNode curr = head;
//         ListNode New = new ListNode(0);
//         ListNode Head = New;
//         int flag=0;
//         while(curr!=null)
//         {
//             while(curr.next!=null && curr.data==curr.next.data)
//             {
//                 flag=1;
//                 curr=curr.next;
//             }
//             if(flag!=1)
//             {
//                 New.next=curr;
//                 New= New.next;
//             }
//             flag=0;
//             curr=curr.next;
//         }
//         New.next=null;
//         return Head.next;
//     }
// }

// O(N) Space complexity C++
 ListNode* deleteDuplicates(ListNode* head) {
        if (head==NULL || head->next==NULL){
            return head;
        }
        bool j = false;
        while (head->next!=NULL && head->val == head->next->val){
            j = true;
            head->next = head->next->next;
        }
        if (j){
            head = deleteDuplicates(head->next);
            return head;
        }
        head->next = deleteDuplicates(head->next);
        return head;
    }






void insertathead(ListNode *&head, int data)
{
    ListNode *temp = new ListNode(data);
    temp->next = head;
    head = temp;
}
void print(ListNode *&head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main(){
 ios_base::sync_with_stdio(false);
  cin.tie(NULL);
ListNode*n1=new ListNode(5);
ListNode*head=n1;
insertathead(head,4);
insertathead(head,4);
insertathead(head,3);
insertathead(head,2);
insertathead(head,1);
cout<<"Before Removing duplicates"<<endl;
print (head);
ListNode*h1=deleteDuplicates(head);
cout<<endl;
print(h1);
return 0;
}
