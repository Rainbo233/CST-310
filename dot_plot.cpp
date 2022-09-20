#include <GL/glut.h>
 
void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POINTS);
        glVertex2f(-0.8, -0.7);
        glVertex2f(-0.8, -0.9);
        glVertex2f(-0.7, -0.7);
    glEnd();
    glFlush();
}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Dots!");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}