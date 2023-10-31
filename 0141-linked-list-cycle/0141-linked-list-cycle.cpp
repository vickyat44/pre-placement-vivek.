class Solution {
public:
    bool hasCycle(ListNode *head) {
	
		ListNode * temp=head;
        map<ListNode * , bool> visited;
        
        while(temp!=NULL)
        {
            if(visited[temp]==true)
                return true;
            visited[temp]=true;
            temp=temp->next;
        }
        return false;
    }
};