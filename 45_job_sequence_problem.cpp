#include <bits/stdc++.h> 

bool static compare(vector<int>&a, vector<int>&b)
{
    return a[1]>b[1];
}

int jobScheduling(vector<vector<int>> &jobs)
{
    int n=jobs.size();

    sort(jobs.begin(),jobs.end(),compare);

    int maxi=0;
    for(int i=0;i<n;i++)
      maxi=max(maxi,jobs[i][0]);
    
    vector<int>temp(maxi+1,-1);
    int profit=0;

    for(int i=0;i<n;i++)
    {
        for(int j=jobs[i][0];j>0;j--)
        {
            if(temp[j]==-1)
            {
               temp[j]=i;
               profit+=jobs[i][1];
               break;
            }
        }
    }
    return profit;
}
