#include <stdio.h>

int n = 0, buffersize = 0, currentsize = 0;

void producer()
{
    printf("\nEnter number of elements to be produced: ");
    scanf("%d", &n);

    if (currentsize + n <= buffersize)
    {
        currentsize += n;
        printf("%d elements in buffer (Max size: %d)\n", currentsize, buffersize);
    }
    else
    {
        printf("\nBuffer is not sufficient\n");
    }
}

void consumer()
{
    int x;
    printf("\nEnter no. of elements to be consumed: ");
    scanf("%d", &x);

    if (currentsize >= x)
    {
        currentsize -= x;
        printf("\nConsumed: %d, Remaining: %d\n", x, currentsize);
    }
    else
    {
        printf("\nCannot consume more than produced elements\n");
    }
}

int main()
{
    int c;

    printf("\nEnter maximum size of buffer: ");
    scanf("%d", &buffersize);

    do
    {
        printf("\n1. Producer\n2. Consumer\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            if (currentsize >= buffersize)
                printf("\nBuffer is full. Cannot produce\n");
            else
                producer();
            break;

        case 2:
            if (currentsize <= 0)
                printf("\nBuffer is empty. Cannot consume\n");
            else
                consumer();
            break;

        case 3:
            printf("\nExiting...\n");
            break;

        default:
            printf("\nInvalid choice\n");
        }

    } while (c != 3);

    return 0;
}
