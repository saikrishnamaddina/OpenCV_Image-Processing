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
	Mat gray,thresh_binary,thresh_inv,thresh_trunc,thresh_tozero;
	cvtColor(img,gray,CV_BGR2GRAY);
	threshold(gray,thresh_binary,127,255,CV_THRESH_BINARY);
	threshold(gray,thresh_inv,127,255,CV_THRESH_BINARY_INV);
	threshold(gray,thresh_trunc,200,255,CV_THRESH_TRUNC);
	threshold(gray,thresh_tozero,200,255,CV_THRESH_TOZERO);

	namedWindow("thresh_binary",WINDOW_NORMAL);
	imshow("thresh_binary",thresh_binary);
	namedWindow("thresh_inv",WINDOW_NORMAL);
	imshow("thresh_inv",thresh_inv);
	namedWindow("thresh_trunc",WINDOW_NORMAL);
	imshow("thresh_trunc",thresh_trunc);
	namedWindow("thresh_tozero",WINDOW_NORMAL);
	imshow("thresh_tozero",thresh_tozero);
	waitKey(0);
}
