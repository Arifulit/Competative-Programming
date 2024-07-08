#include <iostream>
using namespace std;
int Max, Min;
void findMaxMin(int arr[], int l, int r)
{
    if (l == r) //1
    {
        if (arr[l] > Max)
            Max = arr[l];
        if (arr[l] < Min)
            Min = arr[l];
    }
    else if (r - l == 1) //1
    {
        if (arr[l] > arr[r])
        {
            if (arr[l] > Max)
                Max = arr[l];
            if (arr[r] < Min)
                Min = arr[r];
        }
        else
        {
            if (arr[r] > Max)
                Max = arr[r];
            if (arr[l] < Min)
                Min = arr[l];
        }
    }
    else
    {
        findMaxMin(arr, l, (l + r) / 2); //
        findMaxMin(arr, ((l + r) / 2) + 1, r);
    }
}
int main()
{
    int arr[] = {2, 4, 5, 6, 7, 1, 100, -50}, size;    //1
    size = sizeof(arr) / 4;                            //1
    Max = Min = arr[0];                                //1
    findMaxMin(arr, 0, size - 1);                      //1
    cout << Max << " " << Min;
    return 0;
}