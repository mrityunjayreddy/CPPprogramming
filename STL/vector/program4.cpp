#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int maxPrimeFactors(int n)
{
    
    int maxPrime = -1;
    while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1; 
    }
  
     while (n % 3 == 0) {
        maxPrime = 3;
        n=n/3;
    }
 
    for (int i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
      while (n % (i+2) == 0) {
            maxPrime = i+2;
            n = n / (i+2);
        }
    }
 
    if (n > 4)
        maxPrime = n;
 
    return maxPrime;
}

int main() {
    
    int n;
    cin>>n;
    vector<int> v(n,0);
    int arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    
    int num;
    cin>>num;
    
    int j = 0;
    for(int i = 0;i<n;i++)
    {
        int c = maxPrimeFactors(arr[i]);
        if(c <= num)
        {
        	v[j] = arr[i];
			j++;  
		}
              
    }
    
    
    sort(v.begin(),v.end());
    if(v.size() != 0)
        cout<<v[v.size()-1];
    else
        cout<<0;
    
    return 0;
        
}
