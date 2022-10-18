#include <GL/glut.h>

GLfloat rotateAll = 0.1f;
int refreshMills = 15;
float x;
float y;
float z;
float rx = 0.0f;
float ry = 0.0f;

void initGL(){

    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClearDepth(1.0f);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);
    glShadeModel(GL_SMOOTH);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

}

void draw_background(){

    glBegin(GL_POLYGON);
    glColor3f(0.990f, 0.972f, 0.921f);
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, -1.0f, 0.0f);
    glVertex3f(1.0f, 1.0f, 0.0f);
    glVertex3f(-1.0f, 1.0f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, -0.3f, 0.0f);
    glVertex3f(0.9f, -0.3f, 0.0f);
    glVertex3f(1.0f, -0.45f, 0.0f);
    glVertex3f(1.0f, -1.00f, 0.0f);
    glEnd();
    
}

void draw_floor(){

    glBegin(GL_POLYGON);
    glColor3f(0.870f, 0.655f, 0.478f);
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f(-1.0f, -0.4f, 0.0f);
    glVertex3f(0.9f, -0.50f, 0.0f);
    glVertex3f(1.0f, -0.65f, 0.0f);
    glVertex3f(1.0f, -1.0f, 0.0f);
    glEnd();
    
}

void draw_curtain(){

    glBegin(GL_POLYGON);
    glColor3f(0.650f, 0.639f, 0.631f);
    glVertex3f(-0.45f, 1.0f, 0.0f);
    glVertex3f(1.0f, 1.0f, 0.0f);
    glVertex3f(0.96f, 0.6f, 0.0f);
    glVertex3f(0.97f, 0.15f, 0.0f);
    glVertex3f(-0.5f, 0.15f, 0.0f);
    glEnd();

}

void draw_table(){

    glBegin(GL_POLYGON);
    glColor3f(0.118f, 0.0912f, 0.190f);
    glVertex3f(-1.0f, -1.0f, 0.0f);
    glVertex3f(-1.0f, -0.65f, 0.0f);
    glVertex3f(0.6f, -0.55f, 0.0f);
    glVertex3f(1.0f, -1.0f, 0.0f);
    glEnd();

}

void draw_shelves(){

    glBegin(GL_POLYGON);
    glColor3f(0.350f, 0.350f, 0.354f);
    glVertex3f(-1.0f, 0.97f, 0.0f);
    glVertex3f(-0.7f, 0.97f, 0.0f);
    glVertex3f(-0.69f, 0.4f, 0.0f);
    glVertex3f(-1.0f, 0.4f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-1.0f, 0.38f, 0.0f);
    glVertex3f(-0.69f, 0.38f, 0.0f);
    glVertex3f(-0.68f, -0.1f, 0.0f);
    glVertex3f(-1.0f, -0.1f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-1.0f, -0.12f, 0.0f);
    glVertex3f(-0.68f, -0.12f, 0.0f);
    glVertex3f(-0.67f, -0.7f, 0.0f);
    glVertex3f(-1.0f, -0.4f, 0.0f);
    glEnd();

}

void draw_pot(){

    glBegin(GL_POLYGON);
    glColor3f(0.700f, 0.698f, 0.686f);
    glVertex3f(-0.3f, -0.15f, 0.0f);
    glVertex3f(0.5f, -0.15f, 0.0f);
    glVertex3f(0.49f, -0.65f, 0.0f);
    glVertex3f(0.47f, -0.9, 0.0f);
    glVertex3f(-0.27f, -0.9, 0.0f);
    glVertex3f(-0.29f, -0.65f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.410f, 0.408f, 0.406f);
    glVertex3f(-0.3f, -0.155f, 0.0f);
    glVertex3f(0.5f, -0.155f, 0.0f);
    glVertex3f(0.49f, -0.275f, 0.0f);
    glVertex3f(0.45f, -0.275f, 0.0f);
    glVertex3f(0.1f, -0.3, 0.0f);
    glVertex3f(-0.25f, -0.275f, 0.0f);
    glVertex3f(-0.29f, -0.275f, 0.0f);
    glEnd();

}

