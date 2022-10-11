class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        unordered_map<Node*,int> map;
        while(head!=NULL){
            if(map.count(head)>=1) return true;
            map[head]++;
            head=head->next;
        }
        
        return false;
    }
};
