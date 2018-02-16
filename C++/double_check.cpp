#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string data;
    cin>>data;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int length = data.length();
    int i;
    int j =0;
    bool flag = 1;
    while(flag){
       
        flag = 0;
       for ( i=0;i<length-1;i++){
        
      
       
        if(data[i]==data[i+1]){
            flag =1;
            data.erase(i,2);
           
           
            length = data.length();
            break;
        }
        
       }  
    }
        
        
    if(data.empty() )
        cout <<"Empty String";
    else    
     cout << data<<endl;
    return 0;
}




////next solution using list


// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//   string s;
//   cin>>s;
//   size_t i = 0;
//   while(i<s.size()-1&&!s.empty())
//   {
//       if(s[i]==s[i+1]){
//           s.erase(i,2);
//           i-=i?1:0;
//       }else
//         ++i;
//   }
//   // output //
//   if(!s.empty())
//     cout<<s; 
//   else
//     cout<<"Empty String";  
//   return 0;
// }