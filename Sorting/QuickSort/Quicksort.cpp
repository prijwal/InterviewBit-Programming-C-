int partition(vector<int> &a, int low, int high)
    int pivot=a[high]; 
    int i=(low-1); 
 
    for (int j=low;j<=high-1;j++)
    {
        if (arr[j] < pivot)
        {
            i++; 
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1],a[high]);
    return i+1;
}
void quickSort(vector<int> &a, int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
 
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}
// Pivot element is last element 