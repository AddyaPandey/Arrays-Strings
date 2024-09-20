#include <bits/stdc++.h>

using namespace std;

void printBool(int n, int len)

{

    while (n)
    {

        if (n & 1)

            cout << 1;

        else

            cout << 0;

        n >>= 1;

        len--;
    }

    while (len)
    {

        cout << 0;

        len--;
    }

    cout << endl;
}

void printSubsetsCount(int set[], int n, int val)

{

    int sum;

    int count = 0;

    for (int i = 0; i < (1 << n); i++)
    {

        sum = 0;

        for (int j = 0; j < n; j++)

            if ((i & (1 << j)) > 0)
            {

                sum += set[j];
            }

        if (sum == val)
        {

            count++;
        }
    }

    if (count == 0)
    {

        cout << ("No subset is found") << endl;
    }

    else
    {

        cout << count << endl;
    }
}

int main()

{

    int t, n, sum;

    cin >> t;

    while (t--)

    {

        cin >> n;

        int set[n];

        for (int i = 0; i < n; i++)

            cin >> set[i];

        cin >> sum;

        printSubsetsCount(set, n, sum);
    }
}