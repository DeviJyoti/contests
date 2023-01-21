//code:-
// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution 
{
	public:
	bool checkvowel(char c)
	{
	     return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	}
	int solve(int n,string s)
	{
		//code here
		int even_vowel = 0;
		int even_cons = 0;
		int odd_vowel = 0;
		int odd_cons = 0;
		
		for(int i=0;i<n;i++)
		{
		    if(i%2==0)
		    {
		        if(checkvowel(s[i]))
		        {
		            even_vowel++;
		        }
		        else
    		    {
    		        even_cons++;
    		    }
		    }
		    else
		    {
		      if(checkvowel(s[i]))
		        {
		            odd_vowel++;
		        }
		        else
    		    {
    		        odd_cons++;
    		    }
		    }
		    
		}
		if((odd_cons+even_vowel)<(odd_vowel+even_cons))
        return odd_cons+even_vowel;
        else
        return odd_vowel+even_cons;
	}
};

// { Driver Code Starts.


int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
	    string s;
	    cin >> s;
	    Solution obj;
	    int ans = obj.solve(n,s);
	    cout << ans << "\n";
	}

	return 0;
}

  // } Driver Code Ends
