#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,x,y,t,u,r;
	cin >> x >> y >> u >> r;
	t=r-((x*4)+(y*2)+(u*2));
	a=t/4;
	cout << a;
}