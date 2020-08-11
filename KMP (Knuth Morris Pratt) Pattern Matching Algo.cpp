// KMP algorithm

#include<bits/stdc++.h>
using namespace std;

void findlps( char *p ,int l , int * lps)   // utiltiy function for find longest prefix array for pattern
{
    int j=0;   // longest prefix iterator
    
    lps[0]=0;  // it is always Zero 
    
    int i=1;   // pattern iterator i.e. 1 to pattern.length()
   
    while(i<l) 
    {
       if(p[i]==p[j])  
       {
           lps[i] = j+1;
           j++;
           i++;
       } 
       else
       {
          if(j!=0)
          {
              j= lps[j-1];

          }
          else
          {
              lps[i]=0;
              i++;
          }
          
       }
       



    }
}
void findpatternindex(char *s ,char *p)
{
    int sl = strlen(s); // string length 
    int pl = strlen(p); // pattern length

    int lps[pl];   // longest prefix array 
    
    findlps(p,pl,lps);
    
    int i=0 , j=0;
    while(i<sl)
    {
        if(s[i]==p[j])
        {
            i++ ;
            j++ ;
        }
        if( j == pl )
        {
            cout<< "Pattern Match At index :  "<<i-j<< " of String" <<endl ;
            j = lps[j-1];
        }
        else if( i < sl && s[i]!= p[j])
        {
               if(j!=0) j=lps[j-1];
               else i++;
        }
        
        
    }

}



int main()


{              
     char s[] = "ONIONIONSONIONIONS";  // string or text 
     char p[] = "ONIONS";  // Pattern to be found in string 
   
    findpatternindex(s,p); 
    
    return 0;
}
/**
 OUTPUT : 
Pattern Match At index :  3 of String
Pattern Match At index :  12 of String
 
 **/