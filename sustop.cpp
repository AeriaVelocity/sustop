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
      cout<<"sustop is a joke command that does absolutely nothing of importance."<<endl<<endl<<"Feel free to check me out at https://github.com/SpeedStriker243."<<endl;
      return 0;
  }

  if (strcmp(argv[1], "-k") == 0)
  {
      cout<<"This program has been terminated successfully."<<endl;
      return 0;
  }
}
