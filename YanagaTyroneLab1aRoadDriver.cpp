//YanagaTyroneLab1aRoad
//by Tyrone Yanaga
//on 1/27/2016
//Editor: CodeBlocks
//Compiler: GNU GCC
//RoadDriver.cpp

#include <iostream>
using namespace std;

#include <cassert>
#include "YanagaTyroneLab1aRoad.h"
#include "YanagaTyroneLab1aRoad.h" // testing ifndef

int main()
{
  cout << "YanagaTyroneLab1aRoadDriver.cpp\n"    ;
  cout << "Programmer: Tyrone Yanaga\n";
  cout << "Editor used: CodeBlocks\n";
  cout << "Compiler used: GNU GCC\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at "<< __TIME__;
  cout << "\nThe \"Road\" program" << endl << endl;

  Road pch;
  pch.setL(9.23);
  pch.setW(374.5);
  cout << pch.getL() << endl << pch.getW() << endl << endl;
  cout << "thickness is " << pch.asphalt(4) << endl;

  Road good = pch;
  cout << good.getL() << endl << good.getW() << endl << endl;
  Road head(good);
  const Road copy1 = pch;
  cout << copy1.getL() << endl << copy1.getW() << endl << endl;

  Road copy2;
  copy2 = copy1;
}
