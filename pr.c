
#include<stdio.h>
#include<stdlib.h>

struct node {
    char name[50],branch[50],usn[50];
    int sem;
    long int phn;   
    struct node *link;
};

struct node *head = NULL;

void create(){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));

    if(temp == NULL){
        printf("memory empty");
        exit(0);
    }

    printf("***Details***\n");
    printf("Enter the name :\n");
    scanf("%s",temp->name);
    printf("USN: \n");
    scanf("%s",temp->usn);
    printf("Branch :\n");
    scanf("%s",temp->branch);
    printf("Sem:\n");
    scanf("%s",temp->sem);
    printf("phn:\n");
    scanf("%s",temp->phn);

    temp->link = NULL;

    if(head = NULL){
        head = temp;
    }else{
        temp->link = head;
        head = temp;
    }

}

void insert_front(){
    create();
}

void insert_end(){
     struct node *temp,*ptr;
    temp = (struct node*)malloc(sizeof(struct node));

    if(temp == NULL){
        printf("memory empty");
        exit(0);
    }

    printf("***Details***\n");
    printf("Enter the name :\n");
    scanf("%s",temp->name);
    printf("USN: \n");
    scanf("%s",temp->usn);
    printf("Branch :\n");
    scanf("%s",temp->branch);
    printf("Sem:\n");
    scanf("%s",temp->sem);
    printf("phn:\n");
    scanf("%s",temp->phn);

    temp->link = NULL;

     if(head = NULL){
        head = temp;
    }
    else{

    ptr=head;
    while(ptr != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
    }

}

void delete_front(){
     struct node *ptr;

    if(head == NULL){
        printf("UNDERFLOW \n");
        return;
    }
    ptr = head;
     
    head = head->link;

    printf("Deleted Data :\n");
    printf("Name:%s\n,USN:%s\n,Branch:%s\n,sem:%d\n,Phno:%ld",ptr->name,ptr->usn,ptr->branch,&ptr->sem,&ptr->phn);
     
    free(ptr);

}

void delete_end(){
    struct node *ptr,*prev;

    if(head == NULL){
        printf("UNDERFLOW \n");
        return;
    }

    if(head->link == NULL){
         printf("Deleted Data :\n");
    printf("Name:%s\n,USN:%s\n,Branch:%s\n,sem:%d\n,Phno:%ld",head->name,head->usn,head->branch,&head->sem,&head->phn);
     
    free(head);
    head = NULL;
    return;
    }

    prev = NULL;
    ptr = head;

    while(ptr->link != NULL){
        prev = ptr;
        ptr = ptr->link;

    }
    prev->link = NULL;

    printf("Deleted Data :\n");
    printf("Name:%s\n,USN:%s\n,Branch:%s\n,sem:%d\n,Phno:%ld",ptr->name,ptr->usn,ptr->branch,&ptr->sem,&ptr->phn);
     
    free(ptr);


}

void display(){
    struct node *ptr;

    int count = 0;
     if(head == NULL){
        printf("List is empty \n");
        return;
    }
    ptr = head;
    printf("Student Details:\n");
    while(ptr != NULL){
       
        printf("Name:%s\n,USN:%s\n,Branch:%s\n,sem:%d\n,Phno:%ld",ptr->name,ptr->usn,ptr->branch,&ptr->sem,&ptr->phn);
     
        count++;
        ptr = ptr->link;

    }
    printf("The total number of nodes =%d",&count);
}

int main(){
    int ch;
    while(1){
         printf("\n*** SELECT OPTION ***\n");
        printf("1. Create\n");
        printf("2. Insert Front\n");
        printf("3. Insert End\n");
        printf("4. Delete Front\n");
        printf("5. Delete End\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("enter the choice");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1: create(); break;
        case 2: insert_front(); break;
        case 3: insert_end(); break;
        case 4: delete_front(); break;
        case 5: delete_end(); break;
        case 6: display(); break;
        case 7: exit(0);
        default: printf("INVALID OPTION\n");
        }
    }
    return 0;
}