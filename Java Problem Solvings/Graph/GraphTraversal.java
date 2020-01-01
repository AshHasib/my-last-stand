
package Graph;
import java.util.*;
public class GraphTraversal {

    public static void main(String[] args) {
        List <Integer>[]G=new ArrayList[100];
        Scanner scan=new Scanner(System.in);
        
        /**init the array */
        for(int i=0;i<100;i++) {
            G[i]=new ArrayList<Integer>();
        }

        System.out.println("Enter the number of nodes");
        //int nodes=scan.nextInt();

        System.out.println("Enter the number of edges:");
        int edges=scan.nextInt();

        int a,b;
        for(int i=1;i<=edges;i++) {
            a=scan.nextInt();
            b=scan.nextInt();

            G[a].add(b);
            G[b].add(a);
        }


        System.out.println("Traversing the array:");
        
        for(int i=1;i<=edges;i++) {
            for(int j=0;j<G.length;j++) {
                System.out.println(G[i].get(j));
            }
        }
        
    }
}