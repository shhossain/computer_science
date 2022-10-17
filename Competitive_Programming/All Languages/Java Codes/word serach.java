class Solution {
    public boolean exist(char[][] board, String word) {
        
        int c = 0;
        
        for(int i = 0; i < board.length; i++)
        {
            for(int j = 0; j < board[i].length; j++)
            {
                if(word.charAt(0) == board[i][j] && dfs(board, i, j, 0, word))
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    public boolean dfs(char[][] board, int i, int j, int count, String word)
    {
        if(count == word.length())
            return true;
        
        if(i < 0 || i >= board.length || j < 0 || j >= board[i].length || word.charAt(count) != board[i][j])
            return false;
        
        char temp = board[i][j];
        board[i][j] = ' ';
        boolean found = dfs(board, i+1, j, count+1, word) ||
                        dfs(board, i-1, j, count+1, word) ||
                        dfs(board, i, j-1, count+1, word) ||
                        dfs(board, i, j+1, count+1, word);
        
        board[i][j] = temp;
        return found;
        
    }
}
