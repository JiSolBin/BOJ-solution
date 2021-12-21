public class programmers_42898 {
    static class Solution {
        public int solution(int m, int n, int[][] puddles) {
            int[][] map = new int[n][m];

            for (int[] puddle : puddles)
                map[puddle[1] - 1][puddle[0] - 1] = -1;

            map[0][0] = 1;

            for(int i=0; i<n; ++i){
                for(int j=0; j<m; ++j){
                    if(map[i][j]==-1) {
                        map[i][j] = 0;
                        continue;
                    }

                    // 제일 윗 줄이 아니면
                    if(i!=0){
                        map[i][j] += map[i-1][j] % 1000000007;
                    }
                    if(j!=0) {
                        map[i][j] += map[i][j-1] % 1000000007;
                    }
                }
            }

            return map[n-1][m-1] % 1000000007;
        }
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        int[][] arr = {{2,3}, {4,2}};
        int res = sol.solution(4,4,arr);
        System.out.println(res);
    }
}