void draw_plant(){

    glLineWidth(10.0f);

    glBegin(GL_LINES);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(-0.2f, -0.275f, 0.0f);
    glVertex3f(-0.75f, 0.3f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.75f, 0.29f, 0.0f);
    glVertex3f(-0.72f, 0.35f, 0.0f);
    glVertex3f(-0.78f, 0.4f, 0.0f);
    glVertex3f(-0.8f, 0.35f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.0f, 0.05f, 0.0f);
    glVertex3f(-0.05f, 0.04f, 0.0f);
    glVertex3f(-0.07f, -0.03f, 0.0f);
    glVertex3f(-0.09f, 0.05f, 0.0f);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(0.02f, -0.02f, 0.0f);
    glVertex3f(0.05f, 0.04f, 0.0f);
    glVertex3f(0.07f, 0.06f, 0.0f);
    glVertex3f(0.09f, -0.05f, 0.0f);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.045f, 0.14f, 0.0f);
    glVertex3f(-0.04f, 0.18f, 0.0f);
    glVertex3f(0.08f, 0.2f, 0.0f);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.07f,0.22f, 0.0f);
    glVertex3f(-0.06f,0.30f, 0.0f);
    glVertex3f(-0.08f,0.34f, 0.0f);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex3f(-0.18f,0.03f, 0.0f);
    glVertex3f(-0.25f,0.03f, 0.0f);
    glVertex3f(-0.27f,0.12f, 0.0f);
    glVertex3f(-0.19f, 0.13f, 0.0f);
    glEnd();
    

    glBegin(GL_POLYGON);
    glVertex3f(-0.13f,-0.11f, 0.0f);
    glVertex3f(-0.09f,-0.03f, 0.0f);
    glVertex3f(-0.19f,-0.02f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.18f,-0.13f, 0.0f);
    glVertex3f(-0.25f,-0.18f, 0.0f);
    glVertex3f(-0.27f,-0.12f, 0.0f);
    glVertex3f(-0.19f,-0.09f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.75f, 0.29f, 0.0f);
    glVertex3f(-0.815f, 0.25f, 0.0f);
    glVertex3f(-0.9f, 0.15f, 0.0f);
    glVertex3f(-0.875f, 0.25f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.65f, 0.19f, 0.0f);
    glVertex3f(-0.62f, 0.25f, 0.0f);
    glVertex3f(-0.665f, 0.375f, 0.0f);
    glVertex3f(-0.7f, 0.25f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.65f, 0.19f, 0.0f);
    glVertex3f(-0.715f, 0.15f, 0.0f);
    glVertex3f(-0.8f, 0.05f, 0.0f);
    glVertex3f(-0.775f, 0.15f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.45f, -0.01f, 0.0f);
    glVertex3f(-0.42f, 0.05f, 0.0f);
    glVertex3f(-0.465f, 0.175f, 0.0f);
    glVertex3f(-0.5f, 0.05f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.45f, 0.09f, 0.0f);
    glVertex3f(-0.515f, -0.15f, 0.0f);
    glVertex3f(-0.6f, -0.25f, 0.0f);
    glVertex3f(-0.575f, -0.15f, 0.0f);
    glEnd();


    glBegin(GL_LINES);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(-0.18f, -0.275f, 0.0f);
    glVertex3f(-0.185f, 0.0f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(-0.16f, -0.275f, 0.0f);
    glVertex3f(-0.19f, 0.05f, 0.0f);
    glEnd();

    glLineWidth(20.0f);

    glBegin(GL_LINES);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.119f, -0.3, 0.0f);
    glVertex3f(0.125f, 0.1f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.125f, 0.09f, 0.0f);
    glVertex3f(0.25f, 0.3f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.25f, 0.3f, 0.0f);
    glVertex3f(0.20f, 0.4f, 0.0f);
    glVertex3f(0.25f, 0.5f, 0.0f);
    glVertex3f(0.3f, 0.4f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.4f, 0.3f, 0.0f);
    glVertex3f(0.35f, 0.4f, 0.0f);
    glVertex3f(0.4f, 0.5f, 0.0f);
    glVertex3f(0.45f, 0.4f, 0.0f);
    glEnd();

    glRotatef(15.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.25f, 0.15f, 0.0f);
    glVertex3f(0.2f, 0.25f, 0.0f);
    glVertex3f(0.25f, 0.35f, 0.0f);
    glVertex3f(0.3f, 0.25f, 0.0f);
    glEnd();

    glRotatef(-15.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(-3.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.25f, 0.15f, 0.0f);
    glVertex3f(0.2f, 0.25f, 0.0f);
    glVertex3f(0.25f, 0.35f, 0.0f);
    glVertex3f(0.3f, 0.25f, 0.0f);
    glEnd();

    glRotatef(3.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(15.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.15f, 0.05f, 0.0f);
    glVertex3f(0.1f, 0.15f, 0.0f);
    glVertex3f(0.15f, 0.25f, 0.0f);
    glVertex3f(0.2f, 0.15f, 0.0f);
    glEnd();

    glRotatef(-15.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(-3.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.15f, 0.05f, 0.0f);
    glVertex3f(0.1f, 0.15f, 0.0f);
    glVertex3f(0.15f, 0.25f, 0.0f);
    glVertex3f(0.2f, 0.15f, 0.0f);
    glEnd();

    glRotatef(3.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(15.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.35f, 0.1f, 0.0f);
    glVertex3f(0.3f, 0.2f, 0.0f);
    glVertex3f(0.35f, 0.3f, 0.0f);
    glVertex3f(0.4f, 0.2f, 0.0f);
    glEnd();

    glRotatef(-15.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(-3.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.35f, 0.1f, 0.0f);
    glVertex3f(0.3f, 0.2f, 0.0f);
    glVertex3f(0.35f, 0.3f, 0.0f);
    glVertex3f(0.4f, 0.2f, 0.0f);
    glEnd();

    glRotatef(3.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(15.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.4f, 0.1f, 0.0f);
    glVertex3f(0.35f, 0.2f, 0.0f);
    glVertex3f(0.4f, 0.3f, 0.0f);
    glVertex3f(0.45f, 0.2f, 0.0f);
    glEnd();

    glRotatef(-15.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(-4.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.4f, 0.1f, 0.0f);
    glVertex3f(0.35f, 0.2f, 0.0f);
    glVertex3f(0.4f, 0.3f, 0.0f);
    glVertex3f(0.45f, 0.2f, 0.0f);
    glEnd();

    glRotatef(4.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(15.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.25f, 0.0f, 0.0f);
    glVertex3f(0.2f, 0.1f, 0.0f);
    glVertex3f(0.25f, 0.2f, 0.0f);
    glVertex3f(0.3f, 0.1f, 0.0f);
    glEnd();

    glRotatef(-15.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(-3.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.25f, 0.0f, 0.0f);
    glVertex3f(0.2f, 0.1f, 0.0f);
    glVertex3f(0.25f, 0.2f, 0.0f);
    glVertex3f(0.3f, 0.1f, 0.0f);
    glEnd();

    glRotatef(3.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(25.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.25f, 0.0f, 0.0f);
    glVertex3f(0.2f, 0.1f, 0.0f);
    glVertex3f(0.25f, 0.2f, 0.0f);
    glVertex3f(0.3f, 0.1f, 0.0f);
    glEnd();

    glRotatef(-25.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(-13.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.25f, 0.0f, 0.0f);
    glVertex3f(0.2f, 0.1f, 0.0f);
    glVertex3f(0.25f, 0.2f, 0.0f);
    glVertex3f(0.3f, 0.1f, 0.0f);
    glEnd();

    glRotatef(13.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(15.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.25f, -0.1f, 0.0f);
    glVertex3f(0.2f, 0.0f, 0.0f);
    glVertex3f(0.25f, 0.1f, 0.0f);
    glVertex3f(0.3f, 0.0f, 0.0f);
    glEnd();

    glRotatef(-15.0f, 0.0f, 0.0f, 1.0f);

    glRotatef(-3.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_POLYGON);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.25f, -0.1f, 0.0f);
    glVertex3f(0.2f, 0.0f, 0.0f);
    glVertex3f(0.25f, 0.1f, 0.0f);
    glVertex3f(0.3f, 0.0f, 0.0f);
    glEnd();

    glRotatef(3.0f, 0.0f, 0.0f, 1.0f);

    glBegin(GL_LINES);
    glColor3f(0.0400f, 0.580f, 0.0116f);
    glVertex3f(0.1, -0.3f, 0.0f);
    glVertex3f(0.105f, 0.4f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0400f, 0.580f, 0.0116f);
    glVertex3f(0.105, 0.39f, 0.0f);
    glVertex3f(0.175f, 0.6f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0467f, 0.560f, 0.00f);
    glVertex3f(0.175f, 0.580f, 0.0f);
    glVertex3f(0.125f, 0.7f, 0.0f);
    glVertex3f(0.175f, 0.8f, 0.0f);
    glVertex3f(0.225f, 0.7f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0467f, 0.560f, 0.00f);
    glVertex3f(0.13f, 0.45f, 0.0f);
    glVertex3f(0.1f, 0.6f, 0.0f);
    glVertex3f(0.09f, 0.7f, 0.0f);
    glVertex3f(0.14f, 0.6f, 0.0f);
    glEnd();

    glLineWidth(8.0f);

    glBegin(GL_LINES);
    glColor3f(0.0467f, 0.560f, 0.00f);
    glVertex3f(0.13f, 0.45f, 0.0f);
    glVertex3f(0.21f, 0.65f, 0.0f);
    glEnd();

    glLineWidth(9.0f);

    glBegin(GL_LINES);
    glColor3f(0.0467f, 0.560f, 0.00f);
    glVertex3f(0.11f, 0.35f, 0.0f);
    glVertex3f(0.2f, 0.55f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0467f, 0.560f, 0.00f);
    glVertex3f(0.1f, 0.25f, 0.0f);
    glVertex3f(0.04f, 0.325f, 0.0f);
    glVertex3f(0.05f, 0.4f, 0.0f);
    glVertex3f(0.065f, 0.325f, 0.0f);
    glEnd();

    glLineWidth(20.0f);

    glBegin(GL_LINES);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.15f, -0.3f, 0.0f);
    glVertex3f(0.3f, 0.2f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.125f, -0.3f, 0.0f);
    glVertex3f(-0.1f, 0.3f, 0.0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0508f, 0.310f, 0.0372f);
    glVertex3f(0.125f, -0.3f, 0.0f);
    glVertex3f(0.4f, 0.35f, 0.0f);
    glEnd();



}

void draw_lamp(){

    glBegin(GL_POLYGON);
    glColor3f(0.667f, 1.00f, 0.0500f);
    glVertex3f(-1.0f, -0.125, 0.0f);
    glVertex3f(-0.95f, -0.125f, 0.0f);
    glVertex3f(-0.90f, -0.875f, 0.0f);
    glVertex3f(-0.90f, -0.9f, 0.0f);
    glVertex3f(-0.95f, -0.925f, 0.0f);
    glVertex3f(-0.975f, -0.815f, 0.0f);
    glVertex3f(-1.0f, -0.82f, 0.0f);
    glEnd();

}

 
void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(x, y, z);
    glScalef(1.0f,1.0f,1.0f);
    glRotatef(rx, 0.5f, 0.0f, 0.0f);
    glRotatef(ry, 0.0f, 0.5f, 0.0f);
        
        draw_background();
        draw_shelves();
        draw_floor();
        draw_curtain();
        draw_table();
        draw_pot();
        draw_plant();
        draw_lamp();
        

    glutSwapBuffers();
}

void timer(int value) {
   glutPostRedisplay();      // Post re-paint request to activate display()
   glutTimerFunc(refreshMills, timer, 0); // next timer call milliseconds later
}

void reshape(GLsizei width, GLsizei height) {  // GLsizei for non-negative integer
   // Compute aspect ratio of the new window
   if (height == 0) height = 1;                // To prevent divide by 0
   GLfloat aspect = (GLfloat)width / (GLfloat)height;
 
   // Set the viewport to cover the new window
   glViewport(0, 0, width, height);
 
   // Set the aspect ratio of the clipping volume to match the viewport
   glMatrixMode(GL_PROJECTION);  // To operate on the Projection matrix
   glLoadIdentity();             // Reset
   // Enable perspective projection with fovy, aspect, zNear and zFar
   gluPerspective(0, aspect, 0, 0);
}
 
void processSpecialKeys(int key, int xx, int yy) {

    float fraction = 0.7f;

    switch (key) {
        case GLUT_KEY_LEFT :
            x -= fraction;
            break;
        case GLUT_KEY_RIGHT :
            x += fraction;
            break;
        case GLUT_KEY_UP :
            y += fraction;
            break;
        case GLUT_KEY_DOWN :
            y -= fraction;
            break;
    }
}

void processNormalKeys(unsigned char key, int x, int y) {

   float fraction = 0.5f;
    /*if (key == 27)
        exit(0);
    else*/ if (key=='q') {
      z -= fraction;
    }else if (key=='e') {
      z += fraction;
    }else if (key=='a') {
      ry -= 1.0f;
    }else if (key=='d') {
      ry += 1.0f;
    }else if (key=='w') {
      rx -= 1.0f;
    }else if (key=='s') {
      rx += 1.0f;
    }
}
 
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(3027, 4096);
    glutInitWindowPosition(500, 500);
    glutCreateWindow("P L A N T");
    glutDisplayFunc(displayMe);
    glutKeyboardFunc(processNormalKeys);
    glutSpecialFunc(processSpecialKeys);
    glutReshapeFunc(reshape);
    initGL();
    glutTimerFunc(0, timer, 0);
    glutMainLoop();
    return 0;
}