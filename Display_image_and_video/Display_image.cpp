#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc,char **argv)
{
//	Mat img = imread(argv[1],1);

	Mat img = imread(argv[1],1);  //argv[1]=input image
	if(img.empty())
	cout<<"Error,image can't be read"<<endl;
	
	cout<<"Channels="<<img.channels()<<endl;
	cout<<"Width="<<img.rows<<endl;
	cout<<"Height="<<img.cols<<endl;
	cout<<"size="<<img.size<<endl;
	
	imshow("IMSHOW",img);
	imwrite("original.jpg",img);
	waitKey(0);
	

}
