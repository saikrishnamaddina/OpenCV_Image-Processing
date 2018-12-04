#include  <opencv2/opencv.hpp>
#include <iostream>

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
	Mat dilate_image;
	dilate(img,dilate_image,structuringElement);
	imshow("dilation",dilate_image);
	waitKey(0);
}
