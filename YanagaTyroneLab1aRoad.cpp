//YanagaTyroneLab1aRoad
//by Tyrone Yanaga
//on 2/3/2016
//Editor: CodeBlocks
//Compiler: GNU GCC
//Road.cpp
#include "YanagaTyroneLab1aRoad.h"
#include <iostream>
using namespace std;

double  Road::getL() const
{
  return length;
}

double  Road::getW() const
{
  return width;
}

double Road::setL(double l) // in miles
{
  length = l;
  return length;
}

double Road::setW(double w) // in feet
{
  width = w;
  return width;
}

double Road::asphalt(double th) const //enter thickness in inches
{
  double volume = 0; //cubic feet
  volume = length * width * th * 5280/12;
  return volume;
}

Road::Road()
{
  length = 0;
  width = 0;
}

Road::Road(const Road &obj)
{
 // cout << "cpy\n";
  length = obj.length;
  width = obj.width;
}

