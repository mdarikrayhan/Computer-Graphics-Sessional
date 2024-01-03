#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void display()
{
//line
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    {
        glVertex3f(10,10,0);
        glVertex3f(30,10,0);

        glVertex3f(10,10,0);
        glVertex3f(20,20,0);

        glVertex3f(20,20,0);
        glVertex3f(30,10,0);

    }
    glEnd();
    glFlush();

}
void init()
{
    glOrtho(-50.0,50.0,-50.0,50.0,-50.0,50.0);


}
int main(int a,char **b)
{
    glutInit(&a,b);
    glutInitWindowSize(1400,1000);
    glutInitWindowPosition(0,0);

    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutCreateWindow("basic object....");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
