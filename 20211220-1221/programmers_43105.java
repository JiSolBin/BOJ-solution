public class programmers_43105 {
    class Solution {
        public int solution(int[][] triangle) {
            int answer = 0;
            int[][] dp = new int[501][501];
            int height = triangle.length;

            dp[0][0] = triangle[0][0];

            for(int i=1; i<height; i++){
                for(int j=0; j<=i; j++){
                    // 삼각형 왼쪽 끝
                    if(j == 0){
                        dp[i][j] = dp[i-1][j] + triangle[i][j];
                    }
                    // 삼각형 오른쪽 끝
                    else if(j == i){
                        dp[i][j] = dp[i-1][j-1] + triangle[i][j];
                    }
                    else{
                        dp[i][j] = Math.max(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
                    }

                    // 최대값 갱신
                    answer = Math.max(answer, dp[i][j]);
                }
            }

            return answer;
        }
    }
}
