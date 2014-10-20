#include<iostream>
#include<cstdio>
#include<vector>
#include<stack>
#include<string>

using namespace std;

void postfix(string s)
{
	vector<char> rpn;
	stack<char> st;
	for(int i=0;i<s.length();i++)
	{
	char ch;
		if(isalpha(s.at(i)))
		{
			//cout<<s.at(i)<<endl;
			rpn.push_back(s.at(i));
		}
		else
		{
			if(s.at(i)==')')
			{
				while(!st.empty())
				{
					ch=st.top();
					//cout<<ch<<endl;
					st.pop();
					if(ch=='(')
					{
						break;
					}
					rpn.push_back(ch);
				}
			}
			else
			{
								
				st.push(s.at(i));
			}
		}
	}
	for(int i=0;i<rpn.size();i++)
	{
		cout<<rpn[i];
	}
	cout<<endl;
}
				
int main()
{
	int t;
	scanf("%d",&t);
	string s;
	for(int i=0;i<t;i++)
	{
		getline(
return 0;
}
