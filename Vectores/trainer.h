#pragma once
#pragma once
#ifndef TRAINER_H
#define TRAINER_H

#include <opencv2/core/core.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>

#include <sstream>
#include <Windows.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <string>
#include <fstream>
#include <ios>
#include "sqlite3.h"

#include "captureFrame.h"


using namespace std;

class Train
{
public:
	//-- Constructor
	Train() {
	}
	int openClose();
	void process();

private:
	//static int callback(void *data, int argc, char **argv, char **azColName);
};
#endif // !TRAINER_H