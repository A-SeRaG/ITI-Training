#include <stdio.h>

// 1) Write a C function to return the index of LAST occurrence of a number in a
// given array. Array index start from 0. If the item is not in the list return -1.

int findLastOccurrence(int arr[], int size, int x)
{
    int last = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            last = i;
        }
    }
    return last;
}

// (2) Write a C function to return the maximum and minimum number in an
// array and their indexes.

void max(int arr[], int size)
{
    // max
    int i, j = 0;
    int max = arr[i];
    for (i = 0; i < size; i++)
        if (max <= arr[i + 1])
            max = arr[i + 1];
    for (i = 0; i < size; i++)
        if (max != arr[i])
            j++;
        else
            break;
    printf("\nMax in array is: %d\nIt's index is: %d", max, j);
}

void min(int arr[], int size)
{
    // min
    int i, j = 0;
    int min = arr[i];
    for (i = 0; i < size; i++)
        if (min >= arr[i + 1])
            min = arr[i + 1];
    for (i = 0; i < size; i++)
        if (min != arr[i])
            j++;
        else
            break;
    printf("\nMin in array is: %d\nIt's index is: %d", min, j);
}

// (4) Write a C function that take two numbers and return array contain all
// numbers between the two given numbers. (numbers 2,6->return array
// contain [3,4,5]).

void between(int n1, int n2)
{
    int tmp;
    if (n1 > n2)
    {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    int ar[50];
    printf("[");
    ar[0] = n1 + 1;
    for (int i = 1; n1 != n2; i++)
    {
        ar[i] = n1++;
        printf(" %d ", ar[i]);
    }
    printf("]");
}

// (5) Write c function to find the most repeated number in an array of integers.

void repeated(int arr[], int size)
{
    int count, maxc = 0, num;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; j++)
            if (arr[i] == arr[j])
                count++;
        if (count > maxc)
        {
            maxc = count;
            num = arr[i];
        }
    }
    printf("Most repeated number is %d and it repeated %d times", num, count);
}
