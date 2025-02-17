#include <stdio.h>
int main() {
    int n ;
    scanf("%d" ,&n);
    if (n % 2 != 0) {
        printf("Wrong input");
    } else {for (int i = 1 ; i <= n; i +=2)
    {
        printf("*+");}
    }
    return 0;
}

