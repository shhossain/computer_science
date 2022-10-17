/*
    Sliding Window Maximum
    You are given an array of integers nums, there is a sliding window of size k which is moving from the very left 
    of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves 
    right by one position.
    Return the max sliding window.
    
    Link - https://leetcode.com/problems/sliding-window-maximum/
*/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v;
        
        // Double-Ended Queue which store maximum element at front
        deque<int> q;
        for(int i=0;i<k and i<n;i++) {
            while(q.size() and nums[q.back()] <= nums[i]) q.pop_back();
            q.push_back(i);
        }
        
        // First Element
        if(q.size()) v.push_back(nums[q.front()]);
        
        // Sliding through the array
        for(int i=k;i<n;i++) {
            if(q.size() and q.front() == i-k) q.pop_front();
            while(q.size() and nums[q.back()] <= nums[i]) q.pop_back();
            q.push_back(i);
            v.push_back(nums[q.front()]);
        }
        return v;
    }
};
