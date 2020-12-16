
#include<iostream>
#include<stdlib.h> //for using exit(EXIT_SUCCESS)
#include<map>
#include<list>
#include<string>
using namespace std;


//function to print the list
void printList(list<string> terms){
  list <string>:: iterator it;
  for(it=terms.begin();it!=terms.end();++it){
    cout<<*it<<" ";
  }
  cout<<"\n";
}
//for manipulating the string input
void strMan(string grammar, map<string,list<string> > &language){
    int count=0;
    string terminal,nonTerminal;
    int pos=grammar.find_first_of('-');
    terminal=grammar.substr(pos+2);
    nonTerminal=grammar.substr(0,pos);
    for(int i=0;i<terminal.length();i++){
      //checking if digit is not = |
      if(static_cast<int>(terminal[i]==124)){
        count++;
      }
    }
    //list to store all the productions
    list<string> terms;
    string term=terminal;
    //dividing the right hand side of grammar
    while(count!=0){
      //dividing string on the basis of |
      int pos=term.find_first_of('|');
      string substring1=term.substr(0,pos);
      terms.push_back(substring1);
      term=term.substr(pos+1);
      count--;
    }
    terms.push_back(term);
    language.insert(pair<string,list<string> >(nonTerminal,terms));

    //language.insert(pair<string,list<string> >(nonTerminal,terms));
}
void printMap(map<string,list<string> >language){
  //printing the map
  cout<<"The Set of Grammar are as follows:"<<endl;
  map<string,list<string> >::iterator itr;
  for(itr=language.begin();itr!=language.end();++itr){
    cout<<itr->first<<":";
    printList(itr->second);
  }
}

bool match(string stringToMatch,string rule,map<string,list<string> >language){
  list<string>::iterator it;
  list<string>rules=language.find(to_string(rule[0]))->second;
  if(stringToMatch.empty() && rule.empty()){
    return true;
  }
  else if(stringToMatch.empty()|| rule.empty()){
    return false;
  }

  if(!rules.empty()){
    for(it=rules.begin();it!=rules.end();++it){
      string rule1=*it;
      if(match(stringToMatch,rule1+rule.substr(1),language)){
        return true;
      }
    }
  }
  return false;
}

bool isMatch(map<string,list<string> >language,string stringToMatch){
  list<string>::iterator it;
  list <string>rules=language.find("S")->second;
  for(it=rules.begin();it!=rules.end();++it){
  // for(string rule : rules){
  string rule=*it;
    if(match(stringToMatch,rule,language)){
      return true;
    }
  }
  return false;
}




int main(){
  string input;
  map<string,list<string> >language;
  int num;
  cout<<"Enter the total number of grammar you want to insert"<<endl;
  cin>>num;
  // cout<<"Enter the grammar, type end to quit"<<endl;
  // while(input!="end"){
  //     cin>>input;
  //     strMan(input, language);
  // }
  for (int i = 0; i < num; i++) {
    cin>>input;
    strMan(input, language);
  }
  //mappping non-terminal to terminals using hashing of key value pairs
  printMap(language);

  int numberOfLanguages;
  string stringToMatch;
  cout<<"Enter the number of languages you want to enter"<<endl;
  cin>>numberOfLanguages;
  cout<<"Enter the language"<<endl;
  cin>>stringToMatch;
  isMatch(language,stringToMatch);
  //cout<<"The Starting symbol is "<<language.find("S")->first;
  return 0;
}
