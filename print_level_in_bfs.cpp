// BFS print level working code

// Graph used in this article : https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n = 4;
    int source = 2;
    vector< vector<int> > adj(n);
    
    adj[0].push_back(1);
    adj[0].push_back(2);

    adj[1].push_back(2);

    adj[2].push_back(0);
    adj[2].push_back(3);

    adj[3].push_back(3);

    queue<int>q;
    bool visited[n];

    int level[n];
    // Fill whole array with 0
    memset(level, 0, n*sizeof(level[0]));

    for(int i=0;i<n;i++)   visited[i] = false;
    
    q.push(source);

    while(!q.empty())
    {
        int s = q.front();
        q.pop();

        if(visited[s]==true) continue;
        visited[s]=true;

        //print bfs
        cout<<s<<" :level = "<<level[s]<<"  =>  ";
 
        for(int i=0;i<adj[s].size();i++)
        {
            int ch = adj[s][i];
            if(visited[ch]==true) continue;
            q.push(ch);
            level[ch]=level[s]+1;
        }

    }



 return 0;


}
