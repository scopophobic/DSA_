// code not working

#include <bits/stdc++.h>
using namespace std;

void sub(int ind, vector<int> &ds, int arr[], int n)
{
    if (ind == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
        
    }

    
    else{
        ds.push_back(arr[ind]);
        sub(ind + 1, ds, arr, n);
        ds.pop_back();
        sub(ind + 1, ds, arr, n);
    }
}

int main()
{

    int arr[] = {2, 1, 3};
    int n = 3;
    vector<int> ds;
    sub(0, ds, arr, n);
    return 0;
}
