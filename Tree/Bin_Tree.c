#include<stdio.h>
#include<stdlib.h>

typedef struct treenode 
{
    int value;
    struct treenode *left;
    struct treenode *right;
}treenode;

treenode* createnode(int value)
{
    treenode *result = malloc(sizeof(treenode));
    if(result != NULL)
    {
        result->left = NULL;
        result->right = NULL;
        result->value = value;
    }
    return result;
}

void printtree(treenode *root)
{
    if(root == NULL)
    {
        return;
    }
    printf("%d ", root->value);
    printtree(root->left);
    printtree(root->right);
}

int main()
{
    treenode *t1 = createnode(10);
    treenode *t2 = createnode(11);
    treenode *t3 = createnode(12);
    treenode *t4 = createnode(13);
    treenode *t5 = createnode(14);

    t1->left = t2;
    t1->right = t3;
    t3->left = t4;
    t3->right = t5;

    printtree(t1);
    free(t1);
    free(t2);
    free(t3);
    free(t4);
    free(t5);
}