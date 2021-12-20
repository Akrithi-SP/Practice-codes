/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* stack implementation using static array*/
#include <stdio.h>
#include<stdlib.h>
#define CAPACITY 5		// pre-processor macro
int stack[CAPACITY], top = -1;	//GLOBAL VARIABLE
void push (int);
int pop (void);
int isFull (void);
int isEmpty (void);
void traverse (void);
void peek (void);
void
main (void)
{
  int ch, item;
  while (1)
    {
      printf ("1.Push\n");
      printf ("2.Pop\n");
      printf ("3.Peek\n");
      printf ("4.Traverse\n");
      printf ("5.Quit\n");

      printf ("Enter your choice:\n");
      scanf ("%d", &ch);


      switch (ch)
	{
	case 1:
	  printf ("enter element\n");
	  scanf ("%d", &item);
	  push (item);
	  break;
	case 2:
	  item = pop ();
	  if (item == 0)
	    {
	      printf ("stack is underflow\n");
	    }
	  else
	    {
	      printf ("popped item is %d\n", item);
	    }
	  break;
	case 3:
	  peek ();
	  break;
	case 4:
	  traverse ();
	  break;
	case 5:
	  exit (0);
	default:
	  printf ("Invalid input\n");
	}
    }

}

void
push (int ele)
{
  if (isFull ())
    {
      printf ("Stack is full\n");
    }
  else
    {
      top++;
      stack[top] = ele;
      printf ("%d is pushed\n", ele);
    }
}

int
isFull ()
{
  if (top == CAPACITY - 1)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

int
pop ()
{
  if (isEmpty ())
    {
      return 0;
    }
  else
    {
      return stack[top--];	// (using post decrement) 
    }
}

int
isEmpty ()
{
  if (top == -1)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}

void
peek ()
{
  if (isEmpty ())
    {
      printf ("stack is empty\n");
    }
  else
    {
      printf ("peek element : %d \n", stack[top]);
    }
}

void
traverse ()
{
  if (isEmpty ())
    {
      printf ("stack is empty\n");
    }
  else
    {
      printf ("stack elements are : \n");
      for (int i = 0; i <= top; i++)
	{
	  printf ("%d \n", stack[i]);
	}

    }

}
