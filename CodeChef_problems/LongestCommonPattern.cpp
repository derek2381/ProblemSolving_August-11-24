// problem lnk
// https://www.codechef.com/problems/LCPESY


// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	
	while(t--){
	    string str1, str2;
	    map<char, int> mp;
	    cin >> str1 >> str2;
	    
	    for(char i : str1){
	        mp[i]++;
	    }
	    
	    int res = 0;
	    
	    for(char i : str2){
	        if(mp[i] == 1){
	            mp.erase(i);
	            res++;
	        }else if(mp[i] > 1){
	            mp[i]--;
	            res++;
	        }
	    }
	    
	    cout << res << endl;
	}

	
	return 0;
}
