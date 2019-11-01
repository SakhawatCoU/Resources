#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};
Node* Insert(Node *head,int x,int pos)
{

    int numberOfNode = 0;
    Node *t = head;
    while(t!=nullptr)
    {
        numberOfNode++;
        t = t->next;
    }
    Node *temp1 = new Node();
    temp1->val = x;
    temp1->next = nullptr;
    if(pos - numberOfNode>1)
    {
         printf("The given index is linked list size\n");
         return head;
    }
    if(pos==1) /// 1 based
    {
        temp1->next = head;
        head = temp1;
        return head;
    }
    Node *first = new Node();
    Node *temp2 = head;
    for(int i=1; i<pos; i++)
    {
        first = temp2;
        temp2 = temp2->next;
    }
    first->next = temp1;
    temp1->next = temp2;
    return head;
}

void Traverse(Node *head)
{
    Node *temp = head;
    while(temp!=nullptr)
    {
        printf("%d ",temp->val);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    Node *head = nullptr;
    int HowManyNode = 0;
    int query = 0;
    scanf("%d",&HowManyNode);
    for(int i=1;i<=HowManyNode;i++)
    {
        int nodeValue;
        scanf("%d",&nodeValue);
       head = Insert(head,nodeValue,i);
    }
    Traverse(head);
    scanf("%d",&query);
    while(query--)
    {
        int val,pos;
        scanf("%d %d",&pos,&val);
        head = Insert(head,val,pos);
    }
    Traverse(head);
    return 0;
}
