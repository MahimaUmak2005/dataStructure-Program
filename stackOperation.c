#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Top = -1, Stack[10], x, n;
    printf("Enter the size of Stack= ");
    scanf("%d", &n);

    while (1)
    {
        printf("\n1.Push :Enter the element in stack");
        printf("\n2.Pop :Delete the element from stack");
        printf("\n3.Peek :Show top most element");
        printf("\n4.Underflow :Check weather the stack is empty");
        printf("\n5.Overflow :Check weather the stack is full");
        printf("\n6.Display ");
        printf("\n7.Exit");
        printf("\n");
        int choice;
        printf("\nEnter the choice= ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Creating stack
            if (Top == n - 1)
            {
                printf("Overflow!!\n");
            }
            else
            {
                printf("Enter the element= ");
                scanf("%d", &x);
                Top++;
                Stack[Top] = x;
            }
            break;

        case 2:
            // free(Stack[Top]);
            if (Top == -1)
            {
                printf("Underflow!!");
            }
            else
            {
                printf("Deleted element is %d", Stack[Top]);
                Top--;
            }
            break;

        case 3:
            if (Top == -1)
            {
                printf("Underflow!!");
            }
            else
            {
                printf("\nTop most element is = %d", Stack[Top]);
            }
            break;
        case 4:
            if (Top == -1)
            {
                printf("Underflow!!");
            }
            else
            {
                printf("Not Underflow!!");
            }
            break;

        case 5:
            if (Top == n - 1)
            {
                printf("Overflow!!");
            }
            else
            {
                printf("Not Overflow!!");
            }
            break;

        case 6:
            if (Top == -1)
            {
                printf("Underflow!!");
            }
            else
            {
                for (int i = Top; i >= 0; i--)
                {
                    printf("\n%d", Stack[i]);
                }
            }
            break;

        case 7:
            exit(0);

        default:
            printf("Invalid choice");
        }
    }

    return 0;
}
