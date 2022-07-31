#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

void inorderTraverse(struct Node *root)
{

    if (root == NULL)
    {
        return;
    }

    inorderTraverse(root->left);
    printf("%d ", root->data);
    inorderTraverse(root->right);
}

int  maxElement(struct Node*root){
    if(root->right==NULL){
        return root->data;

    }
  maxElement(root->right);

}

int  minElement(struct Node*root){
    if(root->left==NULL){
        return root->data;

    }
  minElement(root->left);

}

struct Node *insert(struct Node *root, int data)
{

    if (root == NULL)
    {
        struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    else if (root->data < data)
    {

        root->right = insert(root->right, data);
    }
    else if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
}

int main()
{

    struct Node *root = NULL;
    int input;
    int counter = 0;

    do
    {

        counter++;
        printf("\nPress 0 to exit\nPress 1 to insert a node\nPress 2 to traverse the tree\nPress 3 to find the max Element\nPress 4 to find the min Element\n");
        scanf("%d", &input);
        if (input == 1)
        {
            int temp;

            printf("Enter the value of the node\n");
            scanf("%d", &temp);
            if (counter == 1)
            {
                root = insert(root, temp);
            }
            else
            {
                insert(root, temp);
            }
        }
        else if (input == 2)
        {
            inorderTraverse(root);
        }else if(input==3){
            int res=maxElement(root);
            printf("%d\n",res);
        }else if(input==4){
            int res=minElement(root);
            printf("%d\n",res);
        }

    } while (input != 0);

}