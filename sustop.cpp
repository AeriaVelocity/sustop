#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char *argv[])
{
  string nothing;
  if (argc > 2)
  {
    cout<<"Too many arguments."<<endl;
    return 0;
  }
  switch (argv[1])
  {
    case "-s":
      cout<<"#~ ";
      getline();
      cout<<"Just kidding. No root for you."<<endl;
      break;
    case "-v":
      cout<<"sustop version 1"<<endl;
      break;
    case "-h":
      cout<<"sustop is a joke command that does absolutely nothing of importance."<<endl<<endl<<"Feel free to check me out at https://github.com/SpeedStriker243."<<endl;
      break;
    case "--help":
      cout<<"sustop is a joke command that does absolutely nothing of importance."<<endl<<endl<<"Feel free to check me out at https://github.com/SpeedStriker243."<<endl;
      break;
    case "-k":
      system("exit");
      break;
  }
  return 0;
}
