
class ListNode {
    int val;
    ListNode next;
    ListNode(int x) {
        val = x;
        next = null;
    }
}

public class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode prev = null;
        ListNode curr = head;
        
        while (curr != null) {
            ListNode nextTemp = curr.next; // Store the next node
            curr.next = prev; // Reverse the pointer
            prev = curr; // Move prev to the current node
            curr = nextTemp; // Move curr to the next node
        }
        
        return prev; // The last node becomes the new head
    }

    public static void main(String[] args) {
        Solution solution = new Solution();

        // Construct a linked list
        ListNode head = new ListNode(1);
        head.next = new ListNode(2);
        head.next.next = new ListNode(3);
        head.next.next.next = new ListNode(4);
        head.next.next.next.next = new ListNode(5);

        // Print original list
        System.out.println("Original List:");
        printList(head);

        // Reverse the list
        ListNode reversedHead = solution.reverseList(head);

        // Print reversed list
        System.out.println("\nReversed List:");
        printList(reversedHead);
    }

    private static void printList(ListNode head) {
        ListNode curr = head;
        while (curr != null) {
            System.out.print(curr.val + " ");
            curr = curr.next;
        }
        System.out.println();
    }
}
