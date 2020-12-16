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

int main(){

  cout<<"Enter your choice"<<endl;
  cout<<"1. Press 1 to enter a new grammar"<<endl;
  cout<<"2. Press 2 to print the grammar"<<endl;
  cout<<"3. Press 3 to enter a string to check if it s part of the language"<<endl;
  cout<<"4. Press 3 to exit"<<endl;
  int choice;

  map<string,list<string> >language;
  cin>>choice;


    switch(choice){
      case 1:{
        string input;
        cout<<"Enter the grammar"<<endl;
        cin>>input;
        //mappping non-terminal to terminals using hashing of key value pairs
        map<string,list<string> >language;
        strMan(input, language);
          int ch;

        //switch(ch)


        break;
      }
      case 2:{
        printMap(language);

        break;
      }
      case 3:{
        cout<<"Test"<<endl;

        break;
      }
      case 4:{
        cout<<"This is case 2"<<endl;

        break;
      }
      default:{
        //exit(EXIT_SUCCESS);
        break;
      }
    }



  return 0;
}
