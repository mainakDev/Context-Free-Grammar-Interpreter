#include<iostream>
#include<string>
#include<map>
#include<list>
using namespace std;

void print(list<string> terms) {
    list <string> :: iterator it;
    for(it = terms.begin(); it != terms.end(); ++it)
        cout << " " << *it<<"\n";
}

int main(){
  string grammar="S->aa|aXa|Yb";
  // string grammar="X->a";
  // string grammar="Y->b";
  // cout<<"Enter the Grammar rules"<<endl;
  // for(int i=0)
  // string grammar;
  //for extracting the terminal and non terminals
  string nonTerminal,terminal;
  int pos=grammar.find_first_of('-');
  terminal=grammar.substr(pos+2);
  nonTerminal=grammar.substr(0,pos);
  //cout<<nonTerminal<<" "<<terminal<<endl;
  cout<<"The grammar is "<<grammar<<endl;
  cout<<"The Non Terminal is "<<nonTerminal<<endl;
  //cout<<"The Terminal is "<<terminal<<endl;
  int count=0;//counting thenumber of vertical bars
  //checking the number of terminals from right hand side
  for(int i=0;i<terminal.length();i++){
    if(static_cast<int>(terminal[i])==124){
      count++;
      int pos=i;
    }
  }
  //map<int,list<int> > my_map
  map<string,list<string> >language;
  //printingn the terminals
  list<string> terms;

  //terms.push_back(nonTerminal);
  cout<<"The Terminals are: "<<endl;
  string term=terminal;
  while(count!=0){
    int pos=term.find_first_of('|'); //dividing string on the basis of |
    string substring1=term.substr(0,pos);
    terms.push_back(substring1);
    term=term.substr(pos+1);
    cout<<nonTerminal<<": "<<substring1<<endl;
    //cout<<"Remaning terminal is "<<terminal<<endl;
    count--;
  }
  cout<<nonTerminal<<": "<<term<<endl;
  terms.push_back(term);

  language.insert(pair<string,list<string> >(nonTerminal,terms));

  cout<<"List Terms"<<endl;

  list <string> :: iterator it;
    for(it = terms.begin(); it != terms.end(); ++it)
        cout << " " << *it<<"\n";
  map<string,list<string> >::iterator itr;
  for(itr=language.begin();itr!=language.end();++itr){
    cout<<itr->first<<"\n";
    print(itr->second);
  }
  return 0;
}
