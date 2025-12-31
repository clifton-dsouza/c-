#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define M 3

int queue[M];
int rear = -1,front = -1;

void enqueue(){
    int num;
    if(front == 0 && rear == M-1 || front == rear +1){
        printf("Queue is full");
        return;
    }
    if(front == -1){
        front = rear = 0;
    }else if(rear = M-1 && front != 0){
        rear = 0;
    }
    else{
        rear = (rear+1)%M;
    }
    queue[rear] = num;
}
void dequeue(){
     if(front == -1){
        printf("Queue underflow");
        return;
    }
    if(front == rear){
        front = rear = -1;

    }else{
        front = (front+1)%M;
    }
}
void display(){
     if(front == -1){
        printf("Queue underflow");
        return;
    }
    int i = front;
    while(1){
        printf("%d",queue[i]);
        if(i == rear){
            break;
        }
        i = (i+1)%M;
    }
    printf("\n");
}
int main(){
    int ch;
    while(1){
          printf("\n*** Circular Queue Menu ***\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
