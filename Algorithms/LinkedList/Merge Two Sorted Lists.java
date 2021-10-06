/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if(l1 == null) return l2;
        else if(l2 == null) return l1;
        
        ListNode dummy = new ListNode(-1);
        ListNode prev = dummy;
        
        ListNode c1 = l1;
        ListNode c2 = l2;
        
        while(c1 != null && c2 != null) {
            if(c1.val < c2.val) {
                prev.next = c1;
                c1 = c1.next;
            }
            else {
                prev.next = c2;
                c2 = c2.next;
            }
            prev = prev.next;
        }
        
        prev.next = c1 == null ? c2 : c1;
        return dummy.next;
    }
}