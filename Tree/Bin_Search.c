#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

int search(treenode *root, int val)
{
    if(root == NULL)
    {
        return 0;
    }
    else if(root->value == val)
    {
        return 1;
    }
    else if(root->value > val)
    {
        return search(root->left, val);
    }
    else if(root->value < val)
    {
        return search(root->right, val);
    }
}

int main()
{
    treenode *t1 = createnode(20);
    treenode *t2 = createnode(15);
    treenode *t3 = createnode(23);
    treenode *t4 = createnode(21);
    treenode *t5 = createnode(27);

    t1->left = t2;
    t1->right = t3;
    t3->left = t4;
    t3->right = t5;

    // printtree(t1);
    int val;
    printf("Enter the value to be searched: ");
    scanf("%d", &val);
    int found = search(t1,val);
    if(found == 0)
        printf("Not found");
    else
        printf("Found");

    free(t1);
    free(t2);
    free(t3);
    free(t4);
    free(t5);
}