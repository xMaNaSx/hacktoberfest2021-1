#include <bits\stdc++.h>
#include <algorithm>
using namespace std;

struct Item
{
    int value, weight;
    Item(int value, int weight)
    {
        this->value = value;
        this->weight = weight;
    }
};

bool compare(struct Item a, struct Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, struct Item arr[], int n)
{
    sort(arr, arr + n, compare);
    int curWeight = 0;       // Current weight in knapsack
    double finalvalue = 0.0; // Result (value/profit in Knapsack)

    for (int i = 0; i < n; i++)
    {
        // If adding Item won't overflow, add it completely
        if (curWeight + arr[i].weight <= W)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }

        // If we can't add current Item, add fractional part
        // of it
        else
        {
            int remain = W - curWeight;
            finalvalue += arr[i].value * ((double)remain / (double)arr[i].weight);
            break;
        }
    }

    return finalvalue;
}
int main()
{
    int W = 30;                                           //Weight of knapsack
    Item arr[] = {{30, 10}, {20, 5}, {40, 20}, {15, 15}}; //{value,weight}

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(W, arr, n);
    return 0;
}