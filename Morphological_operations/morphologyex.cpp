waitKey#include <iostream>
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

	Mat structuringElement = cv::getStructuringElement(CV_SHAPE_RECT, cv::Size(5,5));
	Mat morph_image;
//	morphologyEx(img,morph_image,CV_MOP_OPEN,structuringElement);
	morphologyEx(img,morph_image,CV_MOP_CLOSE,structuringElement);
	imshow("Closing",morph_image);
	waitKey(0);
}
