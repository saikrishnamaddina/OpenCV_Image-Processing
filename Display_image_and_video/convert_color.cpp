#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc,char **argv)
{
	Mat img=imread(argv[1],1);
	Mat img1;
//	cvtColor(img,img1,CV_BGR2GRAY);
//	cvtColor(img,img1,CV_BGR2RGB);
//	cvtColor(img,img1,CV_BGR2HSV);
//	cvtColor(img,img1,CV_BGR2YUV);
	cvtColor(img,img1,CV_BGR2RGBA);
	
	imshow("gray_image",img1);
	waitKey(0);

}
