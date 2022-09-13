#include <GL/glut.h>
 
void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex2f(0.4, 0.4);
        glVertex2f(-0.2, 0.4);
        glVertex2f(-0.2, -0.2);
        glVertex2f(0.4, -0.2);
    glEnd();
    glFlush();
}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Square!");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}