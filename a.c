#include<stdio.h>
#include<ctype.h>
#define SIZE 50

char s[SIZE] ;
int top = -1;

void push(char ch){
    s[++top] = ch;
}
char pop(){
    return s[top--];
}

int pr(char ch){
    switch(ch){
        case '#' :return 0;
        case '(' :return 1;
        case '+' :
        case '-' :return 2;
        case '*' :
        case '/' :
        case '%' :return 3;
        case '^' :return 4;
        default:return -1;

    }
}
int main(){
    char infix[50],postfix[50],ch;
    int i = 0,k = 0;

    printf("Enter the infix Expression:\n");
    scanf("%s", infix);
    push('#');

    while((ch = infix[i++]) != '\0'){
        if(isalnum(ch)){
            postfix[k++] = ch;
        }
        else if(ch == '('){
            push(ch);

        }else if(ch ==')'){
            while(s[top] != '('){
                postfix[k++] = pop();
               
            }
             pop();
        }
        else{
            while(pr(s[top]) > pr(ch) || (pr(s[top]) == pr(ch) && ch != '^')){
                 postfix[k++] = pop();

            }
            push(ch);
        }
    

}
while(s[top] != '#'){
    postfix[k++] = pop();
   
}
 postfix[k] = '\0';
printf("Postfix expression :%s\n",postfix);
return 0;
}