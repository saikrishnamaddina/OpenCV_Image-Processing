#include  <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int c,char **argv)
{
	Mat img = imread(argv[1],1);
	if(img.empty())
	{cout<<"Error,image can't be read"<<endl;
		return 0;

	}
	Mat gray,thresh;
	cvtColor(img,gray,CV_BGR2GRAY);
//adaptiveThreshold(gray,thresh,255,CV_ADAPTIVE_THRESH_MEAN_C,CV_THRESH_BINARY,13,12 );
	adaptiveThreshold(gray,thresh,255,CV_ADAPTIVE_THRESH_MEAN_C,CV_THRESH_BINARY_INV,17,12 );
///	 adaptiveThreshold(gray,thresh,255,CV_ADAPTIVE_THRESH_GAUSSIAN_C,CV_THRESH_BINARY,15,12 );
// 	 adaptiveThreshold(gray,thresh,255,CV_ADAPTIVE_THRESH_GAUSSIAN_C,CV_THRESH_BINARY_INV,19,12 );
	imshow("threshold_image",thresh);
	waitKey(0);
}
