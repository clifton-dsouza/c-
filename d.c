#include<stdio.h>
#include<stdlib.h>

struct node{
     char name[20];
    char branch[10];
    int sem;
    char usn[15];
    long int phn;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL, *temp, *ptr;

void get_details(struct node *n){
    printf("Enter the name");
    scanf("%s",n->name);

    printf("Enter Branch: ");
    scanf("%s", n->branch);

    printf("Enter Semester: ");
    scanf("%d", &n->sem);

    printf("Enter USN: ");
    scanf("%s", n->usn);

    printf("Enter Phone Number: ");
    scanf("%ld", &n->phn);
    
}

void create(){
    temp = (struct node*)malloc(izeof(struct node));
    get_details(temp);

    temp->prev = NULL;
    temp->next = NULL;
    head = temp;
}

void insert_front(){
    temp = (struct node*)malloc(izeof(struct node));
    get_details(temp);
    if (head == NULL){
        create();
        return;
    }
    temp->prev = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insert_rear(){
    temp = (struct node*)malloc(izeof(struct node));
    get_details(temp);
     if (head == NULL){
        create();
        return;
     }
     ptr = head;
     while(ptr->next !=NULL){
        ptr = ptr->next;
     }
     ptr->next = temp:
      temp->prev = ptr;
     temp->next = NULL;
    
}

void delete_front(){
     if (head == NULL){
        printf("list id empty");
        return;
     }
     temp = head;

     if(head->next == NULL){
        head = NULL;
     }else{
        head = head->next;
        head->prev = NULL:

     }

     free(head);

}
void delete_rear(){
    if (head == NULL){
        printf("list id empty");
        return;
    }

    ptr = head;

    if(ptr->next == NULL){
        head = NULL;
        free(ptr);
        return;
    }

    while (ptr->next != NULL)
    {
        ptr= ptr->next;
    }
    
    ptr->prev->next = NULL;
    free(ptr);

}