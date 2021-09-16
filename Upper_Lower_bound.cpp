#include <bits/stdc++.h>
using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	// int a[n];
// 	vector<int> a(n);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin>>a[i];
// 	}
// 	// sort(a,a+n);
// 	sort(a.begin(),a.end());
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout<<a[i] << " ";
// 	}
// 	cout << endl;

// 	// int *ptr = upper_bound(a+4,a+n,5);          // log n
// 	auto it = upper_bound(a.begin(),a.end(),26);   // log n

// 	if (it==a.end()) 
// 	{
// 		cout<< "Not found" <<endl;
// 		return 0;
// 	}
// 	cout << (*it) << endl;
// }


int main(){
	int n;
	cin>>n;
	set<int> s;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	auto it = s.lower_bound(5);
	cout << (*it) << endl;

}
