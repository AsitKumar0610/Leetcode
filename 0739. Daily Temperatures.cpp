//Time Limit Exceeding
// class Solution {
// public:
    // vector<int> dailyTemperatures(vector<int>& temperatures) {
    //     vector<int> wait(temperatures.size(),0);
    //     for(int i = 0 ; i < temperatures.size() ; i++){
    //         int count = 0;
    //         bool flag = 0;
    //         for(int j = i+1 ; j < temperatures.size() ; j++){
    //             count++;
    //             if(temperatures[j] > temperatures[i]){
    //                 flag = 1;
    //                 break;
    //             }
    //         }
    //      wait[i] = (flag==0)? 0 : count;       
    //     }
    //     return wait;
    // }
// };

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n);
        stack<int> st;
        
        for(int i=0; i<n; i++) {
            while(!st.empty() and temperatures[i] > temperatures[st.top()]) {
                ans[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);             // Pushing the index of the elements to the stack.
        }
        
        while(!st.empty()) {        // All the remaining elements in the stack would not have any future day, so assign their answer to 0.
            ans[st.top()] = 0;
            st.pop();
        }
        return ans;
    }
};
