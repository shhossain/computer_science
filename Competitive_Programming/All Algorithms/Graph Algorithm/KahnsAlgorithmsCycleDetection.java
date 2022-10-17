import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class KahnsAlgorithm
{

    static boolean isCycle(GraphL g){

        int[] inDegree = new int[g.vertices+1] ;

        for (int i = 1 ; i <= g.vertices ; i++){
            for (int x : g.adjList.get(i)) {
                inDegree[x]++ ;
            }
        }

        Queue<Integer> q = new LinkedList<>() ;
        for (int i = 1 ; i <= g.vertices ; i++){
            if (inDegree[i] == 0) q.add(i) ;
        }

        int cnt = 0 ;

        while (!q.isEmpty()){

            int curr = q.poll() ;
            cnt++ ;

            for (int x: g.adjList.get(curr)){
                inDegree[x]-- ;
                if (inDegree[x] == 0) q.add(x) ;
            }
        }

        return cnt != g.vertices ;

    }

    public static void main(String[] args) {
        GraphL g = new GraphL(9);
        g.addEdge(1,2,true);
        g.addEdge(2,3,true);
        g.addEdge(3,4,true);
        //g.addEdge(4,1,true);
        g.addEdge(3,6,true);
        g.addEdge(4,5,true);
        g.addEdge(6,5,true);
        g.addEdge(7,2,true);
        g.addEdge(7,8,true);
        g.addEdge(8,9,true);
        g.addEdge(7,9,true);

        System.out.println(isCycle(g));
    }

    static class GraphL{
        ArrayList<ArrayList<Integer>> adjList = new ArrayList<>() ;
        int vertices = 0 ;

        GraphL(int vertices){
            this.vertices = vertices ;
            for (int i = 0 ; i <= vertices ; i++){
                adjList.add(new ArrayList<>()) ;
            }
        }

        void addEdge(int u, int v, boolean isDirected){
            adjList.get(u).add(v) ;
            if (!isDirected) adjList.get(v).add(u) ;
        }
    }

}
