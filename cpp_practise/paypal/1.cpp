    #include <bits/stdc++.h>
    #define ll long long
     
    using namespace std;
    const int MAXN = 200005;
    const int MOD = 1000000007;
     
    string s;
    vector<int> v;
    int k;
     
    int fun(int a){
    	int cur = 0 , ans = 1;
    	for(int i=0;i<v.size();i++){
    		if(v[i] > a) return 0;
    		cur += v[i];
    		if(cur > a){
    			cur = v[i]; ans++;
    		}
    	}
    	if(ans > k) return 0;
    	return 1;
    }
     
    int main(){
    	ios_base::sync_with_stdio(false); cin.tie(0);
    	cin >> k;
    	getline(cin,s);
    	getline(cin,s);
    	//cout << s << '\n';
    	int n = s.length();
    	int cur = 0;
    	for(int i=0;i<n;i++){
    		cur++;
    		if(s[i] == ' ' || s[i] == '-'){
    			v.push_back(cur);
    			cur = 0;
    		}
    	}
    	v.push_back(cur);
    	int l = 1 , h = n;  
    	while(l < h){
    		int m = (l + h) >> 1;
    		int p = fun(m);
    		if(p) h = m;
    		else l = m + 1;
    	}
    	cout << h << '\n';
    	return 0;
    }