#include<bits/stdc++.h>
using namespace std;

struct Node
{
    char val;
    Node *next;
};
void traverse(Node *head)
{
    while(head!=nullptr)
    {
        printf("%c",head->val);
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

Node* Delete(Node *head)
{
    Node *temp1 = head;
    Node *t = head;
    int numberOfNode = 0;
    while(t!=nullptr)
    {
        numberOfNode++;
        t = t->next;
    }
    int position;
    position = numberOfNode/2 + 1;
    if(position==1)
    {
        head = temp1->next;
        delete temp1;
        return head;
    }
    for(int i=0;i<position - 2;i++)
        temp1 = temp1->next;
    Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2;
    return head;
}

int main()
{
    Node *head = nullptr;
    head =  Insert(head,'m');
    head =  Insert(head,'a');
    head =  Insert(head,'d');
    head =  Insert(head,'a');
    head =  Insert(head,'m');

    head = Delete(head);

    traverse(head);

    return 0;
}


