#include<bits/stdc++.h>
using namespace std;

int ninjaAndLadoos(vector<int> &a, vector<int> &b, int n, int m, int k) {
    
	if(n>m) return ninjaAndLadoos(b,a,m,n,k);

	  int low=max(0,k-m);
	  int high=min(k,n);
      
      while(low<=high)
	    {
          int cut1=low +(high-low)/2;
		      int cut2=k-cut1;
        
		     int l1=(cut1==0)?INT_MIN:a[cut1-1];
		     int l2=(cut2==0)?INT_MIN:b[cut2-1];
		     int r1=(cut1==n)?INT_MAX:a[cut1];
		     int r2=(cut2==m)?INT_MAX:b[cut2];

                if (l1 <= r2 && l2 <= r1)
                    return max(l1, l2);
                 else if (l2>r1)
                    low = cut1 + 1;
                  else
                    high = cut1 - 1;
          
       }
      return 1;
      
}
