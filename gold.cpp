#include <bits/stdc++.h>
using namespace std;

int pro(int n)
	{
	    int s = n/2+n/3+n/4;
	    if(s <= n)
	    return n;
	    return pro(n/2)+ pro(n/3)+pro(n/4);
	}
int main() {
	// your code goes here
	int n;
	//while(scanf("%d",&n) != EOF)
	{
        cin >> n;
	    cout << pro(n) << endl;
	}

}
