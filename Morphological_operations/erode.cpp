#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int c,char **argv)
{
	Mat img = imread(argv[1],0);
	if(img.empty())
	{cout<<"Error,image can't be read"<<endl;
		return 0;
	}
//	Mat img1;
	//cvtColor(img,img1,CV_BGR2GRAY);
	Mat structuringElement = cv::getStructuringElement(CV_SHAPE_RECT, cv::Size(3,3));
	Mat erode_image;
	erode(img,erode_image,structuringElement);
	imshow("erosion",erode_image);
	waitKey(0);
}