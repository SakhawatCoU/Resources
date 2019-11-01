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
    Node *temp = new Node();
    temp->val = x;
    temp->next = nullptr;
    if(head!=nullptr)
        temp->next = head;
    head = temp;

    return head;

}

int main()
{
    Node *head = nullptr;
    head =  Insert(head,2);
    head =  Insert(head,4);
    head =  Insert(head,6);

    traverse(head);

    return 0;
}
