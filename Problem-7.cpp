//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?

#include <iostream>

using namespace std;

int main()
{
    int i;
    int counter = 0;
    int n = 3;  
    bool isPrime= true;
    
    while(counter!=10001){
        for (int i = 3; i<=n/2; ++i) {
            if (n % i == 0){ 
                isPrime=false;
        break;}
    }
    if(isPrime)
    {
        counter++;
    }
    n++;
    isPrime = true;
  }
  cout<<n-1;
}
