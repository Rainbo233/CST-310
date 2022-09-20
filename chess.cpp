#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


void drawChecker()
{
    glClear(GL_COLOR_BUFFER_BIT);

    int i = 0;
    int j = 0;
    int size = 10;
    for (i = 0; i < 1000; i += 50) {
	  for( j = 0; j < 1000; j+= 50)
	  {
        if((i + j) % 2 == 0){ // if i + j is even
            glColor3f( 1.0, 1.0, 1.0);
            glRecti(i, j, i + 50, j + 50);
        }
        else {
            glColor3f( 0.0, 0.0, 0.0);
            glRecti(i, j, i + 50, j + 50);
        }
        
      }; // end for(j)
    }; // end for(i)

    glEnd();
    glFlush();

}

void displayMe(void)
{
    glRecti(0, 0, 500, 500);

    glFlush();
}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Chess Board");
    glutDisplayFunc(drawChecker);
    glutMainLoop();
    return 0;
}