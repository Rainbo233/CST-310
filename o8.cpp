#include <GL/glut.h>
 
GLfloat rotateAll = 0.1f; 
int refreshMills = 15;  
float x;
float y;
float z;

void initGL() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
   glClearDepth(1.0f);                   // Set background depth to farthest
   glEnable(GL_DEPTH_TEST);   // Enable depth testing for z-culling
   glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
   glShadeModel(GL_SMOOTH);   // Enable smooth shading
   glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // Nice perspective corrections
}

void renderScene(void)
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glTranslatef(-60.5f + x, -35.0f + y, -90.0f + z);
glScalef(.4f,.4f,1.0f);



glRotatef(rotateAll, 1.0f, 1.0f, 1.0f);
glBegin(GL_QUADS);
//background
glColor3f(.80f,.78f, .74f);
glVertex3f(22.0f,180.0f, 0.0f);
glVertex3f(278.0f,180.0f, 0.0f);
glVertex3f(277.0f,2.0f, 0.0f);
glVertex3f(22.0f,1.0f, 0.0f);


//Obj 1
glColor3f(.73f,.72f, .70f);
glVertex3f(32.0f,152.0f, 0.0f);
glVertex3f(59.0f,151.0f, 0.0f);
glVertex3f(58.0f,154.0f, 0.0f);
glVertex3f(32.0f,153.0f, 0.0f);

glColor3f(.81f,.79f, .78f);
glVertex3f(31.0f,152.0f, 0.0f);
glVertex3f(57.0f,152.0f, 0.0f);
glVertex3f(62.0f,67.0f, 0.0f);
glVertex3f(32.0f,71.0f, 0.0f);

glColor3f(.52f,.41f, .47f);
glVertex3f(32.0f,71.0f, 0.0f);
glVertex3f(63.0f,66.0f, 0.0f);
glVertex3f(63.0f,65.0f, 0.0f);
glVertex3f(31.0f,69.0f, 0.0f);

//Obj 2
glColor3f(.38f,.39f, .38f);
glVertex3f(74.0f,104.0f, 0.0f);
glVertex3f(73.0f,84.0f, 0.0f);
glVertex3f(75.0f,83.0f, 0.0f);
glVertex3f(75.0f,103.0f, 0.0f);

glColor3f(.14f,.16f, .18f);
glVertex3f(75.0f,103.0f, 0.0f);
glVertex3f(75.0f,83.0f, 0.0f);
glVertex3f(78.0f,82.0f, 0.0f);
glVertex3f(78.0f,102.0f, 0.0f);

glColor3f(.65f,.64f, .65f);
glVertex3f(74.0f,101.0f, 0.0f);
glVertex3f(78.0f,100.0f, 0.0f);
glVertex3f(78.0f,94.0f, 0.0f);
glVertex3f(75.0f,94.0f, 0.0f);

glColor3f(.10f,.11f, .12f);
glVertex3f(78.0f,103.0f, 0.0f);
glVertex3f(79.0f,81.0f, 0.0f);
glVertex3f(82.0f,81.0f, 0.0f);
glVertex3f(82.0f,102.0f, 0.0f);

glColor3f(.11f,.12f, .14f);
glVertex3f(82.0f,102.0f, 0.0f);
glVertex3f(82.0f,81.0f, 0.0f);
glVertex3f(87.0f,81.0f, 0.0f);
glVertex3f(87.0f,102.0f, 0.0f);

glColor3f(.08f,.07f, .09f);
glVertex3f(87.0f,102.0f, 0.0f);
glVertex3f(87.0f,81.0f, 0.0f);
glVertex3f(92.0f,83.0f, 0.0f);
glVertex3f(92.0f,103.0f, 0.0f);

glColor3f(.52f,.50f, .47f);
glVertex3f(92.0f,103.0f, 0.0f);
glVertex3f(92.0f,83.0f, 0.0f);
glVertex3f(96.0f,83.0f, 0.0f);
glVertex3f(96.0f,104.0f, 0.0f);

glColor3f(.16f,.15f, .14f);
glVertex3f(91.0f,100.0f, 0.0f);
glVertex3f(93.0f,101.0f, 0.0f);
glVertex3f(93.0f,98.0f, 0.0f);
glVertex3f(92.0f,97.0f, 0.0f);

glColor3f(.16f,.15f, .14f);
glVertex3f(92.0f,87.0f, 0.0f);
glVertex3f(93.0f,87.0f, 0.0f);
glVertex3f(93.0f,84.0f, 0.0f);
glVertex3f(92.0f,84.0f, 0.0f);

