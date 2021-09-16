#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s){
cout<< s.size() << endl;

for(string value : s)
	cout<< value <<endl;
}

int main(){
	multiset<string> s;
	s.insert("abc");  // log(n) 
	s.insert("zsdf"); 
	s.insert("bcd");
	s.insert("abc");

	// auto it = s.find("abc");  // log(n)

	// if(it!=s.end())
	// s.erase(it);

	s.erase("abc");
	

	print(s);


}