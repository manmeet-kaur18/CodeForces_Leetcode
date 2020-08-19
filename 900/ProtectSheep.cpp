#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rows, columns;
    cin>>rows>>columns;
    char pasture[rows + 5][columns + 5];

    for(int r = 1; r <= rows; r++)
        cin>>(pasture[r] + 1);

    int is_possible = true;

    for(int r = 1; r <= rows; r++)
    {
        for(int c = 1; c <= columns; c++)
        {
            if(pasture[r][c] == 'W')
            {
                if(pasture[r + 1][c] == 'S' || pasture[r][c + 1] == 'S' || pasture[r - 1][c] == 'S' || pasture[r][c - 1] == 'S')
                {
                    is_possible = false;
                }
            }
        }
    }

    if(!is_possible)
    {
        cout<<"No";
        return 0;
    }

    cout<<"Yes"<<endl;
    for(int r = 1; r <= rows; r++)
    {
        for(int c = 1; c <= columns; c++)
        {
            char current_cell = (pasture[r][c] != '.' ? 'D' : pasture[r][c]);

            cout<<current_cell;
        }
        cout<<endl;
    }

    return 0;
}
