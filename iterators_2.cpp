#include <bits/stdc++.h>
using namespace std;

int main(){

// Vectors

	vector<int> v = {2,3,5,6,7};

for(int value: v){
		cout << value << " ";
	}
	cout<<endl;

	for(int &value: v){
		value++;
	}
	for(int value: v){
		cout << value << " ";
	}
	cout<<endl;

	// pairs

vector<pair<int,int>>v_p={{1,2},{2,3}};

for(pair<int,int> &value:v_p){
	cout<<value.first<<" "<<value.second<<endl;
}

// auto keyword

auto a=1.0;
cout<<a<<endl;

for(auto it=v.begin();it!=v.end();it++){
	cout<<*it<<" ";
}

cout<<endl;

for(auto &value:v_p){
	cout<<value.first<<" "<<value.second<<endl;
}

return 0;
}