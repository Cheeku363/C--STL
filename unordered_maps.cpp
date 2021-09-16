#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m){
	cout << m.size() << endl;
	for(auto &pr: m)  
		cout << pr.first << " " << pr.second << endl;  // O(1) 
}

int main(){

	unordered_map <int,string> m;

	// m[1] = "abc";  // O(1)   
	// m[5] = "cdc";
	// m[3] = "acd";
	// m[6] = "a";
	// m[5] = "cde";

	// auto it = m.find(7);  // O(1)
 //   if(it!=m.end())      
 //    m.erase(it);   // O(1)


	// print(m);
}