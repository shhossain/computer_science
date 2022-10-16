bool solve(vector<string>& moves, int x, int y) 
{
    for (auto& move : moves) 
    {
        if (move.front() == 'N')
             --y;
        else if (move.front() == 'S')
                ++y;
        else if (move.front() == 'W')
                ++x;
        else if (move.front() == 'E')
                --x;
    }
    if (!x && !y) 
    return true;
    
return false;
}
