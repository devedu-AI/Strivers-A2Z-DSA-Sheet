Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(head==NULL) return head;
    if(x==1) return head->next;
    Node* temp = deleteNode(head->next,x-1);
    head->next=temp;
    return head;
}
