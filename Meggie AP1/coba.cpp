#include <iostream>
using namespace std;

int main()
{
    int rows,number = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i <= rows; ++i)
    {
        for(int space = 0; space < rows-i; ++space)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << number++;

        for(int j = 0; j < i-1; ++j)
            cout << number++;

        cout << endl;
    }

    return 0;
}
