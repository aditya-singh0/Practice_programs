*package whatever //do not write package name here */

import java.io.*;

class GFG {
	public static void main (String[] args) {
		
	}
	static int find(int A[]){
	    int n=A.length;
	    
	    int dp[]=new int[n];
	    dp[0]=1;
	    int r=0;
	    for(int i=1;i<n;i++) {
    	    if(A[i]>=A[i-1]){
    	        dp[i]=dp[i-1]+1;
    	    }
    	    else dp[i]=1;
    	    if(dp[i]>3) return -1;
    	    if(dp[i]==3) r++;
	    }
	    int eq[]=new int[n];
	    
	    eq[0]=1;
	    boolean ran=false;
	    for(int i=1;i<n;i++){
	        if(A[i]==A[i-1]){
	            eq[i]=eq[i-1]+1;
	        }
	        else eq[i]=1;
	        if(eq[i]>=3) return -1;
	        if(eq[i]==2) ran=true;
	            
	    }
	    int d[]=new int[n];
	    d[0]=1;
	    for(int i=1;i<n;i++) {
    	    if(A[i]<=A[i-1]){
    	        d[i]=d[i-1]+1;
    	    }
    	    else d[i]=1;
    	    if(d[i]>3) return -1;
    	    f(d[i]==3) r++;
	    }
	    if(r>=2) return -1;
	    if(r==1) return 3;
	    if(ran) return 2;
	    return 0;
	    
	    
	    
	   
	}
}