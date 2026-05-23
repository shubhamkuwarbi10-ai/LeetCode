class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        unordered_map<char ,int> mpp;
        for (char c : moves){
            mpp[c]++;
        }

        if (mpp['_'] >= mpp['L']+mpp['R']) return mpp['_'] + abs(mpp['R'] - mpp['L']);

        else if (mpp['L'] - mpp['R'] > 0) return mpp['_'] + abs(mpp['R'] - mpp['L']);

        else return abs(mpp['R'] - mpp['L']) + mpp['_'];
    }
};