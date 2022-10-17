//Max Area Histogram

#include <bits/stdc++.h>

using namespace std;

vector<int> nsr(int arr[], int n)
{
    std::stack<pair<int, int>> s;
    std::vector<int> v;
    
    for (int i = n - 1; i >= 0; i--) {
        if (s.empty())
            v.push_back(n);
            
        else {
            if (s.top().first < arr[i])
                v.push_back(s.top().second);
                
            else {
                while (!s.empty() && s.top().first >= arr[i])
                    s.pop();
                
                if (s.empty())
                    v.push_back(n);
                    
                else
                    v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    
    reverse(v.begin(), v.end());
    return v;
}

vector<int> nsl(int arr[], int n)
{
    std::stack<pair<int, int>> s;
    std::vector<int> v;
    
    for (int i = 0; i < n; i++) {
        if (s.empty())
            v.push_back(-1);
            
        else {
            if (s.top().first < arr[i])
                v.push_back(s.top().second);
                
            else {
                while (!s.empty() && s.top().first >= arr[i])
                    s.pop();
                
                if (s.empty())
                    v.push_back(-1);
                    
                else
                    v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    
    return v;
}

void histogram(int arr[], int n)
{
    std::vector<int> v;
    
    vector<int> a = nsr(arr, n), b = nsl(arr, n);
    
    for (int i = 0; i < n; i++)
        v.push_back((a[i] - b[i] - 1) * arr[i]);
    
    cout << *max_element(v.begin(), v.end());
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
        
    histogram(arr, n);
}
