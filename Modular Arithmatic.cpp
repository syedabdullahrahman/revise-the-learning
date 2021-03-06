#include<bits/stdc++.h> 
using namespace std; 
long long PP=36123; 
int gcdextended(int a,int b, int *x,int *y)
	{
	if (a==0)
			{
			*x=0;
			*y=1;
			return b;
			}
	int x1,y1;
	int g = gcdextended(b%a,a,&x1,&y1);

	*x=y1 - (b/a)*x1;
	*y =x1;
	return g;
	}
long long bigmod(long long m, long long p)
	{
	if(p==0) return 1;
	else if(p%2==0)
			{
			long long ret = bigmod(m,p/2);
			ret = ((ret%PP)*(ret%PP))%PP;
			return ret;
			}
	else
			{
			return ((m%PP)*(bigmod(m,p-1)%PP))%PP;

			}

	}
int gcd(int a,int b)
	{
	if(a==0) return b;
	return gcd(b%a,a);
	}
int modularInverse(int a,int m)
	{
	int x,y;
	int g=gcdextended(a,m,&x,&y);
	if(g!=1) cout<<"Mod inverse not exited"<<endl;
	else
			{
			int res = (x%m+m)%m;
			return res;
			}

	}

int main()
	{
	int fact=1;
	for (int i=1; i<=110; i++)
		fact = ((fact%97)*(i%97))%97;

	//cout<<fact<<endl;

	//cout<< (-17)%5<<endl;
	cout<<gcd(115,100)<<endl;
	int a,b;
	cout<<" "<<a<<" "<<b<<" "<<gcdextended(115,100,&a,&b)<<endl;
	cout<<modularInverse(137,107)<<endl;
	cout<<(2307*25)%107<<endl;
	cout<<bigmod(2374859,3029382);
	return 0;

	}
