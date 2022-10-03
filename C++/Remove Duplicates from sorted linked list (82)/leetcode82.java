// JAVA SOLUTION FOR THE question
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