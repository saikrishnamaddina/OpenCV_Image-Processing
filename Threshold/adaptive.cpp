#include  <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int c,char **argv)
{
	Mat img = imread(argv[1],1);
	
	if(img.empty())
	{
		cout<<"Error,image can't be read"<<endl;
		return 0;
	}
	Mat gray,thresh_mean,thresh_gaussian;
	cvtColor(img,gray,CV_BGR2GRAY);
	adaptiveThreshold(gray,thresh_mean,255,CV_ADAPTIVE_THRESH_MEAN_C,CV_THRESH_BINARY_INV,17,12);
	adaptiveThreshold(gray,thresh_gaussian,255,CV_ADAPTIVE_THRESH_GAUSSIAN_C,CV_THRESH_BINARY_INV,17,12 );
	
	namedWindow("thresh_gaussian",WINDOW_NORMAL);
	imshow("thresh_gaussian",thresh_gaussian);
	namedWindow("thresh_mean",WINDOW_NORMAL);
	imshow("thresh_mean",thresh_mean);
	waitKey(0);
}
