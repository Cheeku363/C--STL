#include <bits/stdc++.h>

using namespace std;

void print(map<int, string> &m){
	cout << m.size() << endl;
	for(auto &pr: m)  
		cout << pr.first << " " << pr.second << endl;  // O( n log n) 
}

int main(){
	// map <int, string> m;
	map <string, string> m;
	// m[1] = "abc";  // O(log n)
	// m[5] = "cdc";
	// m[3] = "acd";
	// m.insert({4,"afg"});
 //    m[5]="cde";
   
   m["abcd"]="abcd";  // O( s.size() * log n)

   auto it = m.find(7);  // O(log n)
   if(it!=m.end())      
    m.erase(it);   // O(log n)

	m.clear();

   // if(it==m.end())
   // 	cout<<"NO Value"<<endl;
   // else
   // 	cout<<(*it).first << " " << (*it).second << endl; 
	
	print(m);



}