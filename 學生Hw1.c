#include<stdio.h>
#include<stdlib.h>

int main(){
    int Nodes, Links, Req;
    scanf("%d %d %d", &Nodes, &Links, &Req);
    int vertex[Nodes];
    int path[Req][Nodes];
    int path2[Nodes];
    int path3[Nodes];
    int ans = 0;
    int QuantumMemories[Nodes]; //存放Node分別個數的陣列
    int Channels[Nodes][Nodes]; //存放link個數的陣列
    int Request[Req][3];        //存放需求路徑的陣列
    int graph[Nodes][Nodes];    //Graph陣列，用以查看是否兩者之間有路徑
    int NodeCounter;            //儲存Node值
    for(int i = 0; i < Nodes; i++){
      int Memory;
      scanf("%d %d", &NodeCounter, &Memory);
      QuantumMemories[i] = Memory;
    }
    for(int i = 0; i < Nodes; i++){     //初始化
      for(int j = 0; j < Nodes; j++){
        Channels[i][j] = 0;
        graph[i][j] = 0;
      }
    }
    int LinkCounter, LinkBegin, LinkEnd, s;
    for(int i = 0; i < Links ; i++){        //儲存link值與graph值
        scanf("%d %d %d %d",&LinkCounter, &LinkBegin, &LinkEnd, &s);
        Channels[LinkBegin][LinkEnd] = s;
        graph[LinkBegin][LinkEnd] = 1;
        Channels[LinkEnd][LinkBegin] = s;
        graph[LinkEnd][LinkBegin] = 1;
    }
    
    for(int i=0;i<Req;i++) //儲存Req值
        scanf("%d%d%d", &Request[i][0], &Request[i][1], &Request[i][2]);
    //////////////////////建圖
    // printf("\n建圖時間\n");
    // for (int i = 0; i < Nodes; i++){
    //     printf("%d %d\n", i, QuantumMemories[i]);
    // }
    // printf("\n");
    // for (int i = 0; i < Nodes; i++){
    //     for (int j = 0; j < Nodes;j++){
    //         printf("%d ", Channels[i][j]);
    //     }
    //     printf("\n");
    // }
    // for (int i = 0; i < Nodes; i++){
    //     for (int j = 0; j < Nodes;j++){
    //         printf("%d ", graph[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for (int i = 0; i < Req; i++){
    //     printf("%d %d %d\n",Request[i][0], Request[i][1], Request[i][2]);
    // }


    //////////////////////////
    int dist[Nodes];
    int sptSet[Nodes];
    int min, min_index;
    int pass[Req];
    for (int i = 0;i<Req;i++)
        pass[i] = 1;
    int d[Req];


    for(int i = 0; i < Req ; i++){
        //初始化
        for (int j = 0; j < Nodes; j++){
          dist[j] = INT_MAX, sptSet[j] = 0, vertex[j] = -1;
        }
        dist[Request[i][1]] = 0;
        //Dijsktra算法
        for (int v = 0; v < Nodes; v++){
            min = INT_MAX;
            for (int k = 0; k < Nodes; k++){
                if(dist[k] < min && sptSet[k] == 0){
                    min = dist[k];
                    min_index = k;
                }
            }
            sptSet[min_index] = 1;
            for(int a = 0; a < Nodes; a++){
                if(graph[min_index][a]==1 && sptSet[a] == 0 && dist[min_index]+1 < dist[a]){
                    dist[a] = dist[min_index]+1;
                    vertex[a] = min_index;
                }
            }   
        }
        int current = Request[i][2];
        d[i] = 0;
        while(current != -1){ 
            path[i][d[i]] = current;
            current = vertex[current];
            d[i]+=1;
        }

            //字典排序

            //初始化
            for (int j = 0; j < Nodes; j++){
                dist[j] = INT_MAX, sptSet[j] = 0, vertex[j] = -1;
            }
            dist[Request[i][2]] = 0;
            //Dijsktra算法
            for (int v = 0; v < Nodes; v++){
                min = INT_MAX;
                for (int k = 0; k < Nodes; k++){
                    if(dist[k] < min && sptSet[k] == 0){
                        min = dist[k];
                        min_index = k;
                    }
                }
                sptSet[min_index] = 1;
                for(int a = 0; a < Nodes; a++){
                    if(graph[min_index][a]==1 && sptSet[a] == 0 && dist[min_index]+1 < dist[a]){
                        dist[a] = dist[min_index]+1;
                        vertex[a] = min_index;
                    }
                }
            }
            int current2 = Request[i][1], e = 0;
            while (current2 != -1)
            {
                path2[e] = current2;
                current2 = vertex[current2];
                e += 1;
                }
                path2[e+1] = Request[i][2];

            //比較
            for(int m = 0; m < d[i]; m++){
              path3[d[i]-m-1] = path[i][m];
            }
            int over = 0;
            for(int n = 0; n < Nodes; n++){
                if(path2[n] < path3[n]){
                    for(int l = 0; l < d[i]; l++){
                        path[i][l] = path2[l];
                    }
                    over = 1;
                }
                else if(path2[n] > path3[n]){
                    for(int l = 0; l < d[i]; l++){
                        path[i][l] = path3[l];
                    }
                    over = 1;
                }
                if(over == 1){
                    break;
                }
            }
        //檢查Memory
        if (QuantumMemories[Request[i][1]] < 1 && QuantumMemories[Request[i][2]] < 1)
        {
            pass[i] = 0;
        }
        
        for(int j = 1; j < d[i]-1; j++){
            if(QuantumMemories[j] < 2){
              pass[i] = 0;
            }
        }
        
        for(int j = 0; j < d[i]-1; j++){
            if(Channels[path[i][j]][path[i][j+1]] < 1){
                pass[i] = 0; 
            }
        }
        if(pass[i] == 1){
          ans += 1;
          QuantumMemories[Request[i][1]] -= 1;
          QuantumMemories[Request[i][2]] -= 1;
          for(int j = 1; j < d[i]-1; j++){
              QuantumMemories[j] -= 2;
          }
          for(int j = 0; j < d[i]-1; j++){
              Channels[path[i][j]][path[i][j+1]] -= 1;
              Channels[path[i][j+1]][path[i][j]] -= 1;
          }
      }
    }//Req找路徑
    //print
    printf("%d\n", ans);
    for(int i = 0; i < Req; i++){
        if(pass[i] == 1){
            printf("%d ", i);
            for(int j = 0; j < d[i]; j++){
                printf("%d ", path[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}






            /*for(int i = 0; i < Nodes; i++){
                min = INT_MAX;
            printf("Vertex \t\t Distance from Source\n");
        
            for (int i = 0; i < Nodes; i++)
                printf("%d \t\t\t\t %d\n", i, dist[i]);

            for (int count = 0; count < Nodes - 1; count++) {


                sptSet[u] = true;

                for (int v = 0; v < Nodes; v++){

                    if (!sptSet[v] && graph[u][v]
                        && dist[u] != INT_MAX
                        && dist[u] + graph[u][v] < dist[v]){

                            dist[v] = dist[u] + graph[u][v];
                            vertex[v] = u;
                        }
                }
            }
        }

        //跑演算法
        for(int reqcounter = 0; reqcounter < Req; reqcounter++){

            dijkstra(graph, Request[reqcounter][1]);

            int i = Request[reqcounter][1];

            while(QuantumMemories[i] != 0 && QuantumMemories[path[i]] != 0
                  &&Channels[i][path[i]] != 0&&i != Request[reqcounter][2]){

                Channels[i][path[i]] -= 1;
                QuantumMemories[i] -= 1;
                QuantumMemories[path[i]] -=1;
                i = path[i];
            }
        }
    }*/
