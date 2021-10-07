#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int *t;
    t = x;
    x = y;
    y = t;
}

int hp(int a[],int l,int h)
{
    int i=l-1,j=h+1;
    int pivot=a[l];
    while(true)
    {
        do{
            i++;
        }while(a[i]<pivot);

        do{
            j--;
        }while(a[j]>pivot);

        if(i>=j) return j;
        swap(a[i],a[j]);
    }
}

int main()
{
    int a[] = {5,3,8,4,2,7,1,10};
    int n = sizeof(a) / sizeof(a[0]);
    hp(a,0,n-1);
    for (auto x : a)
        cout << x << " ";
    return 0;
}