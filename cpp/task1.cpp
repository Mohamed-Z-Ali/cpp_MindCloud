#include <iostream>
using namespace std;

void orangePercent(int n){
    float a;
    float b = 0;
    float c = 0;
    cout << "enter the persent of orange in each drink" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        c = a / 100;
        b = b + c;
    }
    cout << "the total percentage of oranges in drinks: " << (b/n)*100 <<" %" ;
}
int main(){
    int x;
    cout << "enter the number of drinks" << endl;
    cin >> x;
    
    orangePercent(x);  
}
