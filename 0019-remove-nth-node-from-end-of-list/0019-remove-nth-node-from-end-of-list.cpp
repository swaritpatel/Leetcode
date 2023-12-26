/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        ListNode* ptr;
        int cnt = 0;
        
        while(temp){
            temp = temp->next;
            cnt++;
            
        }
        cnt = cnt-n;
        if(cnt == 0){
            head = head->next;
            return head;
        }
        cnt -=1;
        temp = head;
        while(cnt--){
            temp = temp->next;    
        }
        // cout<<temp->val;
        // Lisy
        temp->next = temp->next->next;
        return head;
        
        
        
        
        

    }
};