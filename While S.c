#include <stdio.h>
    int main()
    {
        int n, i;
        printf("Table using while loop");
        printf("Enter a Number:  ");
        scanf("%d",&n);
        i=1;
        while(i<=10){
            printf("%d multiplied by %d equals to %d \n", n, i, n*i);
            ++i;
    }

    return 0;
}
