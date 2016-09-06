/**
 * MouseHandTracking is an application to control mouse pointer of the computer with hand gesture via camera
 * Copyright (C) 2011  Hendri Karisma
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * contact author at situkangsayur[at]gmail[dot]com
 */
#ifndef ICOLORSKINDETECTOR_H
#define ICOLORSKINDETECTOR_H

#include <iostream>
#include <ctype.h>
#include <cv.h>
#include <highgui.h>
#include "Image.h"

using namespace std;
using namespace cv;

class  IColorSkinDetector{

public:
	virtual IplImage *detectSkin(IplImage *img, CvScalar min, CvScalar max)=0;
};

#endif
