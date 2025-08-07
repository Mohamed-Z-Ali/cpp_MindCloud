#include <iostream>
#include <vector>
using namespace std;
int gcd(int x, int y) {
    int maxCommon = 1;
    for (int i = 1; i <= min(x, y); ++i) {
        if (x % i == 0 && y % i == 0) {
            maxCommon = i;
        }
    }
    return maxCommon;
}

int main(){
    int a,b,c;
    int max = 0;
    cout << "enter the number of test cases" << endl;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cout << "enter the range (n)" << endl;
        cin >> b ;
        

        for (int j = 1; j < b; j++)
        {
            for (int k = j + 1; k <= b; k++)
            {
               c =  gcd(j , k );
               if (c > max)
               {
                    max = c;
               }
            }
        }
        cout << "the max is: " << max;
        max = 0;
    }
}
/* another way to do that*/

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << n / 2 << endl;
    }
    return 0;
}



