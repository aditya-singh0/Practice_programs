#include<bits/stdc++.h>
#define deb(x) cout << #x <<"="<< x << endl;cout.flush();
//auto indent->shift+alt+F
using namespace std;
//bfs always find the shortest path
int Bfs(){
   queue<int>q;
   vector<bool>visited;

   //q.push(initial value);
   
   //to be minmized
   int ans=0;
   while(!q.empty()){

      for(int i=0;i<q.size();i++){
         auto node=q.front();
         q.pop();
         if(visited[node]) continue;
         visited[node]=true;

         //process

         //q.push();
      }
   ++ans;
   }
return ans;
}
int main()
{

return 0;
}