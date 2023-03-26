//#define cqueue circular queue
//program to implement cqueue and do enqueue, dequeue and display.

#include<stdio.h>
#define size 5
int cq[size];    //size of cqueue.
int front=-1,rear=-1,i;     //setting the initial value as -1.
void enqueue(int n){        //function for insertion of element.
    if(front==-1&&rear==-1)front=rear=0,cq[rear]=n,    //case of empty cqueue.
            printf("Enqueueded element is : %d\n",n);
    else if((rear+1)%size==front)printf("Overflow\n");   //case of overflow.
    else rear=(rear+1)%size,cq[rear]=n,      //when cqueue is neither empty nor full.
            printf("Enqueded element is : %d\n",n);
}
void dequeue(){     //function for deletion of element.
    if(front==-1&&rear==-1)printf("underflow\n");    //case of empty cqueue.
    else if(front==rear)printf("Dequeueded element is : %d\n",    //case of single element in cqueue.
                               cq[front]),front=rear=-1;
    else printf("Dequeueded element is : %d\n",cq[front]),    //case of many element in cqueue.
            front=(front+1)%size;
}
void display(){   //function for displaying element.
    i=front;
    if(front==-1&&rear==-1)printf("underflow\n");    //case of empty cqueue.
    else{    //case of non_empty cqueue.
        printf("The element/s are : ");
        while(i!=rear){
            printf("%d, ",cq[i]);
            i=(i+1)%size;
        }
        printf("%d\n",cq[i]);
    }
}
int main(){
    int operation,element;
    char ifcontinue;
     do{
        printf("1.Enqueue\n2.Dequeue\n3.Display\n");
        printf("Enter the operation number you want to perform\n");
        scanf("%d",&operation);
        switch(operation){
        case 1:{
            printf("enter the element you want to enqueue\n");
            scanf("%d",&element);
            enqueue(element);     //calling enqueue functon and passing an integer value.
            break;
        }
        case 2:{
            dequeue();     //calling dequeue function.
            break;
        }
        case 3:{
            display();     //calling display function.
            break;
        }
        default:{
            exit(0);
        }
        }
        printf("If you want to continue press y or Y without quotes.\n");
        fflush(stdin);
        scanf("%c",&ifcontinue);
    }
    while(ifcontinue=='y'||ifcontinue=='Y');    //if we want to continue the operation.
}
