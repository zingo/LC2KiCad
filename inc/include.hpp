/*
    Copyright (c) 2020 Harrison Wade, aka "RigoLigo RLC"

    This file is part of LC2KiCad.

    LC2KiCad is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as 
    published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    LC2KiCad is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with LC2KiCad. If not, see <https://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdio>

#include <consts.hpp>
#include <elements.hpp>

#ifndef GLOBAL_FUNCS
  #define GLOBAL_FUNCS

  namespace lc2kicad
  {
    class coordinates
    {
      public:
        double X;
        double Y;

        coordinates operator+(coordinates coord)
          { coordinates ret; ret.X = this->X + coord.X; ret.Y = this->Y + coord.Y; return ret; }
        coordinates operator-(coordinates coord)
          { coordinates ret; ret.X = this->X - coord.X; ret.Y = this->Y - coord.Y; return ret; }
        coordinates operator*(coordinates coord)
          { coordinates ret; ret.X = this->X * coord.X; ret.Y = this->Y * coord.Y; return ret; }
        coordinates operator/(coordinates coord)
          { coordinates ret; ret.X = this->X / coord.X; ret.Y = this->Y / coord.Y; return ret; }
        coordinates operator+(double n)
          { coordinates ret; ret.X = this->X + n; ret.Y = this->Y + n; return ret; }
        coordinates operator*(double n)
          { coordinates ret; ret.X = this->X * n; ret.Y = this->Y * n; return ret; }
    };

    typedef coordinates sizeXY;

    typedef std::vector<std::string> stringlist;
    typedef std::vector<coordinates> coordslist;
    extern void errorAndQuit(std::runtime_error *e);
    extern void assertRTE(bool statement, const char* message);  

    extern stringlist splitString(std::string sourceString, char delimeter);
  }

#endif