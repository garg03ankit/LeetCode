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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>result(k,nullptr);
            int length =0;
        ListNode* current = head;
        while(current!= nullptr){
            ++length;
            current = current->next;
        }
       int minps=length/k;
        int extnode= length%k;
        
        current = head;
        for(int i=0;i<k;++i){
            {
            ListNode* Parthead = current;
            
            int currentPartSize = minps + (i < extnode ? 1 : 0);

            for (int j = 0; j < currentPartSize - 1; ++j) {
                if (current != nullptr) {
                    current = current->next;
                }
            }

           
            if (current != nullptr) {
                ListNode* nextparthead = current->next;
                current->next = nullptr;
                current = nextparthead;
            }

     
            result[i] = Parthead;
        }
        }
        return result;
}
};