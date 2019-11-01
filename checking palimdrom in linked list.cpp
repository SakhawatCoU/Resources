#include<bits/stdc++.h>
using namespace std;

struct Node{

   char val;
   Node *next;
};

Node* Insert(Node *head, char x)
{
    Node *temp1 = new Node();
    temp1->val = x;
    temp1->next = nullptr;
    Node *temp2 = head;

    if(head==nullptr)
    {
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

void traverse(Node *head)
{
    while(head!=nullptr)
    {
        printf("%c",head->val);
        head = head->next;
    }
}

bool IsPalimdrom(Node *head)
{
    bool ok = true;
    Node *tempNode = head;
    stack<char>st;
    while(tempNode!=nullptr)
    {
        st.push(tempNode->val);
        tempNode = tempNode->next;
    }
    int tp;
    while(head!=nullptr)
    {
        tp = st.top();
        if(tp!=head->val)
        {
            ok = false;
            break;
        }
        head = head->next;
        st.pop();
    }
    return ok;


    return true;

}

int main()
{
    Node *head = nullptr;
    char str[109];
    scanf("%s",&str);
    int ln = strlen(str);
    for(int i=0;i<ln;i++)
    {
        head = Insert(head,str[i]);
    }
   // traverse(head);
   if(IsPalimdrom(head))
   {
       printf("Palindrome\n");
   }
   else
       printf("Not Palindrome\n");
    return 0;
}
