#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
        glVertex3f();
    glEnd();
    glFlush();
}
void init()
{
    glClearColor(0.0,0.0,0.0,0.5);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);

}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1280,720);
    glutInitWindowPosition(100,100);
    glutCreateWindow("LALALALLA");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
