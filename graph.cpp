#include<iostream>
#include<vector>

using namespace std;

class graph
{
	public:
		int n;
		vector< vector<int> > edge;
		
		graph(int g_size)
		{
			n=g_size;
			edge.resize(n);
		}
		void addedge(int start, int end)
		{
			edge[start].push_back(end);
			edge[end].push_back(start);
		}
		void display()
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<edge[i].size();j++)
				{
					cout<<edge[i][j]<<" ";
				}
				if(edge.size())
					cout<<endl;
			}
		}
};
int main()
{
	graph g(4);
	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(3,1);
	g.display();
return 0;
}
