#include <opencv/highgui.h>
int main()
{
    IplImage * img = cvLoadImage("gwawa.jpg");  ///讀圖
    cvShowImage("week09",img);
    cvWaitKey(0);///等待任意按鍵繼續
}
