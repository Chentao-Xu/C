#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};

int main()
{
    struct node * head = NULL,* p,* q,* t;
    int n,a,i;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&a);
        p = (struct node *)malloc(sizeof(struct node));
        p -> data = a;
        p -> next = NULL;
        if (head == NULL)
            head = p;
        else{
            q -> next = p;
        }
        q = p;
    }
    t = head;
    scanf("%d",&a);
    p = (struct node *)malloc(sizeof(struct node));
    p -> data = a;
    while(t != NULL){
        if (t -> next -> data > a){
            p -> next = t -> next;
            t -> next = p;
            break;
        }
        t = t -> next;
    }
    t = head;
    while(t != NULL){
        printf("%d ",t -> data);
        t = t-> next;
    }
    return 0;
}