///Week13 rect TRT
#include <GL/glut.h>
float angle=0,oldX=0;
void mouse(int button, int state, int x, int y)
{
    oldX = x;
}
void motion(int x, int y)
{
    angle += (x-oldX);
    oldX = x;
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);///白色
    glRectf(0.3, 0.5, -0.3, -0.5);///四邊形座標

    glPushMatrix();///右半邊
        glTranslatef(0.3, 0.4, 0);///3把手臂位置掛回去
        glRotatef( angle, 0, 0, 1);///2旋轉,對z軸
        glTranslatef(-0.3, -0.4, 0);///1旋轉軸中心
        glColor3f(1,0,0);///紅色
        glRectf(0.3, 0.5, 0.7, 0.3);///右上手臂

        glPushMatrix();
            glTranslatef(0.7, 0.4, 0);///3把手臂位置掛回去
            glRotatef( angle, 0, 0, 1);///2旋轉,對z軸
            glTranslatef(-0.7, -0.4, 0);///1手肘旋轉軸中心
            glColor3f(0,1,0);///綠色
            glRectf(0.7, 0.5, 1.0, 0.3);///右下手肘
        glPopMatrix();
    glPopMatrix();


    glPushMatrix();///左半邊
        glTranslatef(-0.3, 0.4, 0);///3把手臂位置掛回去
        glRotatef( angle, 0, 0, 1);///2旋轉,對z軸
        glTranslatef(0.3, -0.4, 0);///1旋轉軸中心
        glColor3f(1,0,0);///紅色
        glRectf(-0.3, 0.5, -0.7, 0.3);///左上手臂

        glPushMatrix();
            glTranslatef(-0.7, 0.4, 0);///3把手臂位置掛回去
            glRotatef( angle, 0, 0, 1);///2旋轉,對z軸
            glTranslatef(0.7, -0.4, 0);///1手肘旋轉軸中心
            glColor3f(0,1,0);///綠色
            glRectf(-0.7, 0.5, -1.0, 0.3);///左下手肘
        glPopMatrix();
    glPopMatrix();
    glutSwapBuffers();
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    ///glutInitWindowSize(600,600);
    glutCreateWindow("Week13 rect TRT");

    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutDisplayFunc(display);

    glutMainLoop();
}
