#include <iostream>
using namespace std;

int main()
{
    int arr[][4] = {{0, 0, 1, 1},
                    {0, 0, 1, 1},
                    {0, 0, 0, 1},
                    {0, 0, 0, 0}};

    int celebrity = -1;
    for (int i = 0; i < 4; i++)
    {
        bool everyone_knows = true;
        bool knows_anyone = false;

        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j])
            {
                knows_anyone = true;
                break;
            }
        }
        for (int k = 0; k < 4; k++)
        {
            if (i != k and !arr[k][i])
            {
                everyone_knows = false;
                break;
            }
        }

        if (!knows_anyone and everyone_knows)
        {
            celebrity = i;
            break;
        }
    }
    cout<<celebrity<<endl;
}