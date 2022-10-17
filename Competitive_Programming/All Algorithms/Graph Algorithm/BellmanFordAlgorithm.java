import java.utils.*;
import java.io;
class BellmanFordAlgorithm
{
    public static void main(String[] args) throws IOException

{
BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
      int T = Integer.parseInt(br.readLine().trim());

while(T-->0)
{
String[] S1 = br.readLine().trim().split(" ");

int n = Integer.parseInt(S1[0]);

int m= Integer.parseInt(s1[1]);

int[][] edges = new int[m] [3];

for(int i = 0; i < m; i++){ string $2[] br.readLine().trim().split(" "); for(int j = 0; j < 3; j++) edges[i][j] = Integer.parseInt(52[j]);


} Solution obj= new Solution(); int ans - obj.isNegativeWeightCycle(n, edges); System.out.println(ans);

}
    public int isNegativeWeightCycle(int n, int[][] edge)
    {
        //code here
        int[]path=new int[n];
        Arrays.fill(path,Integer.MAX_VALUE);
        path[0]=0;
        for(int j=0;j<n-1;j++){
            for(int i=0;i<edge.length;i++){
                int u=edge[i][0];
                int v=edge[i][1];
                int wt=edge[i][2];
                if(path[u]==Integer.MAX_VALUE)continue;
                if(path[u]+wt<path[v])path[v]=path[u]+wt;
                //System.out.println(Arrays.toString(path));
            }
        }
        for(int i=0;i<edge.length;i++){
                int u=edge[i][0];
                int v=edge[i][1];
                int wt=edge[i][2];
                if(path[u]==Integer.MAX_VALUE)continue;
                if(path[u]+wt<path[v]){
                    return 1;
                }
                //System.out.println(Arrays.toString(path));
            }
        return 0;
    }
}
