#include <iostream>
#include <stdlib.h>

typedef union Data {
    short num1;
    int num2;
}data;

int main()
{
		data *d1 = (data*)malloc(sizeof(data));

    d1->num2 = 1;

    printf("%d %d\n", d1->num1, d1->num2);

    free(d1);

    return 0;
}
