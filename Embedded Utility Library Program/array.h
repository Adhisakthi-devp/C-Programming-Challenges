#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>

int findMaximum(int arr[], int n)
{
    int max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int findMinimum(int arr[], int n)
{
    int min = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int findSum(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

float findAverage(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return (float)sum / n;
}

int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

void bubbleSort(int arr[], int n)
{
    int temp;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int countOccurrences(int arr[], int n, int key)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    return count;
}

int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int second = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    return second;
}

void copyArray(int src[], int dest[], int n)
{
    for(int i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
}

void displayArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

#endif 