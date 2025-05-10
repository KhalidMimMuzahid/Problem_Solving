#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;



int getMaxDeletions(string s) {
    unordered_map<char, int> freq;
    freq['U']=0;
    freq['D']=0;
    freq['R']=0;
    freq['L']=0;
    // Count each direction
    for (char ch : s) {
        freq[ch]++;
    }

    // Cancel U-D and L-R
    int cancel_UD = std::min(freq['U'], freq['D']);
    cout << "cancel_UD: "<< cancel_UD<< endl;

    int cancel_LR = std::min(freq['L'], freq['R']);
    cout << "cancel_LR: "<< cancel_LR<< endl;

    int total_cancelled = 2 * (cancel_UD + cancel_LR);
    return s.length() - total_cancelled;
}
int main()
{
    string s= "RUDRL";

    int result = getMaxDeletions(s);

    cout << "result: " << result<< "\n";

    return 0;
}
