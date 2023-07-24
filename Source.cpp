#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
	int n = 100, sum = 0,nsum=0,fn=0,dif=0;
	for (int i = 1; i <= n; i++)
	{//problem no 6 of project euler

		sum += (i * i);
		nsum += i;
	}
	fn=(nsum * nsum);
	dif = fn - sum;
	cout<<dif;

	return 0;
}
