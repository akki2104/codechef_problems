#define rep0(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<n;i++)
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define rep(i,a,n) for(int i=a;i<n;i++)
#define swappy(a,b) a^=b; b^=a; a^=b;

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
    cin>>t;
    while(t--)
    {
        int n,flag=1,count=0;
        cin>>n;
        string s;
        unordered_map<char,int> m;
        rep0(i,n)
        {
            char c;
            cin>>c;
            s.pb(c);
            m[c]++;
        }
        for(auto value:m)
        {
            if(value.second%2!=0)
            {
                flag=0;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else 
        {
            rep0(i,n-4)
            {
                if(s[i]==s[i+2])
                {
                    if(s[i+1]==s[i+3])
                    {
                        if(s[i+2]!=s[i+4])
                        {
                            flag=0;
                            break;
                        }
                    }
                }
                else
                {
                    if(s[i+1]==s[i+3])
                    {
                        if(s[i+2]==s[i+4])
                        {
                            flag=0;
                            break;
                        }
                    }
                }
            }
            if(!flag) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}


                                                        /* -coded by 
                                                         The Fifth Emperor 
                                                             Monkey D. Luffy */