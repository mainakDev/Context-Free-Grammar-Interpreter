#include<iostream>
#include<list>
using namespace std;
int main(){
  string str;
  cout<<"Enter the string"<<endl;
  cin>>str;
  list<string>l1;
  list<string>::iterator i;
  l1.push_back("aa");
  l1.push_back("aXa");
  l1.push_back("Yb");

  for(i=l1.begin();i!=l1.end();i++){

  }

  return 0;
}
