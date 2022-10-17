/*
Problem Link - https://leetcode.com/problems/sum-of-even-numbers-after-queries/

This is just a functional problem and hence only the required function is implemented rather than the whole driver code.
*/

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& arr, vector<vector<int>>& queries) {
        unordered_set<int> odd, even; // sets to store the indexes of ODD and EVEN elements.
        int sum = 0;                  // gives the sum of all even numbers at any given time.
        vector<int> ans;  
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]&1) odd.insert(i); 
            else {even.insert(i); sum += arr[i];}  // adding current element to sum as it is an EVEN number.
        }
        for(auto v: queries){                
            int val = v[0], idx = v[1];      // getting value and indexes to update.
            if(odd.find(idx) != odd.end()){  // If earlier idx was the place for an ODD number.
                if(val%2){                   // and if value to be added is ODD.
                    sum += (arr[idx] + val); // then we get new EVEN no. bcoz (ODD + ODD) = EVEN.
                    odd.erase(idx);          // removing the idx from ODD set
                    even.insert(idx);        // and adding it to the EVEN set.
                }
                arr[idx] += val;             // updating the array value.
            }else{                           // this means we are updating a EVEN element.
                if(val%2 == 0){              // if we add EVEN number.
                    sum += val;              // just add it to the SUM no worries.
                }else{                       // otherwise we get an ODD no. bocz (EVEN + ODD) = ODD.
                    even.erase(idx);         // remove the element from EVEN set.
                    odd.insert(idx);         // and add it to the ODD set.
                    sum -= arr[idx];         // ALSO decreasing the SUM value.
                }
                arr[idx] += val;             // updating array value.
            }
            ans.push_back(sum);              // pushing SUM value to ans vector.
        }
        return ans;
    }
};
