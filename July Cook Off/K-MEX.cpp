#define rep0(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i < n; i++)
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define rep(i, a, n) for (int i = a; i < n; i++)
#define swappy(a, b) \
    a ^= b;          \
    b ^= a;          \
    a ^= b;

/* Things will definetly not be served to you in a plate, you have to take it forcefully what's yours (Wilson Fisk, Daredevil) */
/* Forgetting is like a wound, the wound may heal but it has already left a scar. (Monkey D. Luffy, the future pirate king) */
/* It's okay to loose your way, just don't loose the sight of what you have decided. (Ronoroa Zoro, the first crew mate of the future pirate king) */
/* Life ins't a single battle, so it's okay to get beat up sometimes (Arthur Leywin's father, TBATE) */
/* There comes a time when a man has to stand and fight! That time is when his friends’ dreams are being laughed at! And I won’t let you laugh at that! ( God Usopp) */
/* Fools who don’t respect the past are likely to repeat it. (Akuma no ko Nico Robin) */
/* There are times when a man has no choice but to act! ( Soul King Brook) */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n];
        vector<int> mex;
        rep0(i, n)
        {
            cin >> a[i];
        }
        int ctsm = 0, ctlg = 0;
        rep0(i, n)
        {
            if (a[i] < k || a[i] > k)
            {
                mex.pb(a[i]);
                if (a[i] > k)
                    ctlg++;
                else
                    ctsm++;
            }
        }
        int flag = 1;
        sort(mex.begin(), mex.end());
        int count = 0;
        rep0(i, k)
        {
            if (count == m)
            {
                flag = 1;
                break;
            }
            /* if(flag=2)
            {
                flag=0;
                break;
            } */
            rep0(j,mex.size()-1)
            {
                if (a[j] == i)
                {
                    flag = 1;
                    count++;
                    break;
                }
                else if(a[j]!=i)
                    flag = 0;
                if(j==mex.size()-1 && a[j]!=i)
                {
                    flag=2;
                    break;
                }
            }
            
        }
        /* cout<<flag<<endl; */
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

/* -coded by
 The Fifth Emperor
     Monkey D. Luffy */