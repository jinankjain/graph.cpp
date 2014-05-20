#include<bits/stdc++.h>
using namespace std;
class Node{
    private:
        int value;
        vector<int> adjList;
        vector<int> weight;
    public:
        void set_value(int node_value){
            value = node_value;
        }
        void addEdge(int neighbour, int w){
            adjList.push_back(neighbour);
            weight.push_back(w);
        }
        vector<int> getAdjList(){
            return adjList;
        }
        int getValue(){
            return value;
        }
};
class Graph{
    private:
        vector<Node> graph;
        set<int> nodeList;
    public:
        bool nodeExist(int value){
            bool check = false;
            set<int>::iterator it = nodeList.find(value);
            if(it!=nodeList.end()){
                check = true;
                return check;
            }else{
                return check;
            }
        }
        void addNode(int value){
            Node nodes;
            if(!nodeExist(value)){
                nodes.set_value(value);
                graph.push_back(nodes);
                nodeList.insert(value);
            }
            else{
                cout<<"Node already exist";
            }
        }
        set<int> getAllNodes(){
            return nodeList;
        }
        void removeNode(int value){
            if(nodeExist(value)){
                set<int>::iterator it = nodeList.find(value);
                nodeList.erase(it);
                vector<Node>::iterator v = graph.begin();
                int  i = 0;
                while(i<graph.size()){
                    if(graph[i].getValue() == value){
                        break;
                    }
                    i++;
                    v++;
                }
                graph.erase(v);
            }else{
                cout<<"Node does not exist";
            }
        }
};
int main(){
    return 0;
}
