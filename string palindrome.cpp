//String palindrome
#include<iostream>
using namespace std;
bool palindrome(string s ,int l ,int r)
{
   if(l>=r)
     return true;
   if(s[l]!=s[r])
     return false;
   palindrome(s,l+1,r-1);
}
int main()
{
   string s;
   cout<<"\nEnter the word";
   cin>>s;
   int l=0;
   int r=s.size()-1;
  if(palindrome(s,l,r))
  {
    cout<<"palindrome";
  }
  else
  {
    cout<<"not palindrome";
  }
return 0;
}