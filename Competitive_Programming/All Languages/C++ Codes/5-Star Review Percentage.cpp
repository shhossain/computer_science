int solve(vector<vector<int>>& reviews, int threshold) {
    double fi = 0, xi = 0;
    for (int i = 0; i < reviews.size(); i++) {
        fi += reviews[i][1];
        xi += reviews[i][0];
    }

    return max((double)0,
ceil((threshold * fi - 100 * xi) / max((double)1, (100 - (double)threshold))));
}
