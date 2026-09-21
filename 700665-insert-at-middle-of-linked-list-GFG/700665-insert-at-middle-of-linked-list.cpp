class Solution {
public:
    Node* insertInMiddle(Node* head, int x) {

        Node* newNode = new Node(x);

        if (head == NULL)
            return newNode;

        Node* slow = head;
        Node* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        newNode->next = slow->next;
        slow->next = newNode;

        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna