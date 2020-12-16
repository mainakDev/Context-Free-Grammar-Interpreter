#include<iostream>
#include<map>
#include<list>
using namespace std;

int main(){
  char c;
  cout<<"Enter the character"<<endl;
  cin>>c;

  map<char,char>myMap;
  map<char,char>::iterator itr;
  myMap.insert(pair<char,char>('A','a'));
  myMap.insert(pair<char,char>('B','b'));
  myMap.insert(pair<char,char>('C','c'));

  // for(itr=myMap.begin();itr!=myMap.end();++itr){
  //   if(myMap[itr->first]==c){
  //
  //   }
  //   else{
  //
  //   }
  // }

  // //search value pari based on key
  // if(myMap.find(c)==myMap.end()){
  //   cout<<"True";
  // }
  // else{
  //   cout<<"false";
  // }

  for(itr=myMap.begin();itr!=myMap.end();++itr){
    if(myMap.find(itr->second))
  }
  return 0;
}
