#include <iostream>
using namespace std;
int top,flag;


void  check (string str, int n, char stack [ ])
    {
        flag=1;
        for(int i = 0 ; i < n ; i++ )
        {
            if (str [ i ] == '('|| str [ i ] == '{'|| str [ i ] == '[')
            {
                top = top + 1;
                stack[ top ] = str[i];
            }
           else if(str[ i ] == ')'&& stack[top]=='('||str[ i ] == '}'&&stack[top]=='{'||str[ i ] == ']' && stack[top]=='[')
            {
                top--;

            }

            else {
                flag=0;
                break;
            }
        }

        if(top == -1&& flag)
            cout << "String is balanced!"<< endl;
        else
            cout << "String is unbalanced!" << endl ;
    }

int main()
{
     int n;
     cin>>n;

     while(n--)
     {
         string s;
         cin>>s;
         int l=s.size();
        char stack[1001];
        top=-1;
       check (s , l , stack );
     }

        return 0;
}

