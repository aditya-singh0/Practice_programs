// program in c++ to use priority_queue with structure

#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define ROW 5
#define COL 2
// this is an structure which implements the
// operator overloading
#define tii tuple<int,float>
struct CompareHeight {
	bool operator()(tii & p1, tii & p2)
	{
		auto&[age1,height1]=p1;
		auto&[age2,height2]=p2;
		return height1 < height2;
	}
};
int main()
{
    priority_queue<tii, vector<tii>, CompareHeight> Q;
    float arr[ROW][COL] = { { 30, 5.5 }, { 25, 5 },
                    { 20, 6 }, { 33, 6.1 }, { 23, 5.6 } };
 
    for (int i = 0; i < ROW; ++i) {
 
        Q.push({arr[i][0], arr[i][1]});
 
        // insert an object in priority_queue by using
        // the tii structure constructor
    }
 
    while (!Q.empty()) {
        auto[age,height] = Q.top();
        cout << age << " " << height << "\n";
        Q.pop();
    }
    
	
	return 0;
}
