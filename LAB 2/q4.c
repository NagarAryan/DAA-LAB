#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
    int data;
    struct TreeNode *left, *right;
    int is_leaf;
} TreeNode;

TreeNode *make_treenode(int data)
{
    TreeNode *node = (TreeNode *)calloc(1, sizeof(TreeNode));
    node->data = data;
    node->left = node->right = NULL;
    node->is_leaf = 1;
    return node;
}

TreeNode *insert_bst(TreeNode *root, int data)
{
    if (!root)
    {
        root = make_treenode(data);
        return root;
    }
    else
    {

        TreeNode *node = make_treenode(data);
        TreeNode *temp = root;
        while (temp)
        {
            if (temp->is_leaf)
            {

                if (temp->data > data)
                {

                    temp->left = node;
                    temp->is_leaf = 0;
                    break;
                }
                else
                {

                    temp->right = node;
                    temp->is_leaf = 0;
                    break;
                }
            }
            else
            {

                if (temp->data > data)
                {

                    if (temp->left == NULL)
                        temp->left = node;
                    break;
                }
                temp = temp->left;
            }
            else
            {

                if (temp->right == NULL)
                {
                    temp->right = node;
                    break;
                }
                temp = temp->right;
            }
        }
    }
}
void print_bst(TreeNode *root)
{
    if (!root)
        return;
    print_bst(root->left);
    printf("Node: %d -> ", root->data);
    print_bst(root->right);
}

int main()
{
        int n;

    while (n != 0)
    {
        printf("Enter the value 1 to enter into the BST and 0 to stop");
        scanf("%d", &n);
        if(choice==1)
        {
TreeNode *root = make_treenode(45);
root = insert_bst(root, 20);
    }
    else
    print_bst(root);

    return 0;
}