glColor3f(.56f,.52f, .48f);
glVertex3f(75.0f,103.0f, 0.0f);
glVertex3f(78.0f,102.0f, 0.0f);
glVertex3f(82.0f,102.0f, 0.0f);
glVertex3f(79.0f,105.0f, 0.0f);

glColor3f(.59f,.29f, .29f);
glVertex3f(79.0f,105.0f, 0.0f);
glVertex3f(82.0f,102.0f, 0.0f);
glVertex3f(81.0f,108.0f, 0.0f);
glVertex3f(80.0f,106.0f, 0.0f);

glColor3f(.16f,.16f, .16f);
glVertex3f(81.0f,108.0f, 0.0f);
glVertex3f(82.0f,102.0f, 0.0f);
glVertex3f(85.0f,108.0f, 0.0f);
glVertex3f(83.0f,108.0f, 0.0f);

glColor3f(.17f,.16f, .16f);
glVertex3f(84.0f,108.0f, 0.0f);
glVertex3f(82.0f,102.0f, 0.0f);
glVertex3f(87.0f,105.0f, 0.0f);
glVertex3f(85.0f,107.0f, 0.0f);

glColor3f(.53f,.33f, .33f);
glVertex3f(86.0f,105.0f, 0.0f);
glVertex3f(82.0f,102.0f, 0.0f);
glVertex3f(87.0f,102.0f, 0.0f);
glVertex3f(91.0f,103.0f, 0.0f);

glColor3f(.67f,.65f, .61f);
glVertex3f(84.0f,108.0f, 0.0f);
glVertex3f(90.0f,108.0f, 0.0f);
glVertex3f(96.0f,103.0f, 0.0f);
glVertex3f(91.0f,103.0f, 0.0f);

//obj 3
glColor3f(.17f,.18f, .23f);
glVertex3f(166.0f,60.0f, 0.0f);
glVertex3f(166.0f,170.0f, 0.0f);
glVertex3f(268.0f,181.0f, 0.0f);
glVertex3f(270.0f,48.0f, 0.0f);

glColor3f(.51f,.47f, .44f);
glVertex3f(270.0f,48.0f, 0.0f);
glVertex3f(270.0f,44.0f, 0.0f);
glVertex3f(163.0f,56.0f, 0.0f);
glVertex3f(166.0f,59.0f, 0.0f);

glColor3f(.83f,.81f, .80f);
glVertex3f(166.0f,59.0f, 0.0f);
glVertex3f(164.0f,57.0f, 0.0f);
glVertex3f(164.0f,171.0f, 0.0f);
glVertex3f(167.0f,171.0f, 0.0f);

//obj 4
glColor3f(.80f,.69f, .50f);
glVertex3f(189.0f,136.0f, 0.0f);
glVertex3f(217.0f,137.0f, 0.0f);
glVertex3f(216.0f,115.0f, 0.0f);
glVertex3f(188.0f,115.0f, 0.0f);

glColor3f(.72f,.42f, .38f);
glVertex3f(196.0f,134.0f, 0.0f);
glVertex3f(196.0f,132.0f, 0.0f);
glVertex3f(208.0f,132.0f, 0.0f);
glVertex3f(208.0f,135.0f, 0.0f);

glColor3f(.72f,.42f, .38f);
glVertex3f(194.0f,134.0f, 0.0f);
glVertex3f(194.0f,134.0f, 0.0f);
glVertex3f(192.0f,132.0f, 0.0f);
glVertex3f(195.0f,132.0f, 0.0f);

glColor3f(.72f,.42f, .38f);
glVertex3f(211.0f,135.0f, 0.0f);
glVertex3f(211.0f,135.0f, 0.0f);
glVertex3f(209.0f,133.0f, 0.0f);
glVertex3f(212.0f,133.0f, 0.0f);

//obj 5
glColor3f(.60f,.57f, .53f);
glVertex3f(140.0f,105.0f, 0.0f);
glVertex3f(163.0f,104.0f, 0.0f);
glVertex3f(159.0f,103.0f, 0.0f);
glVertex3f(134.0f,103.0f, 0.0f);

glColor3f(.30f,.29f, .27f);
glVertex3f(134.0f,103.0f, 0.0f);
glVertex3f(159.0f,103.0f, 0.0f);
glVertex3f(158.0f,98.0f, 0.0f);
glVertex3f(132.0f,98.0f, 0.0f);

