/**
** Find Pair With given sum in the array
** Techie Delight
** Modified By Ahasanul Basher Hamza
** Date: 04/03/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

// Naive method to find a pair in an array with given sum
void findPair(int arr[], int n, int sum)
{
    int i,j;
    // consider each element except last element
    for (i = 0; i < n - 1; i++)
    {
        // start from i'th element till last element
        for (j = i + 1; j < n; j++)
        {
            // if desired sum is found, print it and return
            if (arr[i] + arr[j] == sum)
            {
                printf("Pair found at index %d and %d", i, j);
                return;
            }
        }
    }

    // No pair with given sum exists in the array
    printf("Pair not found");
}

// main function
int main()
{
    /// solution by techiedelight which will
    /// not work on the given input
    /// proper solution is given after
    /// their code
    /***
        int arr[] = { 8, 7, 2, 5, 3, 1 };
        int sum = 10;
        int n = sizeof(arr)/sizeof(arr[0]);
        findPair(arr, n, sum);
    ***/
    ///
        int n,i,j;
        scanf("%d", &n);
        int arr[n];
        for(i = 0;i < n;i++)
        {
            scanf("%d", &arr[i]);
        }
        int sum;
        scanf("%d", &sum);
        findPair(arr,n,sum);
    return 0;
}
