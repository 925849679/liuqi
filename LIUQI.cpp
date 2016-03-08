#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	int i, j, a, m, n,l,k,p;
	cout << "请输入题目的个数：" << endl;
	cin >> p;
	for (i = 0; i < p; i++)
	{
		l = rand() % (100);
		k = l % 2;
		if (k == 0)
		{
			m = rand() % (100);
			n = rand() % (100);
			if (m < n)
				cout << "("<<m << "/" << n<<")";
			if (m>n)
				cout <<"("<< n << "/" << m<<")";
			if (m == n)
			{
				if (m == 0)  
					cout << "("<<m << "/" << ((rand() % 100) + 20) / 2<<")";
				else 
				    cout << "("<<m / 2 << "/" << n<<")";
			}
		}
		else
		{
			a = rand() % (100);
			cout << a;
		}
		
		j = rand()%4;
		if (j == 0) cout << "+";
		else if (j == 1) cout << "-";
		else if (j == 2) cout << "*";
		else cout << "/";

		l = rand() % (100);
		k = l % 2;
		if (k == 0)
		{
			m = rand() % (100);
			n = rand() % (100);
			if (m < n)
				cout << "("<<m << "/" << n<<")";
			if (m>n)
				cout <<"("<< n << "/" << m<<")";
			if (m == n)
			{
				if (m == 0)
					cout << "("<<m << "/" << ((rand() % 100) + 20) / 2<<")";
				else
					cout << "("<<m / 2 << "/" << n<<")";
			}
		}
		else
		{
			a = rand() % (100);
			cout << a;
		}
		cout <<"="<< endl;
		
	}

}