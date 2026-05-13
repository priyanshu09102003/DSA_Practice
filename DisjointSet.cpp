#include<bits/stdc++.h>
using namespace std;

//Creating the disjoint set datastructure class (reusable code)

class DisjointSet{
    vector<int>rank;
    vector<int>parent;

    //Constructor

    public:
        DisjointSet(int n){
            rank.resize(n+1, 0);
            parent.resize(n+1);

            //Initially we initialise the parent with the number itself as they are initially their own parent

            for(int i = 0; i<=n; i++){
                parent[i] = i;
            }
        }

        //Find the ultimate parent of the node

        int findUltimateParent(int node){
            if(node == parent[node]) return node;

            return parent[node] = findUltimateParent(parent[node]);
        }

        //Compare the rank of ultimate parents and union them by rank

        void unionByRank(int u, int v){
            int ultimate_parent_of_u = findUltimateParent(u);
            int ultimate_parent_of_v = findUltimateParent(v);

            if(rank[ultimate_parent_of_u] < rank[ultimate_parent_of_v]){
                parent[ultimate_parent_of_u] = ultimate_parent_of_v;
            }

            else if (rank[ultimate_parent_of_v] < rank[ultimate_parent_of_u]){
                parent[ultimate_parent_of_v] = ultimate_parent_of_u;
            }

            //If both are same add to any of the node

            else{
                parent[ultimate_parent_of_v] = ultimate_parent_of_u;
                rank[ultimate_parent_of_u]++;
            }
        }
};

int main() {
    DisjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);
    // if 3 and 7 same or not
    if (ds.findUltimateParent(3) == ds.findUltimateParent(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";

    ds.unionByRank(3, 7);

    if (ds.findUltimateParent(3) == ds.findUltimateParent(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";
    return 0;
}