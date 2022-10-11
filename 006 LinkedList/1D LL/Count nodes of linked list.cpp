class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        if(head==NULL) return 0;
        return getCount(head->next)+1;
    
    }
};
