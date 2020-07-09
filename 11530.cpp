#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,cnt=0;
	string s;
	cin >> t;
	getline(cin, s);
	for(int j=1;j<=t;j++)
	{
		cnt = 0;
		getline(cin, s);
		for (int i = 0; i < s.size(); i++)
		{
			int x = (int)s[i];
			if (x== 122 ||x == 115)
				cnt += 4;
			else if (x >115&&x< 122)
			{
				if (x % 3 == 2)
					cnt += 1;
				else if (x % 3 == 0)
					cnt += 2;
				else
					cnt += 3;
			}
			else if (s[i] == ' ')
				cnt += 1;
			else if (x % 3 == 1)
				cnt += 1;
			else if (x % 3 == 2)
				cnt += 2;
			else if (x % 3 == 0)
				cnt += 3;

		}
		cout << "Case #" << j << ": " << cnt << endl;

	}
	return 0;
}
