#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	map<int,set<string>> marks_map;

	int n;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		int marks;
		string name;
		cin >> name >> marks;
		marks_map[-1*marks].insert(name);
	}

	for(auto &marks_student_pr : marks_map) {
		auto &students = marks_student_pr.second;
		int marks=marks_student_pr.first;
		for(auto student : students)
			cout<<student << " " << -1 * marks << endl;
		
	}


}