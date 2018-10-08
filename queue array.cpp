#include<stdio.h>
#define size 5
void enqueue(int value);
void dequeue(void);
void Display(void);

int arr[size];
int front=-1;
int rear=-1;
main(){
	int choice,marks;
	do{
	printf("\nEnter your choice:\n 1-Insert Data\t 2-Display Data \n 3-Delete Data\t 4-Exit \n");
	scanf("%d",&choice);
		switch(choice){
			case 1:{
				enqueue(marks);
				break;
			}
			case 2:{
				Display();
				break;
			}
			case 3:{
				dequeue();
				Display();
				break;
			}
			default:
				printf("Wrong Input");
		}
	}
	while(choice!=4);
}

void enqueue(int value){
	if(rear==size-1)
	printf("QUEUE UNDERFLOW\n");
	else{
		if(front==-1)
		front=0;
		printf("Enter marks:\t");
		scanf("%d",&value);		
		arr[++rear]=value;
	}
}
void dequeue(void){
if (front==-1 && rear==-1)
printf("Queue is empty");
else{
	front++;
}	
}
void Display(void){
	if(front==-1 && rear==-1){
		printf("List is empty");
	}
	else{
	printf("\n********Queue********\n");
	for (int i=front;i<=rear;i++){
		printf("\n Marks:%d",arr[i]);
	}
	printf("\n\n");
}
}

