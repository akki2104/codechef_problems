#define forloop0(i, n) for (int i = 0; i < n; i++)
#define forloop1(i, n) for (int i = 1; i < n; i++)
#define pb(x) push_back(x)
#define rep(i, a, n) for (int i; i < a; i++)

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
        int n;
        cin >> n;
        int a[n], b[n];
        forloop0(i, n)
        {
            a[i] = i + 1;
        }
        int first = (n / 2) + 1, second = first - 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                b[i] = first;
                first++;
            }
            else
            {
                b[i] = second;
                second--;
            }
        }
        forloop0(i, n)
        {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
}

/* -coded by
 The Fifth Emperor
     Monkey D. Luffy */