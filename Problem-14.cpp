#include <stdio.h>
#include <iostream>

int main()
{
    int terms;
    long long number;
    long long startNumber, answer;
    long saveTerms;
    
    
    
    for(int startNumber =2; startNumber<1000000;startNumber++)
    {
        terms=0;
        number=startNumber;
        
        while(number!=1)
        {
            if(number%2==0)
            {
                number/=2;
                terms++;
            }
            
            else
            {
                number = (number*3)+1;
            }
            
        }
        
        if(terms>saveTerms)
        {
            saveTerms=terms;
            answer=startNumber;
        }
    }
      std::cout<<answer;  
}

