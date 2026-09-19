class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int ans=0;
        int i=0;
        while(i<operations.size()){
            if(operations[i]=="C" &&!st.empty()){
                st.pop();
            }
            else if(operations[i]=="+" && !st.empty()){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                st.push(second);
                st.push(first);
                ans=first+second;
                st.push(ans);
            }
            else if(operations[i]=="D" && !st.empty()){
                ans=st.top();
                st.push(ans*2);
            }
            else{
                st.push(stoi(operations[i]));
            }
            i++;
        }
        ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};