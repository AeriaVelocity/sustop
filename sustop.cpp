#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#ifdef unix
#include <unistd.h>
#endif

using namespace std;

void achievement(string message)
{
    /* Prints to the console "Achievement Get: <achievement text>"
    with "Achievement Get:" in yellow. */
    #ifdef unix
    cout<<"\033[33mAchievement Get:\033[0m " << message << endl << endl;
    #else
    cout<<"Achievement Get: " << message << endl << endl;
    #endif
}

int main(int argc, char *argv[])
{
  #ifdef unix
  if (geteuid() == 0)
  {
      cout<<"Did you seriously just run this program as root?!"<<endl;
      achievement("Burnt Fire");
  }
  #endif

  if (argc < 2)
  {
    #ifdef unix
    if (geteuid() == 0)
    {
        exit(1);
    }
    #endif
    cout<<"Type something first!"<<endl;
    achievement("Ooh, What Does This Do?");
    exit(1);
  }

  int nothing;
  char c = *argv[1];
  
  if (argc > 2)
  {
      cout<<"sustop cannot handle this amount of words. Please stop."<<endl;
      achievement("Hippopotomonstrosesquipedaliophobia-itis");
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
      cout<<"sustop version 1 episode 1 chapter 1"<<endl;
      return 0;
  }

  if (strcmp(argv[1], "-h") == 0)
  {
      cout<<"sustop is a joke command that does absolutely nothing of importance."<<endl<<endl<<"Feel free to check me out at https://github.com/That1M8Head."<<endl;
      return 0;
  }

  if (strcmp(argv[1], argv[0]) == 0)
  {
      cout<<"Fatal: sustop got stuck in an infinite loop"<<endl;
      achievement("I used the stones to destroy the stones");
      return 0;
  }

  if (strcmp(argv[1], "--help") == 0)
  {
      cout<<"sustop filename - Absolutely nothing"<<endl;
      cout<<"sustop -s - Grants 'root' access"<<endl;
      cout<<"sustop -v - Prints the version number"<<endl;
      cout<<"sustop -h - Prints 'help'"<<endl;
      cout<<"sustop --help - Displays this message"<<endl;
      cout<<"sustop -k - Terminates itself"<<endl;
      cout<<"sustop -b - Attempts to run sustop in the background"<<endl;
      cout<<"sustop --install - Installs the program"<<endl;
      return 0;
  }

  if (strcmp(argv[1], "-k") == 0)
  {
      cout<<"Operation terminated successfully."<<endl;
      return 0;
  }

  if (strcmp(argv[1], "-b") == 0)
  {
      cout<<"Failed to open any background process."<<endl;
      cout<<"Reason: too lazy"<<endl;
      return 0;
  }

  if (strcmp(argv[1], "--install") == 0)
  {
      cout<<"This program lacks the privileges to install itself and is too lazy to request them."<<endl<<endl;
      cout<<"On macOS, Linux or any other Unix-based system, type 'cp ./sustop /usr/bin' as root."<<endl;
      cout<<"You may have to elevate with an actually useful program."<<endl<<endl;
      cout<<"On Windows, just copy 'sustop.exe' to a folder that is in your PATH."<<endl;
      cout<<"This is usually C:\\Windows\\System32, but you can configure this."<<endl;
      return 0;
  }

  if (c == '-')
  {
      cout<<"The argument '"<<argv[1]<<"' was not understood and is probably a figment of your imagination."<<endl;
      if (strcmp(argv[1], "-i") == 0)
      {
          cout<<"You're probably looking for '--install'."<<endl;
      }
      else
      {
          cout<<"If you want it added, open up an issue on the GitHub repo (type 'sustop -h' for a link)"<<endl;
      }
  }

  else
  {
      cout<<"The program '"<<argv[1]<<"' was not found or never existed. So leave me alone."<<endl;
  }
}
