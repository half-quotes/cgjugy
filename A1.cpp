#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int K = 1;
    cin >> N;
    while (N--)
    {
        string s;
        cin >> s;
        int ans = 0;
        int freq[26] = {0};
        int cons, vow;
        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i] - 'A']++;
        }
            vow = (freq[0] + freq[4] + freq[8] + freq[14] + freq[20]);
            cons = (s.size() - vow );
            int mv = max({freq[0], freq[4], freq[8], freq[14], freq[20]});
                
                freq[0] = 0;
                freq[4] = 0;
                freq[8] = 0;
                freq[14] = 0;
                freq[20] = 0;
                int mc = *max_element(freq, freq + 26);
          
            if((vow==0&&cons==mc)||(cons==0&&vow==mv))
            ans=0;
            else if(vow==0||cons==0)
            ans=s.size();
            else
            {
                ans = min((cons + (2 * (vow - mv))),(vow + (2 * (cons - mc))));
            }
           
        
        cout << "Case #" << K << ": " << ans << "\n";
        K++;
    }
    return 0;
}