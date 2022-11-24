#include<stdio.h>
#include<stdlib.h>
int r1=0,r2=0,f1=0,f2=0,s1,s2;
int a1[0],a2[0];
void push()
{
	int k,n;
    printf("Enter an element :");
	scanf("%d",&k);	
	printf("Press 1 to push in queue1 or Press 2 to push in queue2 :");
	scanf("%d",&n);
	if(n==1)
	{
		if(r1==s1)
	    	printf("Queue 1 Overflow!!");
	    else
		    a1[r1++]=k;
	}
	else if(n==2)
	{
		if(r2==s2)
            printf("Queue 2 Overflow!!");
	    else
		    a2[r2++]=k;
	}
	else
	    printf("Invalid input! Try again.");
}
void pop()
{
	int n;
	printf("Press 1 to pop from queue1 or Press 2 to pop from queue2 :");
	scanf("%d",&n);
	if(n==1)
	{
		if(r1==f1)
	    	printf("Queue 1 Underflow!!");
	    else
		    printf("\n%d is deleted.",a1[r1--]);
	}
	else if(n==2)
	{
		if(r2==f2)
            printf("Queue 2 Underflow!!");
	    else
		    printf("\n%d is deleted.",a2[r2--]);
	}
	else
	    printf("Invalid input! Try again.");
	
}
void display()
{
	printf("\nQueue 1 : ");
	for(int i=f1;i<r1;i++)
	    printf("%d  ",a1[i]);
	printf("\nQueue 2: ");
	for(int i=f2;i<r2;i++)
	    printf("%d  ",a2[i]);
	printf("\n");
}
void main()
{
	int ch=1;
	printf("Enter size of two queues : ");
	scanf("%d %d",&s1,&s2);
	a1[s1];
	a2[s2];
	while(ch!=4)
	{
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			push();
			break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			display();
			break;
		}
		case 4:
		{
		    exit(0);
		    break;
		}
		default:
			printf("Invalid input! Enter again.");
	}
    }
}