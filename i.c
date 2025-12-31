#define m 10
#include <stdio.h>
#include <stdlib.h>

int a[m];

void init(){
    for(int i = 0;i < m;i++){
        a[i] = -1;
    }
}

void insert(){
    int key,index,i;

    printf("Enter the key");
    scanf("%d",key);

    for(int i = 0;i<m;i++){
        index = (key % m + i)%m;

        if(a[index] == -1){
            a[index] = key;
            printf("Inserted at index %d",index);
            return;
        }
    }
}

void display(){
    printf("Elements in the hash table\n");
    for(int i = 0;i<m;i++){
        if(a[i] == -1){
            printf("index %d:empty",i);
        } else{
            printf("Index %d : %d\n", i, a[i]);
    }
    }}

    int main() {
    int op;

    init();

    do {
        printf("\n1. Insert\n2. Display\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    } while (1);

    return 0;
}
