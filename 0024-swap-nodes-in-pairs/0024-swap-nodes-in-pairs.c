/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

struct ListNode* swapPairs(struct ListNode* head) {
    // Base case: if the list is empty or has only one node
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Initialize the pointers
    struct ListNode *prev = NULL;
    struct ListNode *current = head;
    struct ListNode *newHead = head->next; // New head after first swap

    while (current != NULL && current->next != NULL) {
        struct ListNode *nextPair = current->next->next;
        struct ListNode *second = current->next;

        // Swap the current pair
        second->next = current;
        current->next = nextPair;
        if (prev != NULL) {
            prev->next = second;
        }

        // Move the pointers
        prev = current;
        current = nextPair;
    }

    return newHead;
}