glColor3f(.15f,.15f, .18f);
glVertex3f(132.0f,98.0f, 0.0f);
glVertex3f(158.0f,98.0f, 0.0f);
glVertex3f(158.0f,70.0f, 0.0f);
glVertex3f(133.0f,71.0f, 0.0f);

glColor3f(.38f,.39f, .41f);
glVertex3f(142.0f,92.0f, 0.0f);
glVertex3f(145.0f,92.0f, 0.0f);
glVertex3f(145.0f,89.0f, 0.0f);
glVertex3f(142.0f,89.0f, 0.0f);

glColor3f(.38f,.39f, .41f);
glVertex3f(142.0f,79.0f, 0.0f);
glVertex3f(147.0f,79.0f, 0.0f);
glVertex3f(147.0f,77.0f, 0.0f);
glVertex3f(141.0f,77.0f, 0.0f);

glColor3f(.38f,.39f, .41f);
glVertex3f(142.0f,73.0f, 0.0f);
glVertex3f(146.0f,73.0f, 0.0f);
glVertex3f(146.0f,70.0f, 0.0f);
glVertex3f(142.0f,70.0f, 0.0f);

glColor3f(.10f,.09f, .11f);
glVertex3f(155.0f,80.0f, 0.0f);
glVertex3f(157.0f,80.0f, 0.0f);
glVertex3f(157.0f,73.0f, 0.0f);
//glVertex3f(156.0f,73.0f, 0.0f);
glVertex3f(155.0f,80.0f, 0.0f);

glColor3f(.09f,.06f, .09f);
glVertex3f(133.0f,71.0f, 0.0f);
glVertex3f(158.0f,70.0f, 0.0f);
glVertex3f(160.0f,67.0f, 0.0f);
glVertex3f(135.0f,68.0f, 0.0f);

glColor3f(.76f,.69f, .62f);
glVertex3f(138.0f,68.0f, 0.0f);
glVertex3f(155.0f,67.0f, 0.0f);
glVertex3f(155.0f,64.0f, 0.0f);
glVertex3f(137.0f,64.0f, 0.0f);

glColor3f(.23f,.19f, .20f);
glVertex3f(160.0f,68.0f, 0.0f);
glVertex3f(164.0f,69.0f, 0.0f);
glVertex3f(165.0f,71.0f, 0.0f);
glVertex3f(158.0f,70.0f, 0.0f);

glColor3f(.09f,.09f, .10f);
glVertex3f(158.0f,70.0f, 0.0f);
glVertex3f(158.0f,99.0f, 0.0f);
glVertex3f(161.0f,101.0f, 0.0f);
glVertex3f(160.0f,70.0f, 0.0f);

glColor3f(.16f,.16f, .17f);
glVertex3f(160.0f,70.0f, 0.0f);
glVertex3f(164.0f,71.0f, 0.0f);
glVertex3f(165.0f,103.0f, 0.0f);
glVertex3f(161.0f,101.0f, 0.0f);

glColor3f(.11f,.10f, .12f);
glVertex3f(161.0f,101.0f, 0.0f);
glVertex3f(158.0f,99.0f, 0.0f);
glVertex3f(159.0f,103.0f, 0.0f);
glVertex3f(159.0f,103.0f, 0.0f);

glColor3f(.47f,.43f, .41f);
glVertex3f(159.0f,103.0f, 0.0f);
glVertex3f(161.0f,101.0f, 0.0f);
glVertex3f(164.0f,102.0f, 0.0f);
glVertex3f(163.0f,105.0f, 0.0f);

//obj 6
glColor3f(.19f,.15f, .12f);
glVertex3f(33.0f,19.0f, 0.0f);
glVertex3f(112.0f,0.0f, 0.0f);
glVertex3f(87.0f,0.0f, 0.0f);
glVertex3f(33.0f,13.0f, 0.0f);

glColor3f(.40f,.34f, .28f);
glVertex3f(33.0f,13.0f, 0.0f);
glVertex3f(91.0f,0.0f, 0.0f);
glVertex3f(33.0f,0.0f, 0.0f);
glVertex3f(33.0f,14.0f, 0.0f);

//obj 7
glColor3f(.40f,.37f, .34f);
glVertex3f(118.0f,33.0f, 0.0f);
glVertex3f(134.0f,46.0f, 0.0f);
glVertex3f(135.0f,44.0f, 0.0f);
glVertex3f(121.0f,33.0f, 0.0f);

