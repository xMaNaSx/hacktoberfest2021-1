#include <iostream>
using namespace std;
int partition(int a[], int n, int lb, int ub)
{
    int start = lb;
    int pivot = a[lb];
    int end = ub;
    while (start < end)
    {
        while (a[start] <= pivot)

        {
            /* code */
            start++;
        }
        while (a[end] >= pivot)
        {
            /* code */
            end--;
        }
        if (start < end)
        {
            /* code */
            swap(a[start], a[end]);
        }
    }
    swap(a[lb], a[end]);
    return end;
}
void quicksort(int a[], int n, int lb, int ub)
{
    if (lb < ub)
    {

        int loc = partition(a, n, lb, ub);
        quicksort(a, n, lb, loc - 1);
        quicksort(a, n, loc + 1, ub);
    }
    else
        return;
}
int main()
{
    int n;
    cout << "ENTER THE SIZE OF AN ARRAY" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "DISPLAYING ORIGINAL ARRAY" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << endl;
    }
    quicksort(a, n, 0, n - 1);
    cout << "DISPLAYING SORTED  ARRAY" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << endl;
    }

    return 0;
}