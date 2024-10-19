// You are given the ((encoded)) array.
// You are also given an integer ((first)) let first = 5
// encoded[i] = arr[i] XOR arr[i + l]
// To decode into original array we use this formula: ->
// arr[i + 1] = encoded[i] ^ arr[i]
// Return the original array arr[] .

#include <stdio.h>
#include <stdlib.h>

/**
 * decode - function return the original array
 * @encoded: given array encoded
 * @size: size of array
 * @first: first index in decoded array
 * Return: original array
 */
int *decode(int *encoded, int size, int first)
{
    // Allocate memory for the original array & set first index
    int num = size + 1;
    int *arr = (int *)malloc(num * sizeof(int));
    arr[0] = first;

    // Decode the array using the formula
    for (int i = 0; i < size; i++)
        arr[i + 1] = encoded[i] ^ arr[i];

    // Print the array
    printf("The original array is:\n[ ");
    for (int j = 0; j < num; j++)
        printf("%d ", arr[j]);
    printf("]");

    return arr;
}

/**
 * main - main function
 * Return: 0 (success)
 */
int main()
{
    int encoded[] = {2, 1, 4};
    int size = sizeof(encoded) / sizeof(encoded[0]);
    int first = 5;
    int x = *decode(encoded, size, first);
    return 0;
}