glColor3f(.52f,.49f, .48f);
glVertex3f(135.0f,47.0f, 0.0f);
glVertex3f(162.0f,40.0f, 0.0f);
glVertex3f(159.0f,39.0f, 0.0f);
glVertex3f(136.0f,44.0f, 0.0f);

glColor3f(.16f,.14f, .16f);
glVertex3f(136.0f,44.0f, 0.0f);
glVertex3f(120.0f,33.0f, 0.0f);
glVertex3f(136.0f,29.0f, 0.0f);
glVertex3f(135.0f,44.0f, 0.0f);

glColor3f(.48f,.44f, .44f);
glVertex3f(135.0f,44.0f, 0.0f);
glVertex3f(135.0f,29.0f, 0.0f);
glVertex3f(148.0f,28.0f, 0.0f);
glVertex3f(160.0f,40.0f, 0.0f);

glColor3f(.46f,.42f, .41f);
glVertex3f(160.0f,40.0f, 0.0f);
glVertex3f(149.0f,28.0f, 0.0f);
glVertex3f(149.0f,25.0f, 0.0f);
glVertex3f(162.0f,40.0f, 0.0f);

glColor3f(.40f,.36f, .45f);
glVertex3f(148.0f,28.0f, 0.0f);
glVertex3f(121.0f,33.0f, 0.0f);
glVertex3f(118.0f,32.0f, 0.0f);
glVertex3f(148.0f,26.0f, 0.0f);

glColor3f(.18f,.16f, .14f);
glVertex3f(149.0f,26.0f, 0.0f);
glVertex3f(149.0f,21.0f, 0.0f);
glVertex3f(162.0f,32.0f, 0.0f);
glVertex3f(162.0f,41.0f, 0.0f);

glColor3f(.27f,.25f, .24f);
glVertex3f(149.0f,28.0f, 0.0f);
glVertex3f(149.0f,23.0f, 0.0f);
glVertex3f(120.0f,29.0f, 0.0f);
glVertex3f(119.0f,32.0f, 0.0f);

glColor3f(.37f,.35f, .34f);
glVertex3f(120.0f,29.0f, 0.0f);
glVertex3f(120.0f,24.0f, 0.0f);
glVertex3f(148.0f,16.0f, 0.0f);
glVertex3f(149.0f,23.0f, 0.0f);

glColor3f(.36f,.32f, .30f);
glVertex3f(149.0f,23.0f, 0.0f);
glVertex3f(148.0f,16.0f, 0.0f);
glVertex3f(161.0f,25.0f, 0.0f);
glVertex3f(162.0f,32.0f, 0.0f);

glColor3f(.08f,.07f, .05f);
glVertex3f(121.0f,24.0f, 0.0f);
glVertex3f(122.0f,1.0f, 0.0f);
glVertex3f(147.0f,1.0f, 0.0f);
glVertex3f(148.0f,15.0f, 0.0f);

glColor3f(.21f,.18f, .17f);
glVertex3f(148.0f,15.0f, 0.0f);
glVertex3f(147.0f,1.0f, 0.0f);
glVertex3f(160.0f,0.0f, 0.0f);
glVertex3f(161.0f,24.0f, 0.0f);

//obj 8
glColor3f(.29f,.23f, .21f);
glVertex3f(227.0f,29.0f, 0.0f);
glVertex3f(228.0f,12.0f, 0.0f);
glVertex3f(271.0f,3.0f, 0.0f);
glVertex3f(270.0f,21.0f, 0.0f);

glColor3f(.05f,.02f, .01f);
glVertex3f(227.0f,25.0f, 0.0f);
glVertex3f(226.0f,1.0f, 0.0f);
glVertex3f(228.0f,1.0f, 0.0f);
glVertex3f(229.0f,12.0f, 0.0f);

glColor3f(.21f,.18f, .20f);
glVertex3f(229.0f,12.0f, 0.0f);
glVertex3f(228.0f,1.0f, 0.0f);
glVertex3f(233.0f,1.0f, 0.0f);
glVertex3f(233.0f,11.5f, 0.0f);

glColor3f(.12f,.10f, .09f);
glVertex3f(233.0f,11.0f, 0.0f);
glVertex3f(233.0f,1.0f, 0.0f);
glVertex3f(270.0f,0.0f, 0.0f);
glVertex3f(269.0f,4.0f, 0.0f);

