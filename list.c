#include<stdio.h>
#include<stdlib.h>
 typedef struct list{
    int data;
    struct list *next;
 }ll;
 ll *newnode(int val){
   ll *p = (ll *)malloc(sizeof(ll));
   p->data=val;
   p->next=NULL;
   return p;
 }
 void addfirst(ll **head){
    int val;
    printf("\nenter trye value:");
    scanf("%d",&val);
    ll *p=newnode(val);
    if(*head==NULL){
      *head=p;
      return;
    }
    p->next=*head;
    *head=p;
 }

void display(ll *head){
   ll *t=head;
   if(head==NULL){
      printf("\nthe list is empty");
      return;
   }
   while(t!=NULL){
      printf("\n%d",t->data);
          t=t->next;
   }
}
int main(){
   ll *head=NULL;
   addfirst(&head);
   addfirst(&head);
   display(head);
   return 0;
}