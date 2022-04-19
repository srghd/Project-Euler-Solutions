//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>

using namespace std;

int main()
{
    
   int flag=1;
   int i = 1;
        while(flag)
          for(int j=1; j<21;j++)
          {
            if (i%j!=0)
            {
             i++;
             break;
            }
            else if(i%j==0 && j==20)
            flag = 0;
          }
cout<<i;
}
