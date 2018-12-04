#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc,char **argv)
{
	//To read the image from the disk................
	Mat img = imread(argv[1],1);  //argv[1]=input image
	if(img.empty())
	{
		cout<<"Error,image can't be read"<<endl;
	}

	//To display the number of channels
	cout<<"Channels="<<img.channels()<<endl;

	//To display the size of the image
	cout<<"Height = "<<img.rows<<endl;
	cout<<"Width = "<<img.cols<<endl;
	cout<<"Size = "<<img.size<<endl;
	
	//To display the image with normal window size
	namedWindow("IMSHOW",WINDOW_NORMAL);
	imshow("IMSHOW",img);
	imwrite("original.jpg",img);
	waitKey(0);
	

}
