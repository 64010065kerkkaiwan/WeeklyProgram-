#include <iostream>
using namespace std;
  
int main()
{ 
    int n; 
    
    cin >> n;
    if (n>=1)
    {
        n = n+n+1 ;
    for (int i = 1; i <= n; i++) {
  
        
        for (int j = 1; j <= n; j++) 
        {
        
  
            if (j == i || j == (n + 1 - i))
                cout << "*"; 
            else
                cout << " ";
        }
   
        
        cout << endl;
    }
    }
    else 
    {
        cout << "Error";
    }
    return 0;
}
