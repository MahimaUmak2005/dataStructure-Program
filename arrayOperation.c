#include <stdio.h>
// #include<stdbool.h>
#include <stdlib.h>
int n, arr[10];
int main()
{

    printf("Enter the size =");
    scanf("%d", &n);
    printf("Enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (1)
    {

        printf("\n1.Insert element at 1st position");
        printf("\n2.Insert element at nth position");
        printf("\n3.Insert element at Last position");
        printf("\n4.Delete element from 1st position");
        printf("\n5.Delete element from nth position");
        printf("\n6.Delete element from Last position");
        printf("\n7.Replacement");
        printf("\n8.Display");
        printf("\n9.Exit");

        int choice;
        printf("\nEnter the choise = ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the value = ");
            int value;
            scanf("%d", &value);
            for (int i = n; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[0] = value;
            n++;
            break;

        case 2:
            printf("\nEnter the value = ");
            int value1;
            scanf("%d", &value1);
            int position;
            printf("Enter the position = ");
            scanf("%d", &position);
            for (int i = n; i >= position; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[position - 1] = value1;
            n++;
            break;

        case 3:
            printf("Enter the value = ");
            int value2;
            scanf("%d", &value2);
            arr[n] = value2;
            n++;
            break;

        case 4:
            if (n <= 0)
            {
                printf("Array is empty");
            }
            else
            {
                printf("The deleted element is %d", arr[0]);
                for (int i = 0; i < n; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
            }
            break;

        case 5:
            if (n <= 0)
            {
                printf("Array is empty");
            }
            else
            {
                int position1;
                printf("Enter the position = ");
                scanf("%d", &position1);
                printf("The deleted element is %d", arr[position1 - 1]);
                for (int i = position1 - 1; i < n; i++)
                {
                    arr[i] = arr[i + 1];
                }
                n--;
            }
            break;

        case 6:
            if (n <= 0)
            {
                printf("Array is empty");
            }
            else
            {
                printf("The deleted element is %d", arr[n - 1]);
                n--;
            }
            break;

        case 7:
            int value3;
            printf("\nEnter the value = ");
            scanf("%d", &value3);
            int position2;
            printf("\nEnter the position = ");
            scanf("%d", &position2);
            arr[position2 - 1] = value3;
            break;

        case 8:
            if (n <= 0)
            {
                printf("Array is empty");
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
            }
            break;

        case 9:
            exit(0);
            break;

        default:
            printf("Invalid choice");
        }
    }
    return 0;
}