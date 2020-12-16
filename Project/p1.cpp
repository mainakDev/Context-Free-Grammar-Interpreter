#include<iostream>
#include<string>
#include<map>
#include<queue>
#include<vector>
using namespace std;

//65-90-> upper case letters
//97-122-> lower case letters
//45 -> - (hyphen)
//62 -> > (greater than)
//124 -> | (vertical bar))

int main(){
  string s="S->aa|aXa";
  int len=s.length();

  map<char,char>str;

  vector<char> ch;


  for(int i=0;i<len;i++){
    if((static_cast<int>(s[i])!=45)&&(static_cast<int>(s[i])!=62)&&(static_cast<int>(s[i])!=124)){
      //str.insert(pair<char,char>(s[i],s[i+1]));
      //arr[i]=s[i]; //storing terminals and non terminals in an array
      ch.push_back(s[i]);

    }
    //cout<<arr[i];

    //cout<<"Size of Array is"<<sizeof(arr)/sizeof(arr[0]);

    //cout<<arr[i];

    //copy(ch.begin(),ch.end(),arr[]);

    //cout<<arr[i];

    //str.insert(pair<char,char>(arr[i],arr[i+1]));
  }

  //cout<<"Size of Vector is "<<ch.size()<<endl;

  //char arr[ch.size()];

  //printing the vector
  for(auto i=ch.begin();i!=ch.end();++i){
    cout<<*i<<" ";
  }
  /*
  map<char,char>::iterator itr;
  for(itr=str.begin();itr!=str.end();itr++){
    cout<<itr->first<<"\t"<<itr->second<<"\n";
  }
  */
  return 0;
}
