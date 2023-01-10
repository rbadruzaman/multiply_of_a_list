#include<bits/stdc++.h>

using namespace std;

int multiply(int array[], int n)
{

    int result = 1;

    for (int i = 0; i < n; i++)

        result = result * array[i];

    return result;
}


int main()
{

    int array[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(array) / sizeof(array[0]);

    cout << multiply(array, n);

}
