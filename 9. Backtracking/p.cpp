#include <iostream>
#include <vector>
using namespace std;

pair<int, int> solve(vector<int> a, int sum, int i, int j)
{
    // int i = 0;
    // int j = a.size()-1;

    pair<int, int> res;

    if (i == j)
    {
        return {-1, -1};
    }

    int sum1 = 0;

    for (int k = i; k <= j; k++)
    {
        sum1 = sum1 + a[k];
    }

    if (sum1 != sum)
    {
        solve(a, sum, i + 1, j);
        solve(a, sum, i, j - 1);
    }

    if (sum1 == sum)
    {
        // cout << "Indices are : " << i << " " << j << endl;
        res = {i, j};
        return res;
    }
}

int main()
{

    vector<int> a = {1, 5, 12, 7, 5};
    int sum = 17;

    pair<int, int> res_final = solve(a, sum, 0, a.size() - 1);
    cout << res_final.first << " " << res_final.second << endl;

    return 0;
}