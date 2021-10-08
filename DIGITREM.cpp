#include <bits/stdc++.h>
using namespace std;

#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define sc ;
#define ss second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ll long long
#define intakhab ios::sync_with_stdio(false);
#define alam cin.tie(NULL);

int main()
{
    tc
    {
        ll n;
        ll d;

        cin >> n;
        cin >> d;

        string str = to_string(n);
        ll len = str.length();

        if (d == 0)
        {
            int ind2=len;
            
            for (int i = 0; i < len; i++)
            {
                if (str[i] == '0')
                {
                    str[i] = '1';
                    ind2=i;
                    break;
                }
            }

            for (int j = ind2 + 1; j < len; j++)
            {
                str[j] = '1';
            }
        }
        else if (d == 9)
        {
            if (str[0] == '9')
            {
                for (int i = 0; i < len; i++)
                {
                    str[i] = '0';
                }
                str = "1" + str;
            }
            else
            {
                int ind=len;
                for (int i = 0; i < len; i++)
                {
                    if (str[i] == '9')
                    {
                        
                        for(int k=i-1; k >= 0; k--)
                        {
                            if(str[k] <= '7')
                            {
                                str[k]++;
                                ind=k;
                                goto cvv;
                            }
                        }
                        
                        for (int i = 0; i < len; i++)
                        {
                            str[i] = '0';
                        }
                        str = "1" + str;
                        
                        goto fvv;
                    }
                }
                
                
                
                
                cvv:;

                for (int j = ind+1; j < len; j++)
                {
                    str[j] = '0';
                }
                
                fvv:;
            }
        }
        else
        {
            int i = 0;
            for (i = 0; i < len; i++)
            {
                if ((str[i] - 48) == d)
                {
                    str[i]=str[i]+1;
                    break;
                }
            }

            for (int j = i + 1; j < len; j++)
            {
                str[j] = '0';
            }
        }

        ll nn = stoll(str);

        cout << nn - n << "\n";
    }
}