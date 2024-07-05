#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,x,y,t,m,r,h;
	cin >> h >> m >> x;
	m=m+x;
	if (m>=60)
	{
		m-=60; h++;
		if (h==24) h=0;
	}
	cout << h << ":" << m;
}