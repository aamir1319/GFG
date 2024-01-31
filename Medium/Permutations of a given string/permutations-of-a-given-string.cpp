//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void permutat(string s,vector<string>&si,int index){
	        if(index>=s.length()){
	            si.push_back(s);
	            return;
	        }
	        for(int i=index;i<s.length();i++){
	            swap(s[index],s[i]);
	            permutat(s,si,index+1);
	            swap(s[index],s[i]);
	        }
	    }
	    
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>si;
		    string out;
		    permutat(S,si,0);
		    sort(si.begin(),si.end());
		    si.erase(unique(si.begin(),si.end()),si.end());
		    return si;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends