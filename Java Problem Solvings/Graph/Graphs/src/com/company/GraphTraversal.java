package com.company;

import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class GraphTraversal {

    /**
     *
     * Graph Traversal Algorithm Part 1
     */

    //the list which will store the graph
    //it is an array of ArrayList
    //can work with 100 nodes, static
    static List<Integer> []graph = new List[100];

    //method to take input in the graph
    static void addEdge(int a,int b) {
        //considering it as an undirected graph
        graph[a].add(b);
        graph[b].add(a);
    }


    public static void main(String[] args) {

        //init. the graph
        for(int i=0;i<100;i++) {
            graph[i]=new ArrayList<>();
        }
        Scanner scan=new Scanner(System.in);

        int numNodes, numEdges;

        numNodes=scan.nextInt();
        numEdges=scan.nextInt();

        //graph input as adjacency list
        for(int i=0;i<numEdges;i++) {
            int a,b;
            a=scan.nextInt();
            b=scan.nextInt();
            addEdge(a,b);
        }

        //consider source node to be 1
        int sourceNode=1;

        //call bfs
        bfs(numNodes,sourceNode);
    }

    private static void bfs(int numNodes, int sourceNode) {
        int distance[]=new int[numNodes+1];
        for(int i=1;i<=numNodes;i++) {
            distance[i]=-1; //not visited means -1
        }
        distance[sourceNode]=0; //source to source is 0

        List<Integer> queue = new ArrayList<>(); //BFS queue
        queue.add(sourceNode);

        while(queue.size()>0) { //while queue is not empty
            int u=queue.remove(0);

            for(int i=0;i<graph[u].size();i++) {
                int v = graph[u].get(i); //getting the u - v adjacent

                //-1 means not visited yet, so
                if(distance[v] == -1) {
                    distance[v]=distance[u]+1; //adjacent node will be incremented
                    queue.add(v);
                }

            }
        }

        //displaying the node distances from source
        for(int i=1;i<=numNodes;i++) {
            System.out.printf("%d -> %d = %d\n", sourceNode, i, distance[i]);
        }

    }
}
