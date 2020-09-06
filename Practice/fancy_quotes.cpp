#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	string s;
	cin >> t;
	cin.ignore();
	for(int i = 0; i < t; i++){	
		getline(cin,s);
		stringstream str(s);
		bool flag = false;
		string words;
		while(str >> words){
			if(words == "not"){				
				flag = true;
				break;
			}	
		}
		
		if(flag){
			cout << "Real Fancy\n";
			
		}
		
		else{
			cout << "regularly fancy\n";
			
		}
	}
	return 0;
}