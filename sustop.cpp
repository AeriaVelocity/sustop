#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
  string nothing;
  if (argc < 1)
  {
      //nothing
  }
  if (argc > 2)
  {
      cout<<"Too many arguments."<<endl;
  }
  if (argv[1] == "-s")
  {
      cout<<"#~ ";
      getline(cin, nothing);
      cout<<"Just kidding. No root for you."<<endl;
  }
  if (argv[1] == "-v")
  {
      cout<<"sustop version 1"<<endl;
  }
  if (argv[1] == "-h")
  {
      cout<<"sustop is a joke command that does absolutely nothing of importance."<<endl<<endl<<"Feel free to check me out at https://github.com/SpeedStriker243."<<endl;
  }
  if (argv[1] == "--help")
  {
      cout<<"sustop is a joke command that does absolutely nothing of importance."<<endl<<endl<<"Feel free to check me out at https://github.com/SpeedStriker243."<<endl;
  }
  if (argv[1] == "-k")
  {
      system("exit");
  }
  return 0;
}
