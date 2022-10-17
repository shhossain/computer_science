// Problem link : https://leetcode.com/problems/maximal-rectangle/

// Solution -

class Solution
{
public:
    int maximalRectangle(vector<vector<char>> &M)
    {
        int n = M.size();
        int m = M[0].size();

        vector<int> v(m, 0);
        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (M[i][j] == '0')
                {
                    v[j] = 0;
                }
                else
                {
                    v[j] = v[j] + 1;
                }
            }
            mx = max(mx, MAH(v));
        }

        return mx;
    }

    vector<int> NSL(vector<int> &arr, int n)
    {
        vector<int> left;
        stack<int> s;
        int pseudo_index = -1;
        for (int i = 0; i < n; i++)
        {
            if (s.size() == 0)
            {
                left.push_back(pseudo_index);
            }
            else if (s.size() > 0 && arr[s.top()] < arr[i])
            {
                left.push_back(s.top());
            }
            else if (s.size() > 0 && arr[s.top()] >= arr[i])
            {
                while (s.size() > 0 && arr[s.top()] >= arr[i])
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    left.push_back(pseudo_index);
                }
                else
                {
                    left.push_back(s.top());
                }
            }
            s.push(i);
        }
        return left;
    }

    vector<int> NSR(vector<int> &arr, int n)
    {
        vector<int> right;
        stack<int> s;
        int pseudo_index = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s.size() == 0)
            {
                right.push_back(pseudo_index);
            }
            else if (s.size() > 0 && arr[s.top()] < arr[i])
            {
                right.push_back(s.top());
            }
            else if (s.size() > 0 && arr[s.top()] >= arr[i])
            {
                while (s.size() > 0 && arr[s.top()] >= arr[i])
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    right.push_back(pseudo_index);
                }
                else
                {
                    right.push_back(s.top());
                }
            }
            s.push(i);
        }

        reverse(right.begin(), right.end());
        return right;
    }

    int MAH(vector<int> &arr)
    {
        // Your code here
        int n = arr.size();
        vector<int> left = NSL(arr, n);
        vector<int> right = NSR(arr, n);
        int maxA = 0;
        for (int i = 0; i < n; i++)
        {
            maxA = max(maxA, (right[i] - left[i] - 1) * arr[i]);
        }
        return maxA;
    }
};