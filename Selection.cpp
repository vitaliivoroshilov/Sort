void SelectionSort(int* values, int count)
{
    int AddVar = 0;
    for (int i = 0; i < count - 1; i++)
    {
        int Min = i;
        for (int j = i + 1; j < count; j++)
        {
            if (values[j] < values[Min]) { Min = j; }
        }
        AddVar = values[Min];
        values[Min] = values[i];
        values[i] = AddVar;
    }
}