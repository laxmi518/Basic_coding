

// program to find only two letter and their combination





#include<string>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string r;
    cin>>r;
    int max=0;
    
    for(int i=0;i<26;i++)
        for(int j=i+1;j<26;j++)
        {
        
        string s=r;
        for(int k=0;k<s.size();k++)
            if(s[k]!=97+i && s[k]!=97+j) 
        {
            if(s.size()>1)
            {    
            s.erase(k,1);
            k--;
            }
        }
        
        int d=0;
        
        for(int k=0;k<s.size()-1;k++)
            if(s[k]==s[k+1]) 
                d=1;
        
        if(s.size()>max && d==0) max=s.size();
        }
    
        if(max>1) cout<<max;
        else cout<<0;
    return 0;
}

// ##################

// removing the occurance of  all the character  ina a string

// ###################

#include <iostream>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    string str = "aabbcdeaa";

   char chars[] = "()-";
//   std::remove(str.begin(), str.end(), 'a');
  str.erase (std::remove(str.begin(), str.end(), 'a'), str.end());

//   for (unsigned int i = 0; i < str.length(); ++i)
//   {
//       // you need include <algorithm> to use general algorithms like std::remove()
//       str.erase (std::remove(str.begin(), str.end(), chars[i]), str.end());
//   }

   // output: 555 5555555
   cout << str << endl;
    return 0;
}






