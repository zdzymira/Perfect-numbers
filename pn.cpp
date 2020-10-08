#include <iostream>

int n,d,a, sum=0;
int main()
{
    for(int i=1;i<10000;i++)
    {   
      
        for(d=1, n=1, sum=0 ; d<i; d++, n++ )
        {
          
           if(i%d==0) {
           //std::cout << "dla i="<<i<<", d="<< d<<", suma=" ;
           sum=sum+d;
          // std::cout << sum << "\n" ; 
           }
        
        }if( i==sum){std::cout << i ;std::cout << "\n" ;}

    }



    return 0;  
}