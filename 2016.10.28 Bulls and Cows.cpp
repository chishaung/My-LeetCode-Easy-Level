class Solution {
public:
    string getHint(string secret, string guess) {

    // method: using vector as map index -- 3ms
    
    
    int A = 0, B = 0;

    vector<int> count(10, 0);
    
    // Find Bulls and put occurance into the vector
    for (int i = 0; i < guess.size(); i++) {
        if ( guess[i] == secret[i]) A++;
        count[secret[i] - '0']++;    
    }
    
    // Second Loop to check how many Cows
    for (int i = 0; i < secret.size(); i++) {
        if (count[guess[i] - '0'] > 0 ) {
            B++;
            count[guess[i] - '0']--;
        }
    }
    B -= A;

    return to_string(A) + "A" + to_string(B) + "B";

    }
};
