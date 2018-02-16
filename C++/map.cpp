#include <bits/stdc++.h>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> types(n);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
    }
    
   
    
  std::map<int, int> m;
 int max_key=0,max_value=0;
   
   for(int types_i = 0; types_i < n; types_i++){
       if (m.find(types[types_i]) != m.end())
           m[types[types_i]] =  m[types[types_i] ]+1;
       else
              m[types[types_i]] =1;
    }
  for ( std::map<int,int>::const_iterator it = m.begin(); it != m.end(); it++) {
  
      if((it->second)>max_value ){
          max_value = it->second;
          max_key = it->first;
      }
      
      if((it->second)== max_value ){
          
          if((it->first )< max_key)
              {
              max_key = it->first;
              max_value = it->second;
          }
 
      }
      
         
    
}
    
    cout<<max_key;
    

}
