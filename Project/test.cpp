#include<iostream>
#include<string>
#include<queue>
#include<map>
#include<list>
#include<unordered_map>

using namespace std;


//65-90-> upper case letters
//97-122-> lower case letters
//45 -> - (hyphen)
//62 -> > (greater than)
//124 -> | (vertical bar))
/*
1. string input to n-tree S->aa, the S->aX, then X->ca S->Xb
2. root node gets ignored to print

S->aX|bX X->c; bc
Hash map, key is always Non-terminal, list of strings
*/

//character key list of value pairs

//S, list of String( aa,aXa )
//X, list of String(a,b)

int main(){

  string grammar;
  cout<<"Enter the grammar"<<endl;
  cin>>grammar;
  cout<<"The Grammar you entered is "<<grammar<<endl;

  int len=grammar.length(); // finding the length of the grammar

  list<string>production;

  //we need key value pair so we use
  //map creation
  map<char,char> langTree;

  //unordered_map creation
  //unordered_map<char,char> langTree;

  for(int i=0;i<len;i++){
    //if the 1st character is a Non-Terminal and second character is a Terminal
    //insert in map mapName(nonTerminal,terminal)
    if((static_cast<int>(grammar[i])>=65 && static_cast<int>(grammar[i])<=90)&&((static_cast<int>(grammar[i+1])>=97 && static_cast<int>(grammar[i+1])<=122))){
      //cout<<grammar[i]<<" is a Non-Terminal"<<endl;
      //char nonTerminal=grammar[i];
      langTree.insert(pair<char,char>(grammar[i],grammar[i+1]));
      //cout<<"The Non terminal is "<<nonTerminal<<endl;
    }

    if(((static_cast<int>(grammar[i])>=97 && static_cast<int>(grammar[i])<=122))&&((static_cast<int>(grammar[i+1])>=97 && static_cast<int>(grammar[i+1])<=122))){
      langTree.insert(pair<char,char>(grammar[i],grammar[i+1]));
    }

    /*
    if(static_cast<int>(grammar[i])>=97 && static_cast<int>(grammar[i])<=122){
      //cout<<grammar[i]<<" is a Terminal"<<endl;
      char terminal=grammar[i];
      //cout<<"The Non terminal is "<<terminal<<endl;
    }
    //insert items in language tree
    */
  //langTree.insert(pair<char,char>(nonTerminal,terminal));

  }


/*------------------------------------------------------------------------------------------------------------*/
  //printing contents of hash map
  //map
  map<char, char>::iterator itr;
  for(itr=langTree.begin();itr!=langTree.end();++itr){
    cout<<itr->first<<'\t'<<itr->second<<'\n';
  }

  /*
  //unordered_map
  for(auto itr=langTree.begin();itr!=langTree.end();itr++){
    cout<<itr->first<<'\t'<<itr->second<<'\n';
  }
  */
/*------------------------------------------------------------------------------------------------------------*/





  //if(){


  return 0;
  /*End of Program reached*/
}
