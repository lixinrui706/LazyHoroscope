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
  cout<<"What is your last name?\n";
  cin>>lastname;
 
  std::string nickname;
  nickname.push_back(' ');
  nickname.push_back(firstname[0]);
  nickname.push_back('.');
  nickname.push_back(lastname[0]);
  nickname.push_back('.');
  cout<<"Welcome,"<<nickname<<", here is your fortune..."<<endl;
  
  //tell fortune
  
  cout<<"your lucky number is "<<firstname.length()<<endl;
  //voewl
  if(firstname[0] == 'a'||firstname[0] == 'e'||firstname[0] == 'i'||firstname[0] == 'o'||firstname[0] == 'u'||firstname[0] == 'A'||firstname[0] == 'E'||
  firstname[0] == 'I'||firstname[0] == 'O'||firstname[0] == 'U')
  {
  cout<<"you are destined to be famous!\n";
  }
  else
  {
  cout<<"you should keep a low profile.\n";
  }
  int len= lastname.length();  
  if(lastname[len - 1] == 'a'||lastname[len - 1] == 'e'||lastname[len - 1] == 'i'||lastname[len - 1] == 'o'||lastname[len - 1] == 'u')
  {
  cout<<"you have already met your true love."<<endl;
  }
  // have a good day!
  cout<<"have a good day!\n";
 
  return 0;
}
