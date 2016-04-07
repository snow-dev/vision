#pragma once
#pragma once
#ifndef MUESTRAS_H
#define MUESTRAS_H

#include <opencv2/core/core.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs/imgcodecs.hpp>



#include <iostream>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <string>

#include "captureFrame.h"


using namespace std;

class Muestras
{
public:
	//-- Constructor
	Muestras(){
	}
	void guardar(cv::Mat frame, cv::Mat X, cv::Mat lEye, cv::Mat rEye, int& intent);

private:
	//-- capturar algunos frames de los ojos y guardar tanto las coordenadas como las imagenes
	

};

#endif // !MUESTRAS_H