//http://w...content-available-to-author-only...s.org/recursively-print-all-sentences-that-can-be-formed-from-list-of-word-lists/
#include <iostream>
using namespace std;
#include<vector>
vector<vector<string> >ans;
vector<string> temp;
void func(vector<vector<string> > &input,int j)
{
	if(j==input.size())
	{
		//we have reached end
		ans.push_back(temp);
       
	}
	else
	{
		vector<string> current=input[j];
		for(int i=0;i<current.size();i++)
		{
			temp.push_back(current[i]);
			func(input,j+1);
			  temp.pop_back();
		}
	}
}
int main() 
{
	vector<vector<string> >input {{"you", "we"},
                                  {"have", "are"},
                                  {"sleep", "eat", "drink"}
                                  };
	
	func(input,0);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		cout<<ans[i][j]<<" ";
		cout<<endl;
	}
	// your code goes here
	return 0;
}