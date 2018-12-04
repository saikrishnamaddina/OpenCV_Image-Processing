waitKey#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int c,char **argv)
{
	Mat img = imread(argv[1],0);
	if(img.empty())
	{
		cout<<"Error,image can't be read"<<endl;
		return 0;
	}

	Mat structuringElement = cv::getStructuringElement(CV_SHAPE_RECT, cv::Size(5,5));
	Mat morph_open,morph_close,morph_gradient,morph_blackhat,morph_tophat;
	morphologyEx(img,morph_open,CV_MOP_OPEN,structuringElement);
	morphologyEx(img,morph_close,CV_MOP_CLOSE,structuringElement);
	morphologyEx(img,morph_gradient,CV_MORPH_GRADIENT,structuringElement);
	morphologyEx(img,morph_tophat,CV_MORPH_TOPHAT,structuringElement);
	morphologyEx(img,morph_blackhat,CV_MORPH_BLACKHAT,structuringElement);

	namedWindow("morph_open",WINDOW_NORMAL);
	imshow("morph_open",morph_open);	
	namedWindow("morph_close",WINDOW_NORMAL);
	imshow("morph_close",morph_close);
	namedWindow("morph_gradient",WINDOW_NORMAL);
	imshow("morph_gradient",morph_gradient);
	namedWindow("morph_tophat",WINDOW_NORMAL);
	imshow("morph_tophat",morph_tophat);
	namedWindow("morph_blackhat",WINDOW_NORMAL);
	imshow("morph_blackhat",morph_blackhat);
	waitKey(0);
}
