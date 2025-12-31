#include<stdio.h>
#include<stdlib.h>

struct BST{
    int data;
    struct BST *right,*left;

};
typedef struct BST NODE;

NODE* createTree(NODE *root,int data){
    if(root == NULL){
        NODE *temp = (NODE*)malloc(sizeof(NODE));
        temp ->data = data;
        temp->right = NULL;
        temp->left = NULL;
        return temp;
    }

    if(data < root->data){
        root->left = createTree(root->left,data);
    }
    else if(data > root->data){
        root->right = createTree(root->right,data);
    }else{
        printf("dupilcate data not found\n");
    }
    
return root;

    
}

NODE* searchTree(NODE *root,int data){
    if(root == NULL){
        printf("Element not found");
        return NULL;
    }

    if(data == root->data){
        printf("Element found");
        return root;

    }

    if(data < root->data){
        return searchTree(root->left,data);
    }else{
        return searchTree(root->right,data);
    }
}

    void inorder(NODE *root){
        if(root != NULL){
            inorder(root->left);
            printf("%d ", root->data);
            inorder(root->right);
        }
        
    }

    void preorder(NODE *root){
        if(root != NULL){
            printf("%d ", root->data);
            preorder(root->left);
            preorder(root->right);
        }
        
    }

 void postorder(NODE *root){
        if(root != NULL){
           
            postorder(root->left);
            postorder(root->right);
             printf("%d ", root->data);
        }
    }

    int main(){
        NODE *root = NULL;
        int data,ch,n;
         do
    {
        printf("\n1. Insert");
        printf("\n2. Search");
        printf("\n3. Inorder");
        printf("\n4. Preorder");
        printf("\n5. Postorder");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the nodes\n");
            scanf("%d",&n);
            printf("Enter the values\n");
            for (int i = 0;i < n;i++){
                scanf("%d",&data);
                root = createTree(root,data);
            }
            break;

        case 2:
            printf("Enter element to search: ");
            scanf("%d", &data);
            searchTree(root, data);
            break;

        case 3:
            printf("Inorder Traversal: ");
            inorder(root);
            break;

        case 4:
            printf("Preorder Traversal: ");
            preorder(root);
            break;

        case 5:
            printf("Postorder Traversal: ");
            postorder(root);
            break;

        case 6:
            exit(0);

        default:
            printf("Wrong option\n");
        }
    } while (1);

    return 0;
}
    