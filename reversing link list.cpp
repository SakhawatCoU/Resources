#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};
void traverse(Node *head)
{
    while(head!=nullptr)
    {
        printf("%d ",head->val);
        head = head->next;
    }
}

Node*  Insert(Node *head,int x)
{
    Node *temp1 = new Node();
    temp1->val = x;
    temp1->next = nullptr;
    Node *temp2 = head;

    if(head==nullptr)
    {

        temp1->next = head;
        head = temp1;
        return head;
    }
    while(temp2->next!=nullptr)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
    return head;

}
Node* Reverse(Node *head)
{
    Node *currentNode = head;
    Node *nextNode = nullptr, *previousNode = nullptr;
    while(currentNode!=nullptr)
    {
        nextNode = currentNode->next;
        currentNode->next = previousNode;
        previousNode = currentNode;
        currentNode = nextNode;
    }
    head = previousNode;
    return head;
}


int main()
{
    Node *head = nullptr;
    head =  Insert(head,2);
    head =  Insert(head,4);
    head =  Insert(head,6);
    head =  Insert(head,8);
    head =  Insert(head,10);

    head = Reverse(head);

    traverse(head);

    return 0;
}

