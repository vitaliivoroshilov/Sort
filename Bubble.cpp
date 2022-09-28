void BubbleSort(int* values, int count)
{
    bool not_sorted = true;
    while (not_sorted)
    {
        not_sorted = false;
        for (int i = 0; i < count - 1; i++)
        {
            if (values[i] > values[i + 1])
            {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                not_sorted = true;
            }
        }
    }
}