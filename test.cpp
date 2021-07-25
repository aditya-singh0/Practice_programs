#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int solution(vector<int>& A) {
    if (!A.size()) {
        return 0;
    }
    int i = 0;
    int recent = i + 1;
    int last = i;
    int same = 0;
    int dis = 0;
    bool temp = false;
    for (; i < A.size() - 1; i++) {
        if (A[i + 1] >= A[i]) {
            recent = i + 1;
            if (A[i + 1] == A[i]) {
                ++same;
            }
            else {
                temp = true;
                if (same) {
                    same = 0;
                }
            }
        }
        else
        {
            if (temp) {
                last = recent - same;
                temp = false;
                same = 0;
            }
            recent = i + 1;
        }
        dis = (dis <= (recent - last + 1)) ? (recent - last + 1) : dis;
    }
    return dis;
}

int main()
{
    vector<int> v1{ 1,5,5,2,6 };
    cout << solution(v1) << endl;   //7 
   
 
    return 0;}