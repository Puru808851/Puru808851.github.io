#include<stdio.h>
#include<stdlib.h>
#define max 4
void insert(char q[],int *r,int *count)
{
char item;
if(* count==max)
{
printf("queue is overflow\n");
}
else
{
*r=(*r+1)%max;
printf("enter the element to be insert\n");
scanf(" %c",&item);
q[*r]=item;
(*count)++;
}
}
void deleteq(char q[],int *f,int *count)
{
if(*count==0)
{
printf("queue is under flow\n");
}
else
{
printf("deleted element is %c\n",q[*f]);
*f=(*f+1)%max;
(*count)--;
}
}
void display(char q[],int f,int count)
{
int i,j;
if(count==0)
{
printf("queue underflow");
}
else
{
j=f;
printf("queue element are: \n");
for(i=0;i<count;i++)
{
printf("%c\n",q[j]);
j=(j+1)%max;
}
}
}
void main()
{
char q[max];
int f=0,r=-1,count=0,ch;
while(1)
{
printf("main menu");
printf("1.insert an element\n2.delete an element\n3.dispaly the contents\n4.exit");
printf("\n enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:insert(q,&r,&count);
//display(q,f,count);
break;
case 2:deleteq(q,&f,&count);
break;
case 3:display(q,f,count);
break;
case 4:exit(r);
break;
default:printf("enter a valid choice");
break;
}
}
}
