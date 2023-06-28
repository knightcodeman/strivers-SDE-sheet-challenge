#include <bits/stdc++.h> 
using namespace std;

vector<int> nextGreater(vector<int> &arr, int n) {
    vector<int>ans(n,0);
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        if(st.empty()||arr[st.top()]>=arr[i])st.push(i);
        else{
           while(st.size()!=0 && arr[st.top()]<arr[i])
           {
              ans[st.top()]=arr[i];
              st.pop();
           }
           st.push(i);
        }
    }
    while(st.size()!=0)
    {
        ans[st.top()]=-1;
        st.pop();
    }
    return ans;
}
