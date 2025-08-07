#include <iostream>
#include <vector>
using namespace std;

void countApplesAndOranges(int s,int t, int a, int b, vector <int> apples, vector <int> oranges){
    int countApples = 0;
    int countOranges = 0;

    for (int i = 0; i < apples.size(); i++)
    {
        if(apples[i] + a >= s && apples[i] + a <= t)
        {
            countApples++;
        }
    }
    for (int i = 0; i < oranges.size(); i++)
    {
        if( (oranges[i]) + b >= s && (oranges[i]) + b <= t)
        {
            countOranges++;
        }
    }
    cout << countApples << endl;
    cout << countOranges << endl;
    
    
    

}
int main(){
    int s,t,a,b,m,n,p,o;
    cout << "enter the start position of the house" << endl;
    cin >> s;
    cout << "enter the end position of the house" <<endl;
    cin >> t;
    cout << "enter the position of the apple tree" <<endl;
    cin >> a;
    cout << "enter the position of the orange tree" <<endl;
    cin >> b;
    cout << "enter the number of apples that fall" <<endl;
    cin >> m;
    cout << "enter the number of oranges that fall" <<endl;
    cin >> n;
    vector <int> apples;
    vector <int> oranges;
    cout << "enter the position of apples that fall" <<endl;
    for (int i = 0; i < m; i++)
    {
        cin >> p;
        apples.push_back(p);
    }
    cout << "enter the position of oranges that fall" <<endl;
    for (int j = 0; j < n; j++)
    {
        cin >> o;
        oranges.push_back(o);
    }
    countApplesAndOranges(s, t, a,b ,apples ,oranges);
}