#include <opencv/highgui.h>
int main()
{
    IplImage * img = cvLoadImage("gwawa.jpg");  ///Ū��
    cvShowImage("week09",img);
    cvWaitKey(0);///���ݥ��N�����~��
}