//obj 9
glColor3f(.61f,.59f, .55f);
glVertex3f(246.0f,24.0f, 0.0f);
glVertex3f(247.0f,34.0f, 0.0f);
glVertex3f(254.0f,34.0f, 0.0f);
glVertex3f(253.0f,23.0f, 0.0f);

glColor3f(.14f,.39f, .40f);
glVertex3f(246.0f,29.0f, 0.0f);
glVertex3f(246.0f,25.0f, 0.0f);
glVertex3f(253.0f,25.0f, 0.0f);
glVertex3f(254.0f,28.0f, 0.0f);

glColor3f(.59f,.56f, .54f);
glVertex3f(249.0f,34.0f, 0.0f);
glVertex3f(249.0f,37.0f, 0.0f);
glVertex3f(253.0f,36.0f, 0.0f);
glVertex3f(252.0f,34.0f, 0.0f);

glColor3f(.73f,.70f, .66f);
glVertex3f(250.0f,37.0f, 0.0f);
glVertex3f(250.0f,41.0f, 0.0f);
glVertex3f(252.0f,41.0f, 0.0f);
glVertex3f(252.0f,36.0f, 0.0f);

//obj 10
glColor3f(.50f,.56f, .47f);
glVertex3f(260.0f,22.0f, 0.0f);
glVertex3f(260.0f,28.0f, 0.0f);
glVertex3f(265.0f,27.0f, 0.0f);
glVertex3f(265.0f,19.0f, 0.0f);

glColor3f(.50f,.56f, .47f);
glVertex3f(265.0f,19.0f, 0.0f);
glVertex3f(265.0f,28.0f, 0.0f);
glVertex3f(269.0f,29.0f, 0.0f);
glVertex3f(269.0f,20.0f, 0.0f);

glColor3f(.69f,.67f, .64f);
glVertex3f(260.0f,28.0f, 0.0f);
glVertex3f(261.0f,36.0f, 0.0f);
glVertex3f(267.0f,34.0f, 0.0f);
glVertex3f(267.0f,27.0f, 0.0f);

glColor3f(.70f,.67f, .63f);
glVertex3f(267.0f,28.0f, 0.0f);
glVertex3f(266.0f,34.0f, 0.0f);
glVertex3f(272.0f,34.0f, 0.0f);
glVertex3f(271.0f,28.0f, 0.0f);

glColor3f(.12f,.19f, .14f);
glVertex3f(267.0f,32.0f, 0.0f);
glVertex3f(271.0f,32.0f, 0.0f);
glVertex3f(271.0f,23.0f, 0.0f);
glVertex3f(265.0f,22.0f, 0.0f);

glColor3f(.70f,.67f, .63f);
glVertex3f(260.0f,36.0f, 0.0f);
glVertex3f(265.0f,42.0f, 0.0f);
glVertex3f(269.0f,41.0f, 0.0f);
glVertex3f(272.0f,35.0f, 0.0f);

glColor3f(.70f,.67f, .63f);
glVertex3f(272.0f,35.0f, 0.0f);
glVertex3f(267.0f,34.0f, 0.0f);
glVertex3f(261.0f,35.0f, 0.0f);
glVertex3f(260.0f,36.0f, 0.0f);

glColor3f(.67f,.62f, .58f);
glVertex3f(266.0f,41.0f, 0.0f);
glVertex3f(266.0f,48.0f, 0.0f);
glVertex3f(270.0f,48.0f, 0.0f);
glVertex3f(268.0f,41.0f, 0.0f);

glColor3f(.72f,.69f, .67f);
glVertex3f(267.0f,51.0f, 0.0f);
glVertex3f(265.0f,48.0f, 0.0f);
glVertex3f(268.0f,47.0f, 0.0f);
glVertex3f(269.0f,49.0f, 0.0f);






   glEnd();   // Done drawing the pyramid
 



    //rotateAll*=1.01;
   
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
   gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}
 
void processSpecialKeys(int key, int xx, int yy) {

	float fraction = 0.5f;

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
	if (key == 27)
		exit(0);
	else if (key=='q') {
      z -= fraction;
	}else if (key=='e') {
      z += fraction;
	}
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Hello world!");
    glutDisplayFunc(renderScene);
   glutKeyboardFunc(processNormalKeys);
	glutSpecialFunc(processSpecialKeys);
    glutReshapeFunc(reshape);
    initGL();
    glutTimerFunc(0, timer, 0); 
    glutMainLoop();
    return 0;
}
    