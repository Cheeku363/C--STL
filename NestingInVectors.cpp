#include <bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v){
	cout<<"size : "<<v.size()<<endl;
	for (int i = 0; i < v.size(); ++i)
	{
		// cout<<v[i].first<<" "<<v[i].second<<endl;
		cout << v[i] <<" ";
	}
	cout<<endl;
}

int main(){

// vector<pair<int,int>> v ;
// print_vector(v);
// int n;
// cin>>n;
// for (int i = 0; i < n; ++i)
// 	{
// 		int x,y;
// 		cin>> x >> y;
// 		v.push_back({x,y});
// 	}
// print_vector(v);




// Array of Vectors

// 	int N;
// 	cin>>N;

// 	vector<int>v[N];

// 	for (int i = 0; i < N; ++i)
// 	{
// 		int n;
// 		cin>>n;
// 		for (int j = 0; j < n; ++j)
// 		{
// 			int x;
// 			cin>>x;
// 			v[i].push_back(x);
// 		}
// 	}
// 	for (int i = 0; i < N; ++i)
// 	{
// 		print_vector(v[i]);
// 	}
// 	cout<<v[0][1];


// Vector of vector

	int N;
	cin>>N;

	vector<vector<int>> v;

	for (int i = 0; i < N; ++i)
	{
		int n;
		cin>>n;
		vector<int> temp;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin>>x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	v[0].push_back(10);
	// v.push_back(vector<int>());
for (int i = 0; i < v.size(); ++i)
{
	print_vector(v[i]);
}
cout<<v[0][1];

}