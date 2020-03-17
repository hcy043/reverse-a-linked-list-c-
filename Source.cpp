
#include <iostream>
#include <string>
#include <vector>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;


        ListNode* temp, * first, * second, * third;
        first = head;
        second = head->next;
        third = head->next->next;


        while (1)
        {

            second->next = first;
            first = second;
            second = third;
            if (third == NULL)
            {
                head->next = NULL;
                return first;
            }
            third = third->next;
            if (third == NULL)
            {
                second->next = first;
                break;
            }
        }

        head->next = NULL;
        return second;
    }
};
