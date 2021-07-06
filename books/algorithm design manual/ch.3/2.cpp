#include <stack>
//link to same problem on leetcode: 

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseList(ListNode* head) {
    if(head == nullptr){return nullptr;}
    
    ListNode* temp = head;
    std::stack<int> s;
    
    while(temp != nullptr)
    {
        s.push(temp->val);
        temp = temp->next;
    }
    
    ListNode* newHead = new ListNode(s.top());
    temp = newHead;
    while(s.size() > 0)
    {
        temp->val = s.top();
        if(s.size() == 1){temp->next=nullptr;}
        else{temp->next = new ListNode();}
        s.pop();
        temp = temp->next;
    }
    return newHead;
}
