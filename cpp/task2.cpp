#include <iostream>
using namespace std;
int main(){
    int k2,k3,k5,k6;
    int num256;
    int rmd;
    int num32;
    int sum;
    cout << "enter the number of 2 digits" << endl;
    cin >> k2;
    cout << "enter the number of 3 digits" << endl;
    cin >> k3;
    cout << "enter the number of 5 digits" << endl;
    cin >> k5;
    cout << "enter the number of 6 digits" << endl;
    cin >> k6;
    if ( (k6 < k5 && k6 < k2) || (k6 == k5 && k6 < k2) || ( k6 < k5 && k6 == k2) )
    {
        num256 = k6;
        rmd = k2 - k6;
        if ( rmd > k3 || rmd == k3)
        {
            num32 = k3;
        }
        else if(rmd < k3){
            num32 = rmd ;
        }
    }
    else if((k5 < k6 && k5 < k2) || (k5 == k6 && k5 < k2) || (k5 == k2 && k5 < k6) )
    {
        num256 = k5;
        rmd = k2 - k5 ;
        if ( rmd > k3 || rmd == k3)
        {
            num32 = k3;
        }
        else if(rmd < k3){
            num32 = rmd ;
        }
        
    }
    else
    {
        num256 = k2;
        num32 = 0;
    }
   sum = 256 * num256 + 32 * num32;
   cout << "the anton sum is: " << sum;
}

