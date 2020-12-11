#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
  int nothing;
  if (argc < 1)
  {
      return 0;
  }
  
  if (argc > 2)
  {
      cout<<"Too many arguments."<<endl;
      return 0;
  }

  if (strcmp(argv[1], "-s") == 0)
  {
      cout<<"#~ ";
      try
      {
        cin>>nothing;
      }
      catch (...) {}
      cout<<endl<<"Just kidding. No root for you."<<endl;
      return 0;
  }

  if (strcmp(argv[1], "-v") == 0)
  {
      cout<<"sustop version 1"<<endl;
      return 0;
  }

  if (strcmp(argv[1], "-h") == 0)
  {
      cout<<"sustop is a joke command that does absolutely nothing of importance."<<endl<<endl<<"Feel free to check me out at https://github.com/SpeedStriker243."<<endl;
      return 0;
  }

  if (strcmp(argv[1], "--help") == 0)
  {
      cout<<"sustop filename - Absolutely nothing"<<endl<<"sustop -s - Grants 'root' access"<<endl<<"sustop -v - Prints the version number"<<endl<<"sustop -h - Prints 'help'"<<endl<<"sustop --help- Displays this message"<<endl<<"sustop -k - Terminates itself"<<endl<<"sustop -b - Attempts to run sustop in the background, but it doesn't work."<<endl;
      return 0;
  }

  if (strcmp(argv[1], "-k") == 0)
  {
      cout<<"This program has been terminated successfully."<<endl;
      return 0;
  }

  if (strcmp(argv[1], "-b") == 0)
  {
      cout<<"Failed to open any background process."<<endl<<"Reason: feature not implemented"<<endl;
      return 0;
  }
}
