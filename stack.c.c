#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <process.h>
#define SIZE 5
int stack[SIZE],iteam,top=-1;
void push(int item);
int pop();
int peek();
void travers();
int main(){
int choice,item;
char ch;
do{
printf("\nSelect your option");
printf("\nPress 1 for push");
printf("\nPress 2 for pop");
printf("\nPress 3 for peek");
printf("\nPress 4 for traverse");
printf("\nPress 5 for exit");
printf("\nSelect your option-");
scanf("%d",&choice);
switch(choice){
case 1: printf("\nEnter element to enter in stack-");
        scanf("%d",&item);
        push(item);
        break;
case 2: item=pop();
        printf("\nPopped item is %d",item);
        break;
case 3: printf("\nItem at the top is %d",peek());
        break;
case 4: travers();
        break;
case 5: exit(0);
default:printf("\nSelect a valid option");
}
fflush(stdin);
printf("\nDo you want to continue (y/n)");
scanf("%c",&ch);
}
while(ch=='y' || ch=='Y');
}

void push(int item){
if(top==SIZE-1){
    printf("\nStack is overflow");
}
else{
    top++;
    stack[top]=item;
}
}
void travers(){
if(top==-1){
    printf("\nStack is empty");
}
else{
    int i;
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
    printf("\n");
}
}
int pop(){
if(top==-1){
    printf("\nStack is empty");
}
else{
    int item;
    item = stack[top];
    top=top-1;
    return item;
}
}
int peek(){
if(top==-1){
    printf("\nStack is empty");
}
else{
    return stack[top];
}
}

