class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node* temp = new Node(x);
       temp->next=head;
       return temp;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node* temp = new Node(x);
       if(head==NULL) return temp;
       Node* tt = head;
       while(tt->next!=NULL) tt=tt->next;
       tt->next=temp;
       return head;
    }
};
