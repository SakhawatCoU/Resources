#include<bits/stdc++.h>
using namespace std;
struct Node{

    int data;
    Node *left;
    Node *right;
};

Node *createNode(int item)
{
    Node *new_node = new Node();
    if(new_node == nullptr)
    {
        printf("Error !!!\n");
        exit(1);
    }
    new_node->data = item;
    new_node->left = nullptr;
    new_node->right = nullptr;
    return new_node;
}

void add_left_child(Node *node, Node *child)
{
    node->left = child;
}

void add_right_child(Node *node, Node *child)
{
    node->right = child;
}

Node *create_tree()
{
    Node *two = createNode(2);
    Node *seven = createNode(7);
    Node *nine = createNode(9);
    Node *one = createNode(1);

    add_left_child(two,seven);
    add_right_child(two,nine);
    add_left_child(nine,one);
    return two;

}

int main()
{
    Node *root = create_tree();

    cout<<root->right->left->data<<endl;
    return 0;
}
