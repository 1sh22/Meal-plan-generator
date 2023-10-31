/*2) Design, Develop and Implement a menu driven Program in C for the following operations
on STACK of Integers (Array Implementation of Stack with maximum size MAX).
1. Push an Element on to Stack
2. Pop an Element from Stack
3. Demonstrate how stack can be used to check palindrome
4. Demonstrate Overflow and Underflow situations on Stack
5. Display the status of Stack
6. Exit*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int s[MAX];
int top = -1;

void push(int item);
int pop();
void palindrome();
void display();

int main()
{
    int choice, item;
    while (1)
    {
        printf("\n 1:push 2:pop  3.palindrome 4.Display 5. exit\n ");
        scanf("%d", &choice);
        switch (choice) 
        {
        case 1:
            printf("\nEnter an element to be pushed: ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            item = pop();
            if (item != -1)
                printf("\nElement popped is: %d", item);
            break;
        case 3:
            palindrome();
            
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
        default:
            printf("\nPlease enter valid choice ");
            break;
        }
        return 0;
    }
}

void push(int item)
{
    if (top == MAX - 1)
    {
        printf("\nStack overflow");
        return;
    }

    top = top + 1;
    s[top] = item;
}

int pop()
{
    int item;
    if (top == -1)
    {
        printf("\nStack underflow");
        return -1;
    }
    item = s[top];
    top = top - 1;
    return item;
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("\nStack is empty");
        return;
    }
    printf("\nStack elements are:\n ");
    for (i = top; i >= 0; i--)
        printf("%d\n", s[i]);
}

void palindrome()
{
    int flag = 1, i;
    printf("\nStack content are:\n");
    for (i = top; i >= 0; i--)
        printf("%d \n", s[i]);

    printf("\nReverse of stack content are:\n");
    for (i = 0; i <= top; i++)
        printf(" %d \n", s[i]);

    for (i = 0; i <= top / 2; i++)
    {
        if (s[i] != s[top - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("\nIt is palindrome number");
    }
    else
    {
        printf("\nIt is not a palindrome number");
    }
}
