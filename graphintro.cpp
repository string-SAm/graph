#include<bits/stdc++.h>
using namespace std;

class graph{
    int v;
    list<int> *l;
     
     public:
     graph(int v){
         l=new list<int> [v];
     }

     void addedge(int u, int v){
         l[u].push_back(v);
         l[v].push_back(u);
     }

     void print(){
         for(int i=0;i<v;i++){
             cout<<i<<"->";
             for(auto n:l[i]){
                 cout<<n<<" ";
             }
             cout<<endl;
         }
         
     }
};

    
int main(){
    graph g(5);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,3);
    g.addedge(3,4);
    g.addedge(1,2);
    g.addedge(2,3);
    g.print();
    return 0;
}