#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};


struct node* createNode(int a){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = a;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}


struct node* insert(struct node* root, int data)
{
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left  = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

void inorder(struct node* root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    printf("%d ,", root->data);
    inorder(root->right);
}
int main()
{
    struct node *root =NULL;
    int n1,n2,a;
    printf("enter the number of arrays");
    root=insert(root,0);
    scanf("%d",&n1);
    for (int i=1;i<=n1;i++)
    {
        printf("enter the size of array");
        scanf("%d",&n2);
        for(int i=1;i<=n2;i++)
        {
            scanf("%d",&a);
            insert(root,a);
        }
    }
    inorder(root);
}
