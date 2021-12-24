/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
   struct ListNode *slow, *fast;
	slow=head;
	fast=head->next;

	while(fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	if(fast==NULL)
	return slow;
    else
    return  slow->next;
}