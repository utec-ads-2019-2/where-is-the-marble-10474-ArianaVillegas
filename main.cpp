#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    unsigned i,j=1,n,q; cin>>n>>q;
    unsigned lq;
    while(n && q){
	unsigned ln[n];
	for(i=0;i<n;++i) cin >> ln[i];
	cout << "CASE# " << j << ":\n";
	if(q){
	    sort(ln,ln+n);
	    for(i=0;i<q;++i){
		cin>>lq;
		auto it = find(ln,ln+n,lq);
		if(it!=ln+n) cout << lq << " found at " << distance(ln,it)+1 << '\n';
		else cout << lq << " not found\n";
	    }
	}
	cin>>n>>q; ++j;
    }
    return 0;
}
