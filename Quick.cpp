void QuickSort(int* values, int start, int end)
{
    if (start >= end) return;
    int divider = values[start];
    int lo = start;
    int hi = end;
    while (true)
    {
        while (values[hi] >= divider)
        {
            hi = hi - 1;
            if (hi <= lo) break;
        }
        if (hi <= lo)
        {
            values[lo] = divider;
            break;
        }
        values[lo] = values[hi];
        lo = lo + 1;
        while (values[lo] < divider)
        {
            lo = lo + 1;
            if (lo >= hi) break;
        }
        if (lo >= hi)
        {
            lo = hi;
            values[hi] = divider;
            break;
        }
        values[hi] = values[lo];
    }
    QuickSort(values, start, lo - 1);
    QuickSort(values, lo + 1, end);
}