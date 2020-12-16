#include<iostream>
#include<map>
#include<list>
#include<string>
using namespace std;


// void listTraverse(list<string>myList,string str){
//   list<string>::iterator it;
//   for(it=myList.begin();it!=myList.end();++it){
//     if(str==*it){
//       cout<<"Value is present"<<endl;
//     }
//     else{
//       cout<<"Not Present"<<endl;
//     }
//   }
// }


/*
void mapTraverse(map<string,list<string> >myMap){
  map<string,list<string> >::iterator itr;
  for(itr=myMap.begin();itr!=myMap.end();++itr){
    if(myMap[itr->first]){

    }
  }
}
*/

int main(){
  /*
  map <int,char> myMap;
  myMap.insert(pair<int,char>(1,'A'));
  myMap.insert(pair<int,char>(2,'B'));
  myMap.insert(pair<int,char>(3,'C')); 
  myMap.insert(pair<int,char>(4,'D'));
  myMap.insert(pair<int,char>(5,'E'));
  myMap.insert(pair<int,char>(6,'F'));

  cout<<myMap.at(2)<<endl;
  */
  //Talking input from user
  string str;//input string to be searched
  cout<<"Enter the string to be searched"<<endl;
  cin>>str;

  //creating list and map and populating it
  list<string>myList1;
  list<string>myList2;
  list<string>::iterator it;
  map<string,list<string> >myMap;
  map<string,list<string> >::iterator itr;

  myList1.push_back("aa");
  myList1.push_back("aXa");
  myList1.push_back("Yb");
  myList2.push_back("a");
  myList3.push_back("b");

  myMap.insert(pair<string,list<string> >("A",myList1));
  myMap.insert(pair<string,list<string> >("B",myList2));
  myMap.insert(pair<string,list<string> >("C",myList3));

  //searching map to find valuew
  if(myMap.find(str)==myMap.end()){
    cout<<"Present"<<endl;
  }
  else{
    cout<<"Not present"<<endl;
  }
  //cout<<myMap.at('A')<<endl;

  //listTraverse()

  return 0;
}
