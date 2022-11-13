#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>


float moveC = 0.0f;
float moveB1 = 0.0f;
float moveB2 = 0.0f;
float speed = 0.02f;



void DrawAllComponents()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
    glLoadIdentity();
    gluOrtho2D(-12,38,-19,14);
    glMatrixMode(GL_MODELVIEW);


    ///sky///
    glBegin(GL_QUADS);
      glColor3f(0.118,0.565,1.000);
    glVertex2f(38.0f,3.0f);
    glColor3ub(115,160,228);
    glVertex2f(38.0f,14.0f);
    glVertex2f(-12.0f,14.0f);
    glVertex2f(-12.0f,3.0f);
    glEnd();

    ///sun///
    glPushMatrix();

    glColor3f(1.000,0.843,0.000);
    glTranslatef(30.0, 8.0, 0);
    glutSolidSphere(1.0, 250, 250);
    glPopMatrix();

    ///cloud///
    glPushMatrix();

    glTranslatef(moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(3.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPopMatrix();

  ///river
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(65,105,225);

    glVertex2f(38.0f,-19.0f);
    glVertex2f(38.0f,-10.0f);
    glVertex2f(-12.0f,-7.0f);
    glVertex2f(-12.0f,-19.0f);
    glEnd();


    ///Ground
    glBegin(GL_POLYGON);
    glColor3ub(25,128,0);

    glVertex2f(1.0f, -8.0f);
    glVertex2f(38.0f,-12.0f);
    glVertex2f(38.0f,3.0f);
    glVertex2f(-12.0f,3.0f);
    glVertex2f(-12.0f,-11.0f);
    glEnd();





///house

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-2.7f,1.2f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-8.5f,-1.0f);
    glVertex2f(-8.0f,-1.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-8.0f,-1.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-1.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(128,135,32);
    glVertex2f(-6.0f,-2.0f);
    glVertex2f(-6.0f,-1.0f);
    glVertex2f(-7.0f,-1.0f);
    glVertex2f(-7.0f,-2.0f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-8.3f,-2.9f);
    glVertex2f(-5.0f,-3.5f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(184,134,11);
    glVertex2f(-1.5f,-3.0f);
    glVertex2f(-1.5f,-1.0f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-5.0f,-3.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-3.5f);
    glVertex2f(-1.0f,-3.5f);
    glVertex2f(-1.5f,-3.0f);

    glEnd();




    glBegin(GL_POLYGON);
    glColor3ub(128,135,32);
    glVertex2f(-3.3f,-3.0f);
    glVertex2f(-3.3f,-1.4f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();



    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();


    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.5, 3.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();


    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();






///house

    glBegin(GL_POLYGON);
    glColor3ub(47,170,79);
    glVertex2f(25.3,1.2);
    glVertex2f(21.3,1.2);
    glVertex2f(23,-1);
    glVertex2f(27,-1);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);

    glVertex2f(21.5,1);
    glVertex2f(21.3,1.2);
    glVertex2f(19.5,-1);
    glVertex2f(20,-1);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3ub(184,134,11);
    glVertex2f(21.5,1);
    glVertex2f(20,-1);
    glVertex2f(20,-2.5);
    glVertex2f(23,-3);
    glVertex2f(23,-1);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(22,-2);
    glVertex2f(22,-1);
    glVertex2f(21,-1);
    glVertex2f(21,-2);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);
    glVertex2f(23,-3);
    glVertex2f(20,-2.5);
    glVertex2f(19.7,-2.9);
    glVertex2f(23,-3.5);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(205,133,63);
    glVertex2f(26.5,-3);
    glVertex2f(26.5,-1);
    glVertex2f(23,-1);
    glVertex2f(23,-3);

    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(47,79,79);

    glVertex2f(23,-3);
    glVertex2f(23,-3.5);
    glVertex2f(27,-3.5);
    glVertex2f(26.5,-3);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(24.7,-3);
    glVertex2f(24.7, -.8);
    glVertex2f(24,-1.2);
    glVertex2f(24,-3);
    glEnd();

    glBegin(GL_POLYGON);

    glColor3ub(160,82,45);
    glVertex2f(25.5,-3);
    glVertex2f(25.5,-1.2);
    glVertex2f(24.8,-1.4);
    glVertex2f(24.8,-3);

    glEnd();



///hill1
    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(31,3);
    glVertex2f(32.5,4.5);
    glVertex2f(35,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(29,3);
    glVertex2f(29.5,4);
    glVertex2f(30.5,4);
    glVertex2f(31,3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(29.5,4);
    glVertex2f(30,4.5);
    glVertex2f(30.5,4);
    glEnd();



///tree

    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(5.3,-4+.5*i);
        glVertex2f(6.4,-2+.5*i);
        glVertex2f(7.5,-4+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(6.5,-4);
    glVertex2f(6.5,-5);
    glVertex2f(6.3,-5);
    glVertex2f(6.3,-4);
    glEnd();


    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(8.3,-4+.5*i);
        glVertex2f(9.4,-2+.5*i);
        glVertex2f(10.5,-4+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(9.5,-4);
    glVertex2f(9.5,-5);
    glVertex2f(9.3,-5);
    glVertex2f(9.3,-4);
    glEnd();


    for(int i=0; i< 4; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(11.3,-4+.5*i);
        glVertex2f(12.4,-2+.5*i);
        glVertex2f(13.5,-4+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(12.5,-4);
    glVertex2f(12.5,-5);
    glVertex2f(12.3,-5);
    glVertex2f(12.3,-4);
    glEnd();


    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(5.2,0+.5*i);
        glVertex2f(6,2+.5*i);
        glVertex2f(7,0+.5*i);
        glEnd();
    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(6,0);
    glVertex2f(6,-1);
    glVertex2f(6,-1);
    glVertex2f(6.3,0);
    glEnd();





///left side

    for(int i=0; i< 5; i++)
    {
        glBegin(GL_TRIANGLES);
        glColor3ub(0,255,0);

        glVertex2f(4,-2+.5*i);
        glVertex2f(2.75,-0+.5*i);
        glVertex2f(1.5,-2+.5*i);
        glEnd();


    }

    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);

    glVertex2f(3,-2);
    glVertex2f(3,-4);
    glVertex2f(2.75,-4);
    glVertex2f(2.75,-2);

    glEnd();





    ///boat

    glBegin(GL_POLYGON);
    glColor3ub(0,69,19);

    glVertex2f(-3,-10);
    glVertex2f(-3,-7.5);
    glVertex2f(-3.1,-7.5);
    glVertex2f(-3.1,-10);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -10.5f);
    glVertex2f(2.0f, -10.0f);
    glVertex2f(-3.0f, -10.0f);
    glVertex2f(-3.0f, -10.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-3.0f, -10.5f);
    glVertex2f(-3.0f, -10.0f);
    glVertex2f(-4.5f, -9.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -10.5f);
    glVertex2f(3.5f, -9.7f);
    glVertex2f(2.0f, -10.0f);

    glEnd();



    glPopMatrix();
    glutSwapBuffers();
}



void updateC(int value)
{

    if(moveC > +36)
    {
        moveC = -38;
    }
    moveC += 0.15;

    glutTimerFunc(20, updateC, 0);
    glutPostRedisplay();
}


void updateB1(int value)
{

    moveB1 += speed;
    if(moveB1 > 38)
    {
        moveB1 = -38;
    }


    glutTimerFunc(20, updateB1, 0);
    glutPostRedisplay();
}



void updateB2(int value)
{


    if(moveB2 < -36)
    {
        moveB2 = +38;
    }


    moveB2 -= 0.13;

    glutTimerFunc(20, updateB2, 0);
    glutPostRedisplay();
}



void handleKeypress(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 's':
        speed = 0.0f;
        break;
    case 'r':
        speed = 0.02f;
        break;
        glutPostRedisplay();
    }
}


void handleMouse(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON)
    {
        speed += 0.05f;
    }


    else if (button == GLUT_RIGHT_BUTTON)
    {
        speed -= 0.05f;
    }
    glutPostRedisplay();
}





void display(void)
{
    DrawAllComponents();
    glFlush ();
}

void init()
{

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);

    glutInitWindowSize(900,500);

    glutCreateWindow(" Sakib Village Scenery ");
    init();

    glutTimerFunc(10, updateC, 1);

    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
