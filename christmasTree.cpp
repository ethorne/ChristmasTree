#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
  const char left = '/';
  const char right = '\\';
  const char dot = '.';
  const char star = '*';
  int lineNum = 0;
  string line = "";
  int argc = 0;
  int width;
  cout << "Merry Christmas!" << endl;
  cout << "How tall do you want your tree to be? (input a positive number)\t";
  cin >> argc;
  width = argc * 2 + 1;

  if (argc <= 0)
  {
    cout << "Thats a lame ass christmas tree your asking for dude..." << endl;
    return 0;
  }

  while (argc >= 0)
  {
    for (int i = 0; i < argc; i++)
    {
      if (lineNum == 0 && i == 0)
      {
	i++;
      }

      line += " ";
    }

    if (lineNum == 0)
    {
      line += "<^>";
    }
    else
    {
      line += left;
      int j = 0;
      while(j < lineNum)
      {
	if (j != 0)
        {
          line += star;
	}
	line += dot;
	j++;
      }
      line += right;
    }
    line += "\r\n";
    lineNum++;
    argc--;
  }

  string bottomLine = "";
  string trunk = "";

  int trunkWidth = (int) width * 0.1;

  for (int i = 0; i < width; i++)
  {
    bottomLine += "^";
    if (i == ((int)(width / 2) - trunkWidth))
    {
      trunk += "[";
    }
    else if (i == ((int)(width / 2) + trunkWidth))
    {
      trunk += "]";
    }
    else
    {
      trunk += "_";
    }
  }
  bottomLine += "\r\n";
  trunk += "\r\n";

  cout << line  << bottomLine << trunk << endl;
  return 0;
}
