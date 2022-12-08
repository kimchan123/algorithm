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
    public ListNode middleNode(ListNode head) {
        ListNode list = head;
        int count = 1;
        
        while (list.next != null) {
            list = list.next;
            count++;
        }
        
        count = count / 2;
        
        while (count-- > 0) {
            head = head.next;
        }
        
        return head;
    }
}