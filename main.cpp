//Authors:Xinrui Li
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string lastname;
  string firstname;
  //get user input
  cout<<"What is your first name?\n";
  cin>>firstname;
  cout<<"what is your last name?\n";
  cin>>lastname;
  cout<<"Your first name is:"<<firstname<<" and your last name is:"<<lastname<<endl;
 
  std::string nickname;
  nickname.push_back(firstname[0]);
  nickname.push_back('.');
  nickname.push_back(lastname[0]);
  nickname.push_back('.');
  cout<<"Welcome,"<<nickname<<", here is your fortune"<<endl;

  //tell fortune

  return 0;
}
