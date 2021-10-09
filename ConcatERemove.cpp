#include <iostream>
using namespace std;

string ConcatERemove(int k, string s, string t){
  int concat = 0;
  int remove = 0;
  int result = 0;
  int strCompare = (s.length() - t.length());

  if(strCompare > 0){
    remove += strCompare ;
    for(int i = 0; (t.length() - strCompare)>=i; i++){
      if (s[i] != t[i]){
        remove += 1;
        concat += 1;
        cout<<s[i]<<"\n";
      }
    }
    cout<<strCompare<<"\n";
  }

  else{
    concat += strCompare * (-1);//Inverte o valor da Compare do C++
    for(int i = (s.length() - (strCompare * (-1))); i>=0; i++){
      if (s[i] != t[i]){
        remove += 1;
        concat += 1;
        cout<<s[i]<<"\n";
        cout<<i<<"\n";
      }
    }
  }

  result += (concat + remove);
  if(result <= k){
    return "Sim";
  }
  else{
    return "Nao";
  }
  
}


bool FilterString(string st){
  string List = ("abcdefghijklmnopqrstuvxwyz");
  int findInList = 0;

  for (int i = 0; i <= st.length(); i++ ){
    for(int j = 0; j <= List.length(); j++ ){
      if(st[i] == List[j]){
        findInList+=1;
      }
    }
  }
  if((findInList-1) == st.length()){
    return false;
  }
  else{
    return true;
  }
}

int main(){
  string s, t;
  int k = 0;

  do{
    cout << "Digite s: ";
    cin >> s;

  }while(s.length() < 1 || s.length() > 100 || FilterString(s));
  
  do{
    cout <<"Digite t: ";
    cin >> t;

  }while(t.length() < 1 || t.length() > 100 || FilterString(t));

  do{
    cout << "Digite k: ";
    cin >> k;
  }while(k < 1 || k > 100);
  
  cout<<ConcatERemove(k, s, t);
}




