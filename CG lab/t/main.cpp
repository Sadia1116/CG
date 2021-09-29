/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */



#include<windows.h>
#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
float angle=0;
void reShape(int width, int height){
    glViewport(0,0,width,height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0,(double)width/(double)height,1.0,200.0);
}


void initRendering(){


  glEnable(GL_LIGHTING);  //lighting with additional color for color
  glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
  glEnable(GL_COLOR_MATERIAL);
  glEnable(GL_LIGHT0);
  glEnable(GL_LIGHT1);

}

void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    GLfloat amColor[]={0.2f,0.2f,0.2f,1.0f};
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,amColor);

    GLfloat lcolor0[]={0.9f,0.9f,0.9f,1.0f};
    GLfloat lPosition0[]={1.0f,1.2f,2.0f,1.0f};
    glLightfv(GL_LIGHT0,GL_DIFFUSE,lcolor0);
    glLightfv(GL_LIGHT0,GL_POSITION,lPosition0);

    GLfloat lcolor1[]={0.25f,0.67f,0.25f,1.0f};
    GLfloat lPosition1[]={0.23f,3.0f,2.0f,1.0f};
    glLightfv(GL_LIGHT0,GL_DIFFUSE,lcolor1);
    glLightfv(GL_LIGHT0,GL_POSITION,lPosition1);

    glTranslated(0,0,-20);
    glRotated(angle,1,1,0);

    //front
    glPushMatrix();
        glColor3f(0,0,1);
        glBegin(GL_QUADS);
            glNormal3f(0.0f,0.0f,1.0f);
            glVertex3f(3,3,0);
            glVertex3f(3,-3,3);
            glVertex3f(-3,-3,3);
            glVertex3f(-3,3,0);
        glEnd();
    glPopMatrix();
    //back
    glPushMatrix();
        glColor3f(0,1,0);
        glBegin(GL_QUADS);
            glNormal3f(0.0f,0.0f,-1.0f);
            glVertex3f(3,3,0);
            glVertex3f(3,-3,-3);
            glVertex3f(-3,-3,-3);
            glVertex3f(-3,3,0);
        glEnd();
    glPopMatrix();


    //bottom
    glPushMatrix();
        glColor3f(1,0,0);
        glBegin(GL_QUADS);
            glNormal3f(0.0f,-1.0f,0.0f);
            glVertex3f(3,-3,-3);
            glVertex3f(3,-3,3);
            glVertex3f(-3,-3,3);
            glVertex3f(-3,-3,-3);
        glEnd();
    glPopMatrix();

    //left
    glPushMatrix();
        glColor3f(0,0.6,0.6);
          //glBegin(GL_QUADS);
        glBegin(GL_TRIANGLES);
            glNormal3f(-1.0f,0.0f,0.0f);
            glVertex3f(-3,3,0);
            glVertex3f(-3,-3,-3);
            glVertex3f(-3,-3,3);
           // glVertex3f(-3,3,3);
        glEnd();
    glPopMatrix();
    //right
    glPushMatrix();
        glColor3f(1,1,0.6);
        //glBegin(GL_QUADS);
          glBegin(GL_TRIANGLES);
            glNormal3f(1.0f,0.0f,0.0f);
            //glVertex3f(3,3,-3);
            glVertex3f(3,-3,-3);
            glVertex3f(3,-3,3);
            glVertex3f(3,3,0);
        glEnd();
    glPopMatrix();

    glutSwapBuffers();
}
void rotateShape(){
 angle=angle+0.05;
 glutPostRedisplay();
}
void mouse(int button,int state,  int x, int y){
    switch(button){
    case GLUT_LEFT_BUTTON:
    if(state==GLUT_DOWN){
     glutIdleFunc(rotateShape);
    }
    break;
case GLUT_RIGHT_BUTTON:
    if(state==GLUT_DOWN){
            glutIdleFunc(NULL);
            glutPostRedisplay();

    }
    break;
default:
    break;
    }

}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    //glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("3D Shapes");
    glEnable(GL_DEPTH_TEST);
    glutReshapeFunc(reShape);
    initRendering();
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();

    return 0;
}
