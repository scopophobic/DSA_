//Merge_sort algorithm
//Error: [1]    12569 segmentation fault  "/Users/scopo0/Documents/CODING/basic C++/ALGOS/"Merge_sort


#include <iostream>
using namespace std;

//merging fucntion
void merge(int A[], int s, int m, int e)
{
    int n1 = s - m + 1;
    int n2 = e - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = A[s + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = A[m + j + 1];
    }

    int i = 0, j = 0, k = s;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[i])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        A[k] = R[j];
        j++;
        k++;
    }
    
}

//main merge sort function
void mergesort(int A[], int s, int e)
{
    if (s < e)
    {
        int m = s + (e - 1) / 2;
        mergesort(A, s, m);
        mergesort(A, m + 1, e);
        merge(A, s, m, e);
        
    }
}

//print function
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

//Driver function
int main()
{
    int A[] = {4, 3, 9, 7, 2, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);
    mergesort(A, 0, n - 1);
    printArray(A,n);
    return 0;
}
