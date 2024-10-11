#include<stdio.h>

int main()
{
    int tc, num;
    scanf("%d", &tc); 

    while (tc--)
    {
        scanf("%d", &num); 
        printf("%d\n", (num % 10) + (num / 10));
    }
}