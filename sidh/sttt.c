#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int stk[SIZE];
int sp = -1;
void push(int);
int pop(void);
void display(void);
int main(void)
{
int opt, item;
do
{
printf("\n1. Push\n");
printf("2. Pop\n");
printf("3. Display\n");
printf("4. Exit\n");
printf("Your option: ");
scanf("%d", &opt);
switch (opt)
{
case 1:printf("Enter item: ");
scanf("%d", &item);
push(item);
break;
case 2:if (sp == -1)
{
printf("Empty stack\n");
}
else
{
                    item = pop();
                    printf("Popped value = %d\n", item);
                }
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid option\n");
        }

    } while (opt != 4);

    return 0;
}

/* Function to push an item onto the stack */
void push(int x)
{
    if (sp == SIZE - 1)
    {
        printf("Stack is full\n");
        return;
    }

    stk[++sp] = x;
}

// Function to pop an item from the stack //
int pop(void)
{
return stk[sp--];
}

//Function to display stack contents //
void display(void)
{
nt i;
if (sp == -1)
{
printf("Empty stack\n");
return;
}
printf("Stack elements are: ");
for (i = sp; i >= 0; i--)
{
printf("%d ", stk[i]);
}
printf("\n");
}

