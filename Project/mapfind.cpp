// map::find
#include <iostream>
#include <map>
using namespace std;
int main ()
{
  std::map<char,int> mymap;
  std::map<char,int>::iterator it;

  mymap['a']=50;
  mymap['b']=100;
  mymap['c']=150;
  mymap['d']=200;

  it = mymap.find('e');
  if (it != mymap.end())
  cout<<"Not present"<<endl;
  mymap.erase (it);

  // print content:
  std::cout << "elements in mymap:" << '\n';
  std::cout <<mymap.find('a')->second<< '\n';
  std::cout <<mymap.find('c')->second << '\n';
  std::cout <<mymap.find('d')->second << '\n';

  return 0;
}
bool match(string stringToMatch,string rule,map<string,list<string> >language){
  list<string>::iterator it;
  //it=language.find(rule[0])
  list<string>rules=language.find(to_string(rule[0]))->second;
  if(stringToMatch.empty() && rule.empty()){
    return true;
  }
  else if(stringToMatch.empty()|| rule.empty()){
    return false;
  }
  if(language.find(rule[0]).empty()){
    if(stringToMatch[0]==rule[0]){
      bool result=match(rule.substr(1),);
    }
  }

  return false;
}
