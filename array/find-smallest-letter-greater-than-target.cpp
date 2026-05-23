class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l = 0 , r = n -1 , mid = -1;
        while (l<=r){
            mid = l + (r - l)/2;
            if (target == letters[mid]){
                if (mid == n-1) return letters[0];
                else if (mid == 0) return letters[1];
                else{
                    if (letters[mid+1] != target) return letters[mid+1];
                    l = mid +1;
                    continue;
                }
            }
            else if (target < letters[mid]) r = mid -1;
            else l = mid +1;
        }
        if (target < letters[mid]){
            if (mid == 0) return letters[0];
            else return letters[mid];
        }
        else {
            if (mid == 0) return letters[mid+1];
            else if (mid == n-1) return letters[0];
            else return letters[mid+1];
        }
    }
};