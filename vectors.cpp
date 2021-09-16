#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v){
	cout<<"size : "<<v.size()<<endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	// v.push_back(2);
	cout<<endl;
}

int main(){
	vector<int> v;
	v.push_back(7); //dynamic nature O(1)
	v.push_back(6); 
    // print_vector(v);
    // v.pop_back();     // O(1)	
	// print_vector(v);

//     int n;
//     cin>>n;

//     for (int i = 0; i < n; ++i)
//     {
//     	int x;
//     	cin>>x;
//     	print_vector(v); //Dynamic nature
//     	v.push_back(x); 
//     }
// print_vector(v);


	vector<int> &v2=v;     // O(N)
	v2.push_back(5);
	print_vector(v);
	print_vector(v); // Pass by reference 
	print_vector(v2);

// 		vector<string> v;
// 		int n;
// 		cin>>n;
// 		for (int i = 0; i < n; ++i)
// 		{
// 			string s;
// 			cin>>s;
// 			v.push_back(s);
// 		}
// print_vector(v);
}