#include <GL/glut.h>

void initGL(){

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClearDepth(1.0f);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glShadeModel(GL_SMOOTH);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

}

void draw_thing(){


    glBegin(GL_POLYGON);

    glColor3f(0.0508f, 0.310f, 0.0372f);
    for(float i = -0.5f; i < 0.6f; i = 0.1 + i){
        float x = i;
        float y = i * i;
        glVertex3f(x, y, 0.0f);

    }

    for(float i = 0.4f; i > -0.5f; i = i - 0.1f){
        float x = i;
        float y = i * i;
        glVertex3f(x, y + 0.1, 0.0f);

    }
    glEnd();

}


void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    draw_thing();

    glutSwapBuffers();
}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(3027, 4096);
    glutInitWindowPosition(500, 500);
    glutCreateWindow("Green Grin");
    glutDisplayFunc(displayMe);
    initGL();
    glutMainLoop();
    return 0;
}

