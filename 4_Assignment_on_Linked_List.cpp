#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int value = 0, ListNode *nextptr = nullptr)
    {
        val = value;
        next = nextptr;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)
ListNode *reverseBetween(ListNode *head, int left, int right)
{
    if (!head || left == right)
    {
        return head;
    }

    ListNode *reversed = new ListNode(0);
    reversed->next = head;
    ListNode *prev = reversed;

    for (int i = 1; i < left; ++i)
    {
        prev = prev->next;
    }

    ListNode *current = prev->next;
    ListNode *next_node = nullptr;

    for (int i = 0; i < right - left + 1; ++i)
    {
        ListNode *next_temp = current->next;
        current->next = next_node;
        next_node = current;
        current = next_temp;
    }

    prev->next->next = current;
    prev->next = next_node;

    return reversed->next;
}

ListNode *createLinkedList(const std::vector<int> &values)
{
    ListNode *node = new ListNode();
    ListNode *current = node;
    for (int val : values)
    {
        current->next = new ListNode(val);
        current = current->next;
    }
    return node->next;
}

void printLinkedList(ListNode *head)
{
    ListNode *current = head;
    while (current)
    {
        std::cout << current->val << " ";
        current = current->next;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> values;
    for (int i = 0; i < n; ++i){
        int inp;
        cin >> inp;
        values.push_back(inp);
    }

    int left, right;
    cin >> left >> right;
    
    ListNode *head = createLinkedList(values);
    ListNode *reversed = reverseBetween(head, left, right);
    printLinkedList(reversed);

    return 0;
}
