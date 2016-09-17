#include <stdio.h>

#include <conio.h>

#define size 5

int queue[5][2] = {0};

int top = -1;

int bottom;

void push(int value, int pr)

{

int i,j,k;

if(top < size-1)

{

if(queue[top][1] > pr)

{

for(i=0;i<top;i++)

{

if(queue[i][1] > pr)

{

break;

}

}

for(j=top;j>=i;j--)

{

queue[j+1][0] = queue[j][0];

queue[j+1][1] = queue[j][1];

}

top++;

queue[i][0] = value;

queue[i][1] = pr;

}

else

{

top++;

queue[top][0] = value;

queue[top][1] = pr;

}

}

else

{

printf("queue overflow \n");

}

}

void pop()

{

int i;

if(queue[0][0] == 0)

{

printf("\n The queue is empty  \n");

}

else

{

printf("After , dequeue the following value is erased \n  %d \n", queue[0][0]);

for(i=0;i<top;i++)

{

queue[i][0] = queue[i+1][0];

queue[i][1] = queue[i+1][1];

}

queue[top][0] = 0;

queue[top][1] = 0;

top--;

}

}

void display()

{ int i,j;

printf("Element\tPriority \n");

for(i=size - 1;i>=0;i--)

{

for(j=0;j<2;j++)

{

printf(" %d\t",queue[i][j]);

}

printf("\n");

}

}

int main()

{

int i,j, ch=0 ,value = 0,pr=0;

while(1)

{

printf("\n Please Enter the choice. \n");

printf("1 for Enqueue \n 2 for Dequeue \n 3 for display\n  5 for exit: \t \n");

scanf("%d",&ch);

switch(ch)

{

case 1:

printf("\n Please Enter the number to be inserted: \t ");

scanf("%d", &value);

printf("\n Please Enter the priority: \t ");

scanf("%d", &pr);

push(value,pr);

break;

case 2:

pop();

break;

case 3:

display();

break;

case 5:

exit(0);

default:

printf("You entered wrong choice\n");

}

}

}

Email This
BlogThis!
Share to Twitter
Share to Facebook
Share to Pinterest

