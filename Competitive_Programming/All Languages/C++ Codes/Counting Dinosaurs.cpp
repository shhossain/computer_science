int solve(string animals, string dinosaurs) 
{
    int m = dinosaurs.length();

    sort(dinosaurs.begin(), dinosaurs.end());

    int frq=0;

    for (int i = 0, j = 1; i < m, j <= m; i++, j++) 
    {
        if (dinosaurs[i] != dinosaurs[j])
            frq += count(animals.begin(), animals.end(), dinosaurs[i]);
    }
    return frq;
}
