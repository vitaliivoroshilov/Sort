#include "Sort.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int size;
    printf("enter the size of the array: ");
    cin >> size;
    int* a = (int*)malloc(size * sizeof(int));
    int* a1 = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
    a1 = a;

    BubbleSort(a, size);
    printf("Result of BubbleSort: ");
    for (int i = 0; i < size; i++)
    {
        cout << (a[i]) << " ";
    }
    cout << "\n";
    a = a1;


    SelectionSort(a, size);
    printf("Result of SelectionSort: ");
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    a = a1;


    InsertionSort(a, size);
    printf("Result of InsertionSort: ");
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    a = a1;


    QuickSort(a, 0, size - 1);
    printf("Result of QuickSort: ");
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";

    free(a);
    system("pause");
    return 0;
}