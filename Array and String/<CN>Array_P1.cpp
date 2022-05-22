
/*Problem Statement
Given an array 'A' consisting of 'N' integers, find the smallest subarray of 'A' containing exactly 'K' distinct integers.

Note :
If more than one such contiguous subarrays exist, consider the subarray having the smallest leftmost index.

For example - if A is [1, 2, 2, 3, 1, 3 ] and k = 2 then the subarrays: [1,2], [2,3], [3,1], [1,3] are the smallest subarrays containing 2 distinct elements. In this case, we will consider the starting and ending index of subarray [1,2] i.e. 0 and 1.
Input Format :
The first line contains two integers 'N' and 'K' denoting the total number of integers and number of distinct integers respectively. 

The second line contains 'N' space-separated integers describing elements of the array 'A'.
Output Format :
Print two space-separated integers denoting the starting and ending index of the subarray if it exists, otherwise print -1.
Note :
You do not need to print anything, it has already been taken care of. Just implement the given function.
Assume array starts with 0 index.
If more than one solution is possible then print the subarray with smaller left index.


Constraints :
1 <= N, K <= 10^6
-10^5 <= A[i] <= 10^5

Time limit: 1 sec
--------------------------------
Sample Input 1 :
4 3
1 1 2 1 2
Sample Output 1 :
-1
Explanation Of Sample Input 1 :
The value of k = 3 and there are only two distinct elements in the given array i.e 2 and 3. Therefore there exist no subarray with 3 distinct elements.
---------------------------------
Sample Input 2 :
8 3
4 2 2 2 3 4 4 3 
Sample Output 2 :
3 5
---------------------------------

*/





#include <unordered_set>

vector<int> smallestSubarrayWithKDistinct(vector<int> &arr, int k)
{
    
    int n = arr.size();
    
  
    int start = 0, end = n;

   
    for (int i = 0; i < n; i++)
    {
       
        unordered_set<int> set;

        
        int j;
        for (j = i; j < n; j++)
        {
            set.insert(arr[j]);
            
            
            if (set.size() == k)
            {
                if (j - i < end - start)
                {
                    start = i;
                    end = j;
                }

                
                break;
            }
        }

       
        if (j == n)
        {
            break;
        }
    }
    
    vector<int> ans;

   
    if (end == n)
    {
        ans.push_back(-1);
    }
    else
    {
       
        ans.push_back(start);
        ans.push_back(end);
    }
    
    return ans;
}
