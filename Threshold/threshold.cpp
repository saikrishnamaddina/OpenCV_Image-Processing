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
//	threshold(gray,thresh,127,255,CV_THRESH_BINARY);
//	threshold(gray,thresh,127,255,CV_THRESH_BINARY_INV);
//	threshold(gray,thresh,200,255,CV_THRESH_TRUNC);
	 threshold(gray,thresh,200,255,CV_THRESH_TOZERO);

	imshow("threshold_image",thresh);
	waitKey(0);
}
