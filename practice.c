#include<stdio.h>
#include<stdlib.h>

struct BST{
    int data;
    struct BST *left,*right;
};
typedef struct BST NODE;

NODE *createTree(NODE *node,int data){
    if(node == NULL){
        NODE *temp = (NODE*) malloc(sizeof(NODE));
        temp->data = data;
        temp->left = temp ->right = NULL;
        return temp;
    }

    if(data < node->data){
        node->left = createTree(node->left,data);
    }
    else if (data > node->data){
        node->right = createTree(node->right,data);
    }else{
        printf("Duplication of data");
    }
    return node;
}

NODE *searchTree(NODE *node,int data){
    if(node == NULL){
        printf("Element is not found");
    }
   else if(data < node->data){
        node->left = searchTree(node->left,data);
    }
    else if (data > node->data){
        node->right = searchTree(node->right,data);
    }else{
        printf("Element is not found");
    }
    return node;
}

void preorder(NODE *node){
    if (node != NULL) {
        printf("%d ", node->data);
        preorder(node->left);
        preorder(node->right);
    }
}


void inorder(NODE *node){
     if(node != NULL){
    inorder(node->left);
    printf("%d" , node->data );
    inorder(node->right);
     }
}

void postorder(NODE *node){
    if(node != NULL){
    postorder(node->left);
    postorder(node->right);
    printf("%d" , node->data );

    }
    
}

void main(){
    int data,i,n;
    NODE *root = NULL;
    int a[20];
    int ch;
   

    do{
         printf("1.\n2.\n3.\n4.\n5.\n");
        printf("Enter the choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the number of element");
                scanf("%d",&n);
                for(i = 0;i<n;i++){
                    printf("Enter the data");
                    scanf("%d",&a[i]);
                    root=createTree(root,a[i]);  
                    }                     
                break;
            
            case 2:
                printf("Entert the element to be searched ");
                scanf("%d",&data);
                root = searchTree(root,data);
                break;
               
            case 3:
                inorder(root);
                break;
                
            case 4:
                postorder(root);
                break;
            
            case 5:
                exit(0);
        }

    }while(1);
}
