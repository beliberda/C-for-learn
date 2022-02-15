#include <iostream>
#include <string>
#include <stack>
#include <fstream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	string buf;
	stack<char> num;
	bool f=false;
	ifstream F;
	F.open("input.txt");
	ofstream F2;
	F2.open("output.txt");

	while (!F.eof()&&!F2.eof())
	{
		buf = "";
		getline(F,buf);
		for (int i = 0; i < buf.size();i++)
		{
			
			if ((buf[i] >= '0') && (buf[i] <= '9'))
			{
				f = true;
				num.push(buf[i]);
			}
			else
			{
				F2 << buf[i];
			}
			
		}

		if (f) {
			while (!num.empty())
			{
				F2 << num.top();
				num.pop();
			}
		}
		f = false;
		F2 << "\n";
	}
	F.close();
	F2.close();
	return 0;
}