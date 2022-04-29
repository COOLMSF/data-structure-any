#include <stdio.h>
#include <stdint.h>

#include "select_sort.h"

#define MAX_ELEMENT 5

int main(int argc, char const* argv[])
{
    double arr[MAX_ELEMENT] = { 0.0 };

    for (int i = 0; i < MAX_ELEMENT; i++)
        scanf("%lf", arr + i);

    select_sort(arr, MAX_ELEMENT, sizeof(arr), compare_func_int);

    for (int i = 0; i < MAX_ELEMENT; i++)
       printf("%lf ", arr[i]);
}

