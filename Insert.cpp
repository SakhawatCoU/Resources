#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *next;
};
void traverse(node *head)
{
    while(head!=nullptr)
    {
        printf("%d ",head->val);
        head = head->next;
    }
}

node*  Insert(node *head,int x)
{
    node *temp = new node();
    temp->val = x;
    temp->next = nullptr;
    if(head!=nullptr)
        temp->next = head;
    head = temp;

    return head;

}

int main()
{
    node *head = nullptr;
    head =  Insert(head,2);
    head =  Insert(head,4);
    head =  Insert(head,6);

    traverse(head);

    return 0;
}
