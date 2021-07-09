#include <iostream>
#include <queue>
#include <vector>
using namespace std; 

template< typename T, int columns, int rows > void BFS(int v, T(&array)[columns][rows] );
template< typename T, int columns, int rows > void DFS(int v, T(&array)[columns][rows] );
template< typename T, int columns, int rows > void travelling_salesman(int v, T(&array)[columns][rows] );

int main()
{
    
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};

    BFS(4, A);
    DFS(4,A);
    
    cout<<endl;
    cout<<"----------------"<<endl;
    
    int B[4][4] = { { 0, 10, 15, 20 },
                   { 10, 0, 35, 25 },
                   { 15, 35, 0, 30 },
                   { 20, 25, 30, 0 } };
    travelling_salesman(0, B);




	return 0;
}

template< typename T, int columns, int rows > void BFS(int v, T(&array)[columns][rows] ){
    
    queue <int> q;
    const int n = columns;
    int visited [n] =  {0};
    
    cout<<v<<" ";
    // Mark the current node as visited and enqueue it
    visited[v] = 1;
    q.emplace(v);
    
    while(!q.empty()){
        // Explore - Dequeue a vertex from queue
        int explore = q.front();
        q.pop();
        
        //iterating over connected vertices of vertex explore
        for(int i =1;i<=n;i++){
        //If a adjacent has not been visited,
        // then mark it visited and enqueue it
            if(array[explore][i] == 1 && visited[i] == 0){
                cout<< i <<" ";
                visited[i]=1;
                q.emplace(i);
            }
        }
    }
    cout<<endl;
}
template< typename T, int columns, int rows > void DFS(int v, T(&array)[columns][rows] ){
    const int n = columns;
    static int visited [n] =  {0};
    
    if (visited[v] ==0){
        cout << v << " ";
        visited[v] = 1;
        
        for(int vst =1;vst<=n;vst++){
            if(array[v][vst] == 1 && visited[vst] == 0){
                DFS( vst, array);
            }
        }
    }
}
template< typename T, int columns, int rows > void travelling_salesman(int v, T(&array)[columns][rows] ){
    
    //training traveling salesman implemented from sources online
    const int n = columns;
    
    //initiate vector with vertexes. then store them 
    //dont store the source one
    vector<int> vertx;
    for(int i {0}; i<n; i++){
        if(i!=v){
            vertx.push_back(i);
        }
    }
    //INT_MAX is maximum value and is 2147483647
    int minpath = INT_MAX;
    
    //next_permutation - Permutes the range [first, last) into the next permutation
    while(next_permutation(vertx.begin(), vertx.end())){
        //storing current weight of the path
        int currentweight = 0;
        //compute current weight
        int k = v;
        for(int j = 0; j<n ;j++){
            currentweight+= array[k][vertx[j]];
            k = vertx[j];
        }
        currentweight+= array[k][v];
        //update minimum
        if(minpath>currentweight){
            minpath = currentweight;
        }
        
    }
    cout <<minpath<<endl;
}