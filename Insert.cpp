void InsertionSort(int* values, int count)
{
    int temp = 0;
    int j = 0;

    for (int i = 0; i < count; i++)
    {
        temp = values[i];
        j = i - 1;
        while (j >= 0 && values[i] > temp)
        {
            values[j + 1] = values[j];
            j--;
        }
        values[j + 1] = temp;
    }
}