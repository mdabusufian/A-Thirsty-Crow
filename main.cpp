#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <cstdio>
#include<iostream>
#include<math.h>
#include<MMSystem.h>

# define PI 3.14159265358979323846

void Display(void);
void Display1();

GLfloat position = -1.2f,position1 = 0.0f,position2 = 0.0f,skypos=-1.2f,xpos=-1.0f,ypos=0.45f,yuppos,ydown;
GLfloat speed = 0.08f,speed1 = 0.05f,skyspeed=0.03f,crowspeed = 0.1f;


int donef = 0,dtwof = 0,dthreef = 0,dfourf = 0,dfivef = 0,dsixf = 0,dsevenf = 0,
waterflag = 0,ideaflag = 0,ideamusic = 0,febbleflag = 0,stonereturnflag = 0,
deightf = 0,flyaway = 0,drankwater = 0,happilygone = 0;

void update(int value) {

    if(position > 1.3)
    {
        position = -1.2f;
        skypos = -1.2f;
        position2 = 1.2f;
    }
    if(position1 <-1.0)
    position1 = 1.0f;



position1 -= speed1;

    position += speed;
    position2 -=0.05;
    skypos +=skyspeed;

    if(!waterflag)
    {
        xpos+=crowspeed;
        ypos-=crowspeed;
    }
    if(stonereturnflag)
    {
        xpos+=crowspeed;
        yuppos+=crowspeed;
    }
    ydown-=speed;
	glutPostRedisplay();

	glutTimerFunc(100, update, 0);
}

void StartingText()
{
    char text[120];
    sprintf(text, "WHERE THERE IS A WILL  THERE'S A WAY",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -28 , 32 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -20 , 22 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"MD. Mahadial Mohok Million ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20 , -5 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text,"Saidul Mursalin ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20 , -10 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"MD Abu Sufian",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20 , -15 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"and ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( 13 , -15 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"Mohd. Ya-Yah Raiyan ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -20 , -20 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"Press 1,2,3,4,5,6,7 to continue the story in summer",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -42 , -30 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"Press q,w,e,r,t,y to continue the story in spring ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -42 , -35 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
     sprintf(text,"Press a,s,d,f,g,h,j to continue the story in winter ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -42 , -40 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
    sprintf(text,"Press z,x,c,v,b,n,m to continue the story in Rainy-seasaon ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( -42 , -45 );
    for(int i = 0; text[i] != '\0'; i++)
    {
          if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -40 , -10 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
}

void circle(float a, float b, float r){

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a; GLfloat y=b; GLfloat radius =r;
       glBegin(GL_TRIANGLE_FAN);
       glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
		glEnd();
}


void circle1(float a, float b, float r){

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a; GLfloat y=b; GLfloat radius =r;
       glBegin(GL_TRIANGLE_FAN);
       glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}   glEnd();
}


void rainCloud(){

circle(-2.03,.95,.1);

circle(-1.84,.93,.15);
circle(-1.54,.93,.18);
circle(-1.28,.93,.15);
circle(-1.0,.93,.17);

circle(-.93,.95,.1);
circle(-.72,.93,.15);
circle(-.5,.93,.18);
circle(-.28,.93,.15);
circle(0.0,.95,.17);
circle(.2,.93,.15);
circle(.43,.93,.2);
circle(.65,.93,.13);
circle(.8,.95,.15);
circle(.95,.95,.08);
}
    void rain(){
    glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(1,1,1);
    glVertex2f(-.85,1.9);glVertex2f(-.8,1.8);
    glVertex2f(-.55,1.9);glVertex2f(-.5,1.8);
    glVertex2f(-.25,1.9);glVertex2f(-.2,1.8);
            glVertex2f(.05,1.9);glVertex2f(.1,1.8);
            glVertex2f(.35,1.9);glVertex2f(.4,1.8);
            glVertex2f(.65,1.9);glVertex2f(.7,1.8);
            glVertex2f(.95,1.9);glVertex2f(1.0,1.8);

     glVertex2f(-1.0,1.6);glVertex2f(-.95,1.5);
    glVertex2f(-.7,1.6);glVertex2f(-.65,1.5);
    glVertex2f(-.4,1.6);glVertex2f(-.35,1.5);
    glVertex2f(-.1,1.6);glVertex2f(-.05,1.5);
            glVertex2f(.2,1.6);glVertex2f(.25,1.5);
            glVertex2f(.5,1.6);glVertex2f(.55,1.5);
            glVertex2f(.8,1.6);glVertex2f(.85,1.5);


    glVertex2f(-.85,1.3);glVertex2f(-.8,1.2);
    glVertex2f(-.55,1.3);glVertex2f(-.5,1.2);
    glVertex2f(-.25,1.3);glVertex2f(-.2,1.2);
             glVertex2f(.05,1.3);glVertex2f(.1,1.2);
            glVertex2f(.35,1.3);glVertex2f(.4,1.2);
            glVertex2f(.65,1.3);glVertex2f(.7,1.2);
            glVertex2f(.95,1.3);glVertex2f(1.0,1.2);

    glVertex2f(-1.0,1.0);glVertex2f(-.95,.9);
    glVertex2f(-.7,1.0);glVertex2f(-.65,0.9);
    glVertex2f(-.4,1.0);glVertex2f(-.35,0.9);
    glVertex2f(-.1,1.0);glVertex2f(-.05,0.9);
                 glVertex2f(.2,1.0);glVertex2f(.25,.9);
                 glVertex2f(.5,1.0);glVertex2f(.55,0.9);
                 glVertex2f(.8,1.0);glVertex2f(.85,0.9);



    glVertex2f(-.85,.7);glVertex2f(-.8,.6);
    glVertex2f(-.55,.7);glVertex2f(-.5,0.6);
    glVertex2f(-.25,.7);glVertex2f(-.2,0.6);
              glVertex2f(.05,.7);glVertex2f(.1,.6);
            glVertex2f(.35,.7);glVertex2f(.4,.6);
            glVertex2f(.65,.7);glVertex2f(.7,.6);
            glVertex2f(.95,.7);glVertex2f(1.0,.6);

    glVertex2f(-1.0,.4);glVertex2f(-.95,.3);
    glVertex2f(-.7,.4);glVertex2f(-.65,0.3);
    glVertex2f(-.4,.4);glVertex2f(-.35,0.3);
    glVertex2f(-.1,.4);glVertex2f(-.05,0.3);
                 glVertex2f(.2,.4);glVertex2f(.25,.3);
                 glVertex2f(.5,.4);glVertex2f(.55,0.3);
                 glVertex2f(.8,.40);glVertex2f(.85,0.3);

    glVertex2f(-.85,.1);glVertex2f(-.8,0.0);
    glVertex2f(-.55,.1);glVertex2f(-.5,0.0);
    glVertex2f(-.25,.1);glVertex2f(-.2,0.0);
              glVertex2f(.05,.1);glVertex2f(.1,.0);
            glVertex2f(.35,.1);glVertex2f(.4,.0);
            glVertex2f(.65,.1);glVertex2f(.7,.0);
            glVertex2f(.95,.1);glVertex2f(1.0,.0);


    glVertex2f(-1.0,-.2);glVertex2f(-.95,-.3);
    glVertex2f(-.7,-.2);glVertex2f(-.65,-0.3);
    glVertex2f(-.4,-.2);glVertex2f(-.35,-0.3);
    glVertex2f(-.1,-.2);glVertex2f(-.05,-0.3);
                 glVertex2f(.2,-.2);glVertex2f(.25,-.3);
                 glVertex2f(.5,-.2);glVertex2f(.55,-.3);
                 glVertex2f(.8,-.2);glVertex2f(.85,-.3);

    glVertex2f(-.85,-.5);glVertex2f(-.8,-.6);
    glVertex2f(-.55,-.5);glVertex2f(-.5,-.6);
    glVertex2f(-.25,-.5);glVertex2f(-.2,-.6);
             glVertex2f(.05,-.5);glVertex2f(.1,-.6);
            glVertex2f(.35,-.5);glVertex2f(.4,-.6);
            glVertex2f(.65,-.5);glVertex2f(.7,-.6);
            glVertex2f(.95,-.5);glVertex2f(1.0,-.6);

    glVertex2f(-1.0,-.8);glVertex2f(-.95,-.9);
    glVertex2f(-.7,-.8);glVertex2f(-.65,-0.9);
    glVertex2f(-.4,-.8);glVertex2f(-.35,-0.9);
    glVertex2f(-.1,-.8);glVertex2f(-.05,-0.9);
                 glVertex2f(.2,-.8);glVertex2f(.25,-.9);
                 glVertex2f(.5,-.8);glVertex2f(.55,-.9);
                 glVertex2f(.8,-.8);glVertex2f(.85,-.9);

    glVertex2f(-.85,-1.1);glVertex2f(-.8,-1.2);
    glVertex2f(-.55,-1.1);glVertex2f(-.5,-1.2);
    glVertex2f(-.25,-1.1);glVertex2f(-.2,-1.2);
              glVertex2f(.05,-1.1);glVertex2f(.1,-1.2);
            glVertex2f(.35,-1.1);glVertex2f(.4,-1.2);
            glVertex2f(.65,-1.1);glVertex2f(.7,-1.2);
            glVertex2f(.95,-1.1);glVertex2f(1.0,-1.2);

    glVertex2f(-1.0,-1.4);glVertex2f(-.95,-1.5);
    glVertex2f(-.7,-1.4);glVertex2f(-.65,-1.5);
    glVertex2f(-.4,-1.4);glVertex2f(-.35,-1.5);
    glVertex2f(-.1,-1.4);glVertex2f(-.05,-1.5);
                 glVertex2f(.2,-1.4);glVertex2f(.25,-1.5);
                 glVertex2f(.5,-1.4);glVertex2f(.55,-1.5);
                 glVertex2f(.8,-1.4);glVertex2f(.85,-1.5);


        glEnd();
}

GLfloat rainP=2.50f;
GLfloat rainSpeed=0.0f;
void rainUp(int value){



if(rainP > -1.0)
rainP = .50f;
rainP -= rainSpeed;
glutPostRedisplay();
glutTimerFunc(100, rainUp, 0);

}



void thander( ){
glLineWidth(3);
glBegin(GL_LINES);
glVertex2f(0,.95);glVertex2f(.05,.85);
glVertex2f(.05,.85);glVertex2f(.09,.89);
glVertex2f(.09,.89);glVertex2f(.15,.76);
glEnd();}

GLfloat RcloudP = 3.5f;
GLfloat RcloudS = 0.02f;
void RcloudUp(int value) {
if(RcloudP < -0.0)
RcloudP = 1.0f;
RcloudP -= RcloudS;
glutPostRedisplay();
glutTimerFunc(100, RcloudUp, 0);
}





void quad(float a, float b, float c, float d, float e, float f, float g, float h){
glBegin(GL_QUADS);
    glVertex2f(a,b);
    glVertex2f(c,d);
    glVertex2f(e,f);
    glVertex2f(g,h);
    glEnd();
}

void triangle(float a, float b, float c, float d, float e, float f){
glBegin(GL_TRIANGLES);
    glVertex2f(a,b);
    glVertex2f(c,d);
    glVertex2f(e,f);
    glEnd();}

// Tree 2
void tree2(){
       glBegin(GL_POLYGON);
       glColor3ub(69, 30, 14);
       glVertex2f(-.67,-.2);
       glVertex2f(-.84,-.85);
       glVertex2f(-.73,-.85);
       glVertex2f(-.6,-.2);
       glEnd();
  //right down
  quad(-.6,-.22,-.4,-.29,-.39,-.28,-.55,-.2);

//right mid
quad(-.63,-.18,-.65,-.28,-.4,-.1,-.33,-.09);

  //right up
  quad(-.6,-.18,-.55,-.18,-.55,-.01,-.56,-.02);
//left
//left up
   quad(-.75,-.16,-.68,-.18,-.78,.02,-.8,.03);





   quad(-.63,-.18,-.62,-.28,-.9,-.14,-.89,-.12);

 glBegin(GL_QUADS);
    //root
    glVertex2f(-.83,-.82);
    glVertex2f(-.95,-.88);
    glVertex2f(-.81,-.85);
    glVertex2f(-.81,-.82);
     glVertex2f(-.81,-.82);
     glVertex2f(-.83,-.84);
    glVertex2f(-.63,-.89);
     glVertex2f(-.73,-.82);

    glEnd();
}

// Spring Flower
void springFlower(){
        glColor3ub(247, 183, 225);
	    circle(0.025,.006,.013);
        circle(0.014,.025,.013);
        circle(0.0015,.005,.013);
        glColor3ub(255, 3, 3);
	    circle(0.012,.012,.01);
}

void downGrass(){
      glColor3ub(30, 74, 15);
		circle(-.9,-.9,.2);

        glColor3ub(30, 74, 15);
	    circle(-.33,-.93,.115);

	    glColor3ub(63, 163, 20);
		circle(-.7,-.9,.15);

	    glColor3ub(63, 163, 20);
	    circle(-.5,-.95,.1);

       glColor3ub(63, 163, 20);
		circle(-.18,-.95,.08);

	    glColor3ub(63, 163, 20);
		circle(-.03,-.95,.11);


    glTranslated(.87,.0,0);
        glColor3ub(49, 128, 15);
        circle(-.7,-.9,.15);

	    glColor3ub(49, 128, 15);
		circle(-.5,-.95,.1);
    glLoadIdentity();

    	 glColor3ub(63, 163, 20);
		circle(.52,-.95,.09);

	    glColor3ub(30, 74, 15);
		circle(0.9,-.9,.19);

	    glColor3ub(63, 163, 20);
		circle(.7,-.93,.13);
}
void downFlower(){
    //red
     glColor3ub(235, 29, 2);
		circle(-.78,-.9f,.02);
	    circle(-.72,-.9f,.02);
		circle(-.75,-.87f,.02);
		circle(-.75f,-.93,.02);
	 //   center
	    glColor3ub(255, 242, 10);
		circle(-.75f,-.9,.015);


//yellow
    glScalef(0.9,.9,0);
    glTranslated(0,0,0);

	    glColor3ub(250, 197, 40);
		circle(-.78,-.9,.02);
	   circle(-.72,-.9,.02);
	    circle(-.75,-.87,.02);
        circle(-.75,-.93,.02);
//   center40
	    glColor3ub(252, 23, 23);
	    circle(-.75,-.9,.015); glLoadIdentity();


 glTranslated(.25,-.03,0);
         glColor3ub(235, 29, 2);
		circle(-.78,-.9,.02);
	   circle(-.72,-.9,.02);
	    circle(-.75,-.87,.02);
        circle(-.75,-.93,.02);
//   center40
	   glColor3ub(255, 242, 10);
	    circle(-.75,-.9,.015); glLoadIdentity();

  glTranslated(.42,-.0,0);

	     glColor3ub(250, 197, 40);
		circle(-.78,-.9,.02); circle(-.72,-.9,.02);
		circle(-.75,-.87,.02);circle(-.75,-.93,.02);
	 //   center
	  glColor3ub(252, 23, 23);
	     circle(-.75,-.9,.015);glLoadIdentity();

glTranslated(.56,-.04,0);
      glColor3ub(255, 186, 245);
		circle(-.78,-.9,.02);
	   circle(-.72,-.9,.02);
	    circle(-.75,-.87,.02);
        circle(-.75,-.93,.02);
	 //   center
	    glColor3ub(245, 24, 65);
	    circle(-.75,-.9,.015);glLoadIdentity();

glTranslated(.7,-.01,0);
        glColor3ub(235, 29, 2);
           circle(-.78,-.9,.02);
	   circle(-.72,-.9,.02);
	    circle(-.75,-.87,.02);
        circle(-.75,-.93,.02);
	 //   center
	    glColor3ub(255, 242, 10);
		circle(-.75,-.9,.015);glLoadIdentity();


 glTranslated(.87,.07,0);
	    glColor3ub(255, 186, 245);
		circle(-.78,-.9,.02);
	   circle(-.72,-.9,.02);
	    circle(-.75,-.87,.02);
        circle(-.75,-.93,.02);
         glColor3ub(245, 24, 65);
		circle(-.75,-.9,.015);glLoadIdentity();

 glTranslated(.97,-.02,0);
	 glColor3ub(255, 186, 245);
		circle(-.78,-.9,.02);
	   circle(-.72,-.9,.02);
	    circle(-.75,-.87,.02);
        circle(-.75,-.93,.02);
         glColor3ub(245, 24, 65);
		circle(-.75,-.9,.015);glLoadIdentity();


glTranslated(1.12,-.03,0);
	 glColor3ub(235, 29, 2);
		circle(-.78,-.9,.02);
	   circle(-.72,-.9,.02);
	    circle(-.75,-.87,.02);
        circle(-.75,-.93,.02);
	    glColor3ub(255, 242, 10);
		circle(-.75,-.9,.015);glLoadIdentity();


 glTranslated(1.26,-.04,0);
	 glColor3ub(235, 29, 2);
		circle(-.78,-.9,.02);
	   circle(-.72,-.9,.02);
	    circle(-.75,-.87,.02);
        circle(-.75,-.93,.02);
	 //   center
	    glColor3ub(255, 242, 10);
		circle(-.75,-.9,.015);glLoadIdentity();


 glTranslated(1.5,.04,0);
	 glColor3ub(255, 186, 245);
		circle(-.78,-.9,.02);
	   circle(-.72,-.9,.02);
	    circle(-.75,-.87,.02);
        circle(-.75,-.93,.02);
         glColor3ub(245, 24, 65);
		circle(-.75,-.9,.015);glLoadIdentity();

glTranslated(1.36,-.0,0);

	     glColor3ub(250, 197, 40);
		circle(-.78,-.9,.02);
	   circle(-.72,-.9,.02);
	    circle(-.75,-.87,.02);
        circle(-.75,-.93,.02);
	 //   center
           glColor3ub(252, 23, 23);
		circle(-.75,-.9,.015);glLoadIdentity();
}
void downFlower3(){
    glColor3ub(235, 29, 2);
		circle(-.78,-.9f,.02);
	    circle(-.72,-.9f,.02);
		circle(-.75,-.87f,.02);
		circle(-.75f,-.93,.02);
		//   center
	    glColor3ub(255, 242, 10);
		circle(-.75f,-.9,.015);

		glTranslated(.42,-.0,0);

	     glColor3ub(250, 197, 40);
		circle(-.78,-.9,.02); circle(-.72,-.9,.02);
		circle(-.75,-.87,.02);circle(-.75,-.93,.02);
	 //   center
	  glColor3ub(252, 23, 23);
	     circle(-.75,-.9,.015);glLoadIdentity();

	     glTranslated(1.0,-.03,0);
	 glColor3ub(235, 29, 2);
		circle(-.78,-.9,.02);
	   circle(-.72,-.9,.02);
	    circle(-.75,-.87,.02);
        circle(-.75,-.93,.02);
	    glColor3ub(255, 242, 10);
		circle(-.75,-.9,.015);glLoadIdentity();
		glTranslated(1.5,.04,0);
	 glColor3ub(255, 186, 245);
		circle(-.78,-.9,.02);
	   circle(-.72,-.9,.02);
	    circle(-.75,-.87,.02);
        circle(-.75,-.93,.02);
         glColor3ub(245, 24, 65);
		circle(-.75,-.9,.015);glLoadIdentity();
}

void sky(){
    glBegin(GL_QUADS);
    glColor3ub(132, 209, 250);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();
}


void longGrass(){
    /////////// long grass
    glScalef(0.24,.2,0);
    glTranslated(0.8,.49,0);
  glColor3ub(68, 173, 47);
         triangle(-.5,-1.0,-.45,-1.0,-.35,-.65);
          triangle(-.5,-1.0,-.45,-1.0,-.6,-.65);
         triangle(-.2,-1.0,-.15,-1.0,-.35,-.65);
         triangle(-.2,-1.0,-.15,-1.0,-.0,-.65);
         triangle(-.45,-1.0,-.4,-1.0,-.2,-.65);
         triangle(.15,-1.0,.2,-1.0,.35,-.65);
         triangle(.15,-1.0,.2,-1.0,.05,-.65);
         triangle(.45,-1.0,.5,-1.0,.35,-.65);
         triangle(.55,-1.0,.6,-1.0,.55,-.65);
         triangle(.6,-1.0,.65,-1.0,.8,-.65);
         triangle(.85,-1.0,.9,-1.0,1.0,-.65);
    glLoadIdentity();
    glScalef(0.25,.2,0);
    glTranslated(0.0,.49,0);
  glColor3ub(68, 173, 47);
         triangle(-.5,-1.0,-.45,-1.0,-.35,-.65);
          triangle(-.5,-1.0,-.45,-1.0,-.6,-.65);
         triangle(-.2,-1.0,-.15,-1.0,-.35,-.65);
         triangle(-.2,-1.0,-.15,-1.0,-.0,-.65);
         triangle(-.45,-1.0,-.4,-1.0,-.2,-.65);
         triangle(.15,-1.0,.2,-1.0,.35,-.65);
         triangle(.15,-1.0,.2,-1.0,.05,-.65);
         triangle(.45,-1.0,.5,-1.0,.35,-.65);
         triangle(.55,-1.0,.6,-1.0,.55,-.65);
         triangle(.6,-1.0,.65,-1.0,.8,-.65);
         triangle(.85,-1.0,.9,-1.0,1.0,-.65);
    glLoadIdentity();

     glScalef(0.25,.2,0);
    glTranslated(-2.5,.49,0);
  glColor3ub(68, 173, 47);
         triangle(-.5,-1.0,-.45,-1.0,-.35,-.65);
          triangle(-.5,-1.0,-.45,-1.0,-.6,-.65);
         triangle(-.2,-1.0,-.15,-1.0,-.35,-.65);
         triangle(-.2,-1.0,-.15,-1.0,-.0,-.65);
         triangle(-.45,-1.0,-.4,-1.0,-.2,-.65);
         triangle(.15,-1.0,.2,-1.0,.35,-.65);
         triangle(.15,-1.0,.2,-1.0,.05,-.65);
         triangle(.45,-1.0,.5,-1.0,.35,-.65);
         triangle(.55,-1.0,.6,-1.0,.55,-.65);
         triangle(.6,-1.0,.65,-1.0,.8,-.65);
         triangle(.85,-1.0,.9,-1.0,1.0,-.65);
    glLoadIdentity();
}



void cloud(){

//CLOUD RIGHT
    circle(.625,.58,.05);
    circle(.7,.6,.08);
    circle(.79,.582,.06);
    circle(.85,.58,.04);

//CLOUD LEFT

    circle(-.425,.585,.04);
    circle(-.5,.6,.07);
    circle(-.59,.592,.05);
    circle(-.64,.58,.03);

    // Cloud Middle
          circle(-.08,.7,.04);
          circle(-.00,.71,.07);
          circle(0.09,.71,.05);
}

    void field(){
    triangle(-.5,-.2,1,-.4,1,-.1);
    triangle(-1,-.4,-1,-.7,0,-.5);
 }




        GLfloat sunP = 0.0f;
        GLfloat sunS = 0.005f;
        void sunUp(int value) {
               if(sunP >1.5)
                sunS = 0.0f;
               sunP += sunS;
	            glutPostRedisplay();
	           glutTimerFunc(100, sunUp, 0);
}

        GLfloat sunP2 = 0.0f;
        GLfloat sunS2 = 0.005f;
        void sunUp2(int value) {
               if(sunP2 >1.5)
                sunS2 = 0.0f;
               sunP2 += sunS2;
	            glutPostRedisplay();
	           glutTimerFunc(100, sunUp2, 0);
}

/*-----------------------------------------------------------------------------------------*/

void Home()
{
    glBegin(GL_POLYGON);
    glColor3ub(244,164,96);
    glVertex2f(-0.3f,0.0f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.02f,0.3f);
    glVertex2f(-0.38f,0.3f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(244,164,96);
    glVertex2f(-0.29f,0.0f);
    glVertex2f(0.07f,0.0f);
    glVertex2f(0.07f,-0.4f);
    glVertex2f(-0.29f,-0.4f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(244,164,96);
    glVertex2f(-0.38f,0.3f);
    glVertex2f(-0.43f,0.0f);
    glVertex2f(-0.41f,0.0f);
    glVertex2f(-0.41f,-0.35f);
    glVertex2f(-0.29f,-0.4f);
    glVertex2f(0.07f,-0.4f);

    glEnd();

     glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-0.3f,0.0f);
    glVertex2f(0.1f,0.0f);

    glColor3ub(0,0,0);
    glVertex2f(-0.29f,0.0f);
    glVertex2f(-0.29f,-0.4f);

    glColor3ub(0,0,0);
     glVertex2f(0.07f,-0.4f);
    glVertex2f(-0.29f,-0.4f);

     glColor3ub(0,0,0);
     glVertex2f(0.07f,-0.4f);
    glVertex2f(0.07f,-0.0f);

    glColor3ub(0,0,0);
    glVertex2f(-0.3f,0.0f);
    glVertex2f(-0.38f,0.3f);

    glColor3ub(0,0,0);
    glVertex2f(-0.38f,0.3f);
    glVertex2f(-0.43f,0.0f);

    glColor3ub(0,0,0);
    glVertex2f(-0.37f,0.245f);
    glVertex2f(-0.41f,0.0f);

    glColor3ub(0,0,0);
    glVertex2f(-0.41f,0.0f);
    glVertex2f(-0.41f,-0.35f);

    glColor3ub(0,0,0);
    glVertex2f(-0.41f,-0.35f);
    glVertex2f(-0.29f,-0.4f);

    glColor3ub(0,0,0);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.02f,0.3f);

    glColor3ub(0,0,0);
    glVertex2f(0.02f,0.3f);
    glVertex2f(-0.38f,0.3f);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(23,14,9);
    glVertex2f(-0.15f,-0.1f);
    glVertex2f(-0.02f,-0.1f);
    glVertex2f(-0.02f,-0.4f);
    glVertex2f(-0.15f,-0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(23,14,9);
    glVertex2f(-0.24f,-0.05f);
    glVertex2f(-0.18f,-0.05f);
    glVertex2f(-0.18f,-0.15f);
    glVertex2f(-0.24f,-0.15f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(23,14,9);
     glVertex2f(-0.31f,0.0f);
    glVertex2f(-0.38f,0.02f);
    glVertex2f(-0.38f,-0.37f);
    glVertex2f(-0.31f,-0.4f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(23,14,9);
    glVertex2f(0.06f,-0.05f);
    glVertex2f(-0.0f,-0.05f);
    glVertex2f(-0.0f,-0.15f);
    glVertex2f(0.06f,-0.15f);
    glEnd();
}

void sun()
{
     int triangleAmount = 20;
    GLfloat k=-.7f; GLfloat l=.8f;
    GLfloat radius =.10f;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(254, 238, 194);
		glVertex2f(k, l); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            k + (radius * cos(i *  twicePi / triangleAmount)),
			    l+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
void ssun()
{
     int triangleAmount = 20;
    GLfloat k=-.7f; GLfloat l=.8f;
    GLfloat radius =.10f;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 128, 0);
		glVertex2f(k, l); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            k + (radius * cos(i *  twicePi / triangleAmount)),
			    l+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_LINES);
	glLineWidth(10.5f);
	glColor3ub(61, 61, 43);
	glVertex2f(-.82f, 0.8f);
	glVertex2f(-.85,0.8f);

	glVertex2f(-.55f, 0.8f);
	glVertex2f(-.58,0.8f);

	glVertex2f(-.70f, 0.91f);
	glVertex2f(-.70,0.95f);

	glVertex2f(-.70f, 0.6f);
	glVertex2f(-.70,0.65f);

	glVertex2f(-.76f, 0.89f);
	glVertex2f(-.79,0.94f);

	glVertex2f(-.58f, 0.66f);
	glVertex2f(-.62,0.70f);

	glVertex2f(-.60f, 0.95f);
	glVertex2f(-.64,0.9f);

	glVertex2f(-.82f, 0.66f);
	glVertex2f(-.78,0.70f);

	glEnd();

}
void Moving_Stone()
{
    int triangleAmount = 20;
    GLfloat radius =.02f;

	GLfloat twicePi = 2.0f * PI;

    GLfloat m=.6f; GLfloat n=0.0f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(m, n); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m + (radius * cos(i *  twicePi / triangleAmount)),
			    n+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void snow()
{
 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0,0,0.01);
 glPopMatrix();

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.27,0.8,0.01);
 glPopMatrix();

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.38,0.3,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.50,-0.7,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.90,-0.1,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.20,-0.8,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.65,0.91,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.60,0.55,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.50,-0.87,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.30,-0.4,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.65,-0.91,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.90,0.1,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.46,0.86,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.95,-0.46,0.01);

  glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.34,-0.2,0.01);

  glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.86,0.5,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.74,-0.8,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.2,0.9,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.46,-0.22,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.32,1.0,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.80,0.3,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.96,-0.5,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.84,-0.9,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.77,-0.6,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.84,1.0,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.73,-0.6,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(-0.10,0.7,0.01);

 glPushMatrix();
 glTranslatef(0,0,0); glColor3ub(255,255,255);
 circle(0.43,-0.8,0.01);

 glPopMatrix();
}

void Bird()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0 );

    glVertex2f(-0.5,0.15);
    glVertex2f(-0.3,0.25);
    glVertex2f(-0.1,0.15);
    glVertex2f(-0.3,0.09);

    glEnd();

    //WING ONE

     glBegin(GL_POLYGON);
    glVertex2f(-0.4,0.2);
    glVertex2f(-0.4,0.25);
    glVertex2f(-0.25,0.35);
    glVertex2f(-0.3,0.28);
    glVertex2f(-0.35,0.2);
    glEnd();

    //WING TWO

   glBegin(GL_POLYGON);
    glVertex2f(-0.4,0.20);
    glVertex2f(-0.2,0.31);
    glVertex2f(-0.1,0.22);

    glEnd();

    //LIP

    glBegin(GL_LINES);
    glColor3ub(0,0,0 );
    glVertex2f(-0.55,0.1);
    glVertex2f(-0.49,0.15);
    glVertex2f(-0.55,0.1);
    glVertex2f(-0.48,0.14);
    glVertex2f(-0.48,0.14);
    glVertex2f(-0.5,0.1);
    glVertex2f(-0.5,0.1);
    glVertex2f(-0.45,0.15);
    glEnd();

    //TAIL

    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(-0.15,0.15);
    glVertex2f(-0.08,0.15);
    glEnd();

    //EYE

    glPointSize(25.0);
    glTranslatef(-0.45f,0.18f,0);
    glBegin(GL_POINTS);
    glColor3ub(0,0,0 );
    glVertex2f(-0.0f, -0.0f);
    glEnd();

    int triangleAmount = 20;
    GLfloat k=-.009f; GLfloat l=.0f;
    GLfloat radius =.01f;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(k, l); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            k + (radius * cos(i *  twicePi / triangleAmount)),
			    l+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	if(febbleflag)
    {
          radius =.02f;

	      twicePi = 2.0f * PI;

    GLfloat m=-.075f; GLfloat n=-0.075f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(m, n); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m + (radius * cos(i *  twicePi / triangleAmount)),
			    n+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    }

}

void flower(float a, float b, float r){

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a; GLfloat y=b; GLfloat radius =r;
       glBegin(GL_TRIANGLE_FAN);
       glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}   glEnd();}


void fullsky()
{
     glLoadIdentity();
    glBegin(GL_POLYGON);
	glColor3ub(155, 216, 232);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.1f);
	glVertex2f(-1.0f, 0.1f);

	glEnd();
}

void road()
{
    glBegin(GL_POLYGON);
    glColor3ub(54,15,0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();
}


void pitcher()
{
    int triangleAmount = 20;
    GLfloat k=.4f; GLfloat l=-.7f;
    GLfloat radius =.13f;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(k, l); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            k + (radius * cos(i *  twicePi / triangleAmount)),
			    l+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(107, 101, 93);
	glVertex2f(0.47f, -0.65f);
	glVertex2f(0.32f, -0.65f);
	glVertex2f(0.32f,-0.55f);
	glVertex2f(0.47f, -0.55f);

    glEnd();



    glBegin(GL_POLYGON);
	glColor3ub(191, 180, 164);
	glVertex2f(0.47f, -0.55f);
	glVertex2f(0.32f, -0.55f);
	glVertex2f(0.30f,-0.52f);
	glVertex2f(0.50f, -0.52f);

    glEnd();

}

void tree()
{
        glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
glColor3ub(46, 71, 38);
glTranslatef(-0.775, 0.25, 0);
glutSolidSphere(0.3, 250, 250);
glPopMatrix();

glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
glColor3ub(104, 140, 93);
glTranslatef(-0.775, 0.30, 0);
glutSolidSphere(0.13, 250, 250);
glPopMatrix();


glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
glColor3ub(47, 138, 60);
glTranslatef(-0.925, 0.25, 0);
glutSolidSphere(0.09, 250, 250);
glPopMatrix();

glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
glColor3ub(47, 138, 60);
glTranslatef(-0.625, 0.25, 0);
glutSolidSphere(0.09, 250, 250);
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3ub(148, 72, 1);
glVertex2f(-0.85f, 0.1f);
glVertex2f(-0.85f, -0.7f);
glVertex2f(-0.7f, -0.7f);
glColor3ub(168, 93, 22);
glVertex2f(-0.7f, 0.1f);

glVertex2f(-0.85f, 0.1f);
glVertex2f(-0.8f, 0.1f);
glVertex2f(-0.9f, 0.25f);
glVertex2f(-0.95f, 0.25f);

glVertex2f(-0.7f, 0.1f);
glVertex2f(-0.75f, 0.1f);
glVertex2f(-0.65f, 0.25f);
glVertex2f(-0.60f, 0.25f);

glVertex2f(-0.75f, 0.1f);
glVertex2f(-0.8f, 0.1f);
glVertex2f(-0.8f, 0.25f);
glVertex2f(-0.75f, 0.25f);


glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_TRIANGLES);
glColor3ub(148, 72, 1);
glVertex2f(-0.85f, -0.7f);
glVertex2f(-0.9f, -0.8f);
glVertex2f(-0.8f, -0.7f);

glVertex2f(-0.7f, -0.7f);
glVertex2f(-0.65f, -0.8f);
glVertex2f(-0.75f, -0.7f);



glEnd();
glPopMatrix();

}

void waterdrop()
{
	 glBegin(GL_POLYGON);
	glColor3ub(135,206,250);
	glVertex2f(0.16f, -0.72f);
	glVertex2f(0.11f, -0.70f);
	glVertex2f(.08f, -0.67f);
	glVertex2f(0.11f, -0.64f);
    glVertex2f(0.13f, -0.64f);
    glVertex2f(0.15f, -0.67f);
    glVertex2f(0.16f, -0.70f);
    glVertex2f(0.17f, -0.72f);
	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(135,206,250);
	glVertex2f(0.20f, -0.62f);
	glVertex2f(0.11f, -0.60f);
	glVertex2f(.08f, -0.57f);
	glVertex2f(0.11f, -0.54f);
    glVertex2f(0.16f, -0.54f);
    glVertex2f(0.18f, -0.57f);
    glVertex2f(0.18f, -0.60f);
	glEnd();

	 glLoadIdentity();

    glBegin(GL_POLYGON);
	glColor3ub(135,206,250);
	glVertex2f(0.47f, -0.58f);
	glVertex2f(0.32f, -0.58f);
	glVertex2f(0.32f,-0.55f);
	glVertex2f(0.47f, -0.55f);

    glEnd();

}

void stone()
{
    int triangleAmount = 20;
    GLfloat k=-.7f; GLfloat l=-.7f;
    GLfloat radius =.02f;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(k, l); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            k + (radius * cos(i *  twicePi / triangleAmount)),
			    l+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m=-.67f; GLfloat n=-.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(m, n); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m + (radius * cos(i *  twicePi / triangleAmount)),
			    n+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.67f; GLfloat d=-.67f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(c, d); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.63f; GLfloat f=-.7f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(e, f); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x=-.66f; GLfloat y=-.70f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(107, 101, 93);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}



void grass()
{
    glBegin(GL_POLYGON);
	glColor3ub(124, 252, 0);
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(1.0f, .1f);
	glVertex2f(1.0f, -0.7f);
	glVertex2f(-1.0f, -0.7f);

	glEnd();
}

void background()
{
    glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(-0.95f, .15f);
	glVertex2f(-.93f, 0.15f);
	glVertex2f(-0.9f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.93f, 0.1f);
	glVertex2f(-0.83f, .25f);
	glVertex2f(-.79f, 0.255f);
	glVertex2f(-0.74f, 0.20f);
	glVertex2f(-0.70f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.73f, 0.1f);
	glVertex2f(-0.73f, 0.15f);
	glVertex2f(-0.7f, .20f);
	glVertex2f(-.65f, 0.18f);
	glVertex2f(-0.60f, 0.15f);
	glVertex2f(-0.55f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-.57f, 0.1f);
	glVertex2f(-0.52f, .15f);
	glVertex2f(-.50f, 0.15f);
	glVertex2f(-0.47f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-.50f, 0.1f);
	glVertex2f(-0.45f, .15f);
	glVertex2f(-.43f, 0.15f);
	glVertex2f(-0.40f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.43f, 0.1f);
	glVertex2f(-0.33f, .25f);
	glVertex2f(-.29f, 0.255f);
	glVertex2f(-0.24f, 0.20f);
	glVertex2f(-0.20f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.23f, 0.1f);
	glVertex2f(-0.23f, 0.15f);
	glVertex2f(-0.20f, .20f);
	glVertex2f(-.15f, 0.18f);
	glVertex2f(-0.10f, 0.15f);
	glVertex2f(-0.05f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.08f, 0.1f);
	glVertex2f(.08f, .25f);
	glVertex2f(.12f, 0.255f);
	glVertex2f(0.17f, 0.20f);
	glVertex2f(0.22f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(.21f, 0.1f);
	glVertex2f(0.28f, .15f);
	glVertex2f(.30f, 0.15f);
	glVertex2f(0.33f, 0.1f);

	glEnd();
}

void backgroundw()
{
    glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-1.0f, 0.1f);
	glVertex2f(-0.95f, .15f);
	glVertex2f(-.93f, 0.15f);
	glVertex2f(-0.9f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON); //snow at mountain1
	glColor3ub(255, 255, 255);
	glVertex2f(-0.98f, 0.12f);
	glVertex2f(-0.95f, .15f);
	glVertex2f(-0.93f, 0.15f);
	glVertex2f(-0.91f, 0.12f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.93f, 0.1f);
	glVertex2f(-0.83f, .25f);
	glVertex2f(-.79f, 0.255f);
	glVertex2f(-0.74f, 0.20f);
	glVertex2f(-0.70f, 0.1f);

	glEnd();

    glBegin(GL_POLYGON); //snow at mountain2
	glColor3ub(255, 255, 255);
	glVertex2f(-0.895f, 0.16f);
	glVertex2f(-0.83f, .25f);
	glVertex2f(-.79f, 0.255f);
	glVertex2f(-0.74f, 0.20f);
	glVertex2f(-0.70f, 0.16f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.73f, 0.1f);
	glVertex2f(-0.73f, 0.15f);
	glVertex2f(-0.7f, .20f);
	glVertex2f(-.65f, 0.18f);
	glVertex2f(-0.60f, 0.15f);
	glVertex2f(-0.55f, 0.1f);

	glEnd();

    glBegin(GL_POLYGON); //snow at mountain3
	glColor3ub(255, 255, 255);
	glVertex2f(-0.71f, 0.12f);
	glVertex2f(-0.73f, 0.15f);
	glVertex2f(-0.7f, .20f);
	glVertex2f(-.65f, 0.18f);
	glVertex2f(-0.60f, 0.15f);
	glVertex2f(-0.57f, 0.12f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-.57f, 0.1f);
	glVertex2f(-0.52f, .15f);
	glVertex2f(-.50f, 0.15f);
	glVertex2f(-0.47f, 0.1f);

	glEnd();

    glBegin(GL_POLYGON); //snow at mountain4
	glColor3ub(255, 255, 255);
	glVertex2f(-.55f, 0.12f);
	glVertex2f(-0.52f, .15f);
	glVertex2f(-.50f, 0.15f);
	glVertex2f(-0.47f, 0.12);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-.50f, 0.1f);
	glVertex2f(-0.45f, .15f);
	glVertex2f(-.43f, 0.15f);
	glVertex2f(-0.40f, 0.1f);

	glEnd();

    glBegin(GL_POLYGON); //snow at mountain5
	glColor3ub(255, 255, 255);
	glVertex2f(-.49f, 0.12f);
	glVertex2f(-0.45f, .15f);
	glVertex2f(-.43f, 0.15f);
	glVertex2f(-0.41f, 0.12f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.43f, 0.1f);
	glVertex2f(-0.33f, .25f);
	glVertex2f(-.29f, 0.255f);
	glVertex2f(-0.24f, 0.20f);
	glVertex2f(-0.20f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON); //snow at mountain6
	glColor3ub(255, 255, 255);
	glVertex2f(-0.385f, 0.17f);
	glVertex2f(-0.33f, .25f);
	glVertex2f(-.29f, 0.255f);
	glVertex2f(-0.24f, 0.20f);
	glVertex2f(-0.22f, 0.17f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.23f, 0.1f);
	glVertex2f(-0.23f, 0.15f);
	glVertex2f(-0.20f, .20f);
	glVertex2f(-.15f, 0.18f);
	glVertex2f(-0.10f, 0.15f);
	glVertex2f(-0.05f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON); //snow at mountain7
	glColor3ub(255, 255, 255);
	glVertex2f(-0.22f, 0.3f);
	glVertex2f(-0.23f, 0.15f);
	glVertex2f(-0.20f, .20f);
	glVertex2f(-.15f, 0.18f);
	glVertex2f(-0.10f, 0.15f);
	glVertex2f(-0.08f, 0.13f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(-0.08f, 0.1f);
	glVertex2f(.08f, .25f);
	glVertex2f(.12f, 0.255f);
	glVertex2f(0.17f, 0.20f);
	glVertex2f(0.22f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON); //snow at mountain8
	glColor3ub(255, 255, 255);
	glVertex2f(-0.03f, 0.15f);
	glVertex2f(0.08f, 0.25f);
	glVertex2f(0.12f, 0.255f);
	glVertex2f(0.17f, 0.20f);
	glVertex2f(0.2f, 0.15f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(1, 132, 42);
	glVertex2f(.21f, 0.1f);
	glVertex2f(0.28f, .15f);
	glVertex2f(.30f, 0.15f);
	glVertex2f(0.33f, 0.1f);

	glEnd();

    glBegin(GL_POLYGON); //snow at mountain9
	glColor3ub(255, 255, 255);
	glVertex2f(0.23f, 0.12f);
	glVertex2f(0.28f, .15f);
	glVertex2f(.30f, 0.15f);
	glVertex2f(0.32f, 0.12f);

	glEnd();
}

void sky1()
{
    // glLoadIdentity();
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void sky2()
{
   // glLoadIdentity();
    int i;

	GLfloat x=-.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void Normal_Tree()
{
    glBegin(GL_POLYGON);
	glColor3ub( 83,53,10);
	glVertex2f(-0.62f, -0.24f);
	glVertex2f(-0.58f, -0.24f);
	glVertex2f(-0.58f,-0.8f);
	glVertex2f(-0.62f, -0.8f);
    glEnd();

    int triangleAmount = 20;
    GLfloat k=-.67f; GLfloat l=-.11f;
    GLfloat radius =.15f;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(k, l); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            k + (radius * cos(i *  twicePi / triangleAmount)),
			    l+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 GLfloat m=-0.7f; GLfloat n=0.1f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(m, n); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m+ (radius * cos(i *  twicePi / triangleAmount)),
			    n+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 GLfloat o=-.59f; GLfloat p=.23f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(o, p); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            o+ (radius * cos(i *  twicePi / triangleAmount)),
			    p+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
     radius = .18f;
	 GLfloat q=-.5f; GLfloat r=0.05f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(q, r); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            q+ (radius * cos(i *  twicePi / triangleAmount)),
			    r+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

      radius = 0.15f;
	 GLfloat qq=-.53f; GLfloat rr=-0.12f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(34,139,34);
		glVertex2f(qq, rr); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            qq+ (radius * cos(i *  twicePi / triangleAmount)),
			    rr+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}


void Normal_Treew()
{
    glBegin(GL_POLYGON);
	glColor3ub( 83,53,10);
	glVertex2f(-0.62f, -0.24f);
	glVertex2f(-0.58f, -0.24f);
	glVertex2f(-0.58f,-0.8f);
	glVertex2f(-0.62f, -0.8f);
    glEnd();

    int triangleAmount = 20;
    GLfloat k=-.67f; GLfloat l=-.11f;
    GLfloat radius =.15f;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(216,181,41);
		glVertex2f(k, l); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            k + (radius * cos(i *  twicePi / triangleAmount)),
			    l+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 GLfloat m=-0.7f; GLfloat n=0.1f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(216,181,41);
		glVertex2f(m, n); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m+ (radius * cos(i *  twicePi / triangleAmount)),
			    n+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	 GLfloat o=-.59f; GLfloat p=.23f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(216,181,41);
		glVertex2f(o, p); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            o+ (radius * cos(i *  twicePi / triangleAmount)),
			    p+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
     radius = .18f;
	 GLfloat q=-.5f; GLfloat r=0.05f;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(216,181,41);
		glVertex2f(q, r); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            q+ (radius * cos(i *  twicePi / triangleAmount)),
			    r+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

      radius = 0.15f;
	 GLfloat qq=-.53f; GLfloat rr=-0.12f;
	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(216,181,41);
		glVertex2f(qq, rr); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            qq+ (radius * cos(i *  twicePi / triangleAmount)),
			    rr+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}



void reshape(int w, int h)
{
    float aspectRatio = (float)w/(float)h;
        glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
        gluPerspective(145, aspectRatio, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);

}

void Display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0,0,-20);
    StartingText();
    glFlush();
    glutSwapBuffers();
}

void init(void)
{
    glClearColor( 1.0f, 1.0f, 1.0f, 1.0f);
    glClearDepth( 1.0 );
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_COLOR_MATERIAL);
    glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_LIGHT0);

}

void Display8()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    road();
    fullsky();
    grass();
    background();
    pitcher();
    sky1();
    sky2();
    //Normal_Tree();
    glTranslatef(0.1f,0.0f,0.0f);
    waterdrop();
    glLoadIdentity();
/////////filed
          glColor3ub(161, 219, 70);
          field();
          glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    ssun();
    glLoadIdentity();
    stone();


    glPushMatrix();
    if(!flyaway)
        {
            glTranslatef(-0.2f,ydown, 0.0f);

            glRotatef(180,0,1,0);
            Bird();
    }
    else
    {
        glTranslatef(xpos-0.2,yuppos-0.4, 0.0f);
        glRotatef(180,0,1,0);
        Bird();

        if(drankwater == 0)
        {
            drankwater = 1;
        }
        if(xpos>1.4 && happilygone == 0)
        {
            happilygone = 1;
        }

    }
    glPopMatrix();
    glFlush();
    if(ydown<-0.6 && deightf == 0)
    {
        deightf = 1;
        flyaway = 1;
        stonereturnflag = 1;
    }
}

void Display8s()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    road();
    fullsky();
    grass();
    background();
    pitcher();
    //sky1();
    //sky2();
    //Normal_Tree();
    glTranslatef(0.1f,0.0f,0.0f);
    waterdrop();
    /////////Cloud
    glColor3ub(242, 245, 243);
    cloud();
    glLoadIdentity();
        glLoadIdentity();
/////////filed
          glColor3ub(161, 219, 70);
          field();
          glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();
    glLoadIdentity();
    stone();
    /*-----------------------------[Bottom Flowers]---------------------------------*/
	    glLoadIdentity();
    ////////////////down garss
               downGrass();
    ///////////////flower down
	           downFlower();
    /*----------------------------------------------------------------------------*/


    glPushMatrix();
    if(!flyaway)
        {
            glTranslatef(-0.2f,ydown, 0.0f);

            glRotatef(180,0,1,0);
            Bird();
    }
    else
    {
        glTranslatef(xpos-0.2,yuppos-0.4, 0.0f);
        glRotatef(180,0,1,0);
        Bird();

        if(drankwater == 0)
        {
            drankwater = 1;
        }
        if(xpos>1.4 && happilygone == 0)
        {
            happilygone = 1;
        }

    }
    glPopMatrix();
    glFlush();
    if(ydown<-0.6 && deightf == 0)
    {
        deightf = 1;
        flyaway = 1;
        stonereturnflag = 1;
    }
}

void Display7()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();
    sky1();
    sky2();
    //Normal_Tree();
    /////////filed
          glColor3ub(161, 219, 70);
          field();
          glLoadIdentity();
    glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    /////////Cloud
    glColor3ub(242, 245, 243);
    cloud();
    glLoadIdentity();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    ssun();
    glLoadIdentity();
    stone();
        glLoadIdentity();

    glPushMatrix();
    glTranslatef(xpos,yuppos, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();
    if(!febbleflag)
    {
        glPushMatrix();
        glTranslatef(-0.2,ydown, 0.0f);
        Moving_Stone();
        glPopMatrix();
        if(ydown<-0.7)
        {
            ydown = 0.8;
            glutDisplayFunc(Display8);

        }
    }

    glFlush();
    if((xpos>=-0.2 && yuppos>=-0.25) && dsevenf == 0)
    {
        waterflag = 1;
        stonereturnflag = 0;
        dsevenf=1;
        febbleflag = 0;
        ydown = 0.2;
    }
}


void Display7s()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();



    //sky1();
    //sky2();
    //Normal_Tree();
    glLoadIdentity();
    /////////Cloud
    glColor3ub(242, 245, 243);
    cloud();
    /////////filed
          glColor3ub(161, 219, 70);
          field();
          glLoadIdentity();
    glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
       glLoadIdentity();

    glPopMatrix();

    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();
    glLoadIdentity();
    glTranslatef(0.0,0.01,0.0);
    stone();

    /*-----------------------------[Bottom Flowers]---------------------------------*/
	    glLoadIdentity();
    ////////////////down garss
               downGrass();
    ///////////////flower down
	           downFlower();
    /*----------------------------------------------------------------------------*/

    glPushMatrix();
    glTranslatef(xpos,yuppos, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();
    if(!febbleflag)
    {
        glPushMatrix();
        glTranslatef(-0.2,ydown, 0.0f);
        Moving_Stone();
        glPopMatrix();
        if(ydown<-0.7)
        {
            ydown = 0.8;
            glutDisplayFunc(Display8s);

        }
    }

    glFlush();
    if((xpos>=-0.2 && yuppos>=-0.25) && dsevenf == 0)
    {
        waterflag = 1;
        stonereturnflag = 0;
        dsevenf=1;
        febbleflag = 0;
        ydown = 0.2;
    }
}


void Display6()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();
    sky1();
    sky2();
    /////////filed
          glColor3ub(161, 219, 70);
          field();
          glLoadIdentity();
    //Normal_Tree();

glPopMatrix();
    glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    ssun();
    glLoadIdentity();
    stone();
    glPushMatrix();
    glTranslatef(xpos,ypos, 0.0f);
     if(xpos>=-0.2f && ypos<=-0.55f && dsixf==0)
    {
         dsixf=1;
         waterflag=1;
    }


    glRotatef(180,0,1,0);
    glColor3f(0.0, 0.0, 1);
     char text[120];
    sprintf(text, "\t Oh there is some stone",5.00,8.00);
    glColor3ub(1, 1, 1);
    glRasterPos2f( -0.3f , 0.3f );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -20 , 22 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    if(waterflag==1)
    {
        glRotatef(180,0,1,0);
        Bird();
        ideaflag = 1;
    }
    else
        Bird();
    glPopMatrix();
    glFlush();

}

void Display6s()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();
    //sky1();
    //sky2();
    /////////Cloud
    glColor3ub(242, 245, 243);
    cloud();

/////////filed
          glColor3ub(161, 219, 70);
          field();
          glLoadIdentity();
    //Normal_Tree();

glPopMatrix();
    glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();
    glLoadIdentity();
    stone();
    /*-----------------------------[Bottom Flowers]---------------------------------*/
	    glLoadIdentity();
    ////////////////down garss
               downGrass();
    ///////////////flower down
	           downFlower();
    /*----------------------------------------------------------------------------*/
    glPushMatrix();
    glTranslatef(xpos,ypos, 0.0f);
     if(xpos>=-0.2f && ypos<=-0.55f && dsixf==0)
    {
         dsixf=1;
         waterflag=1;
    }


    glRotatef(180,0,1,0);
    if(waterflag==1)
    {
        glRotatef(180,0,1,0);
        Bird();
        ideaflag = 1;
    }
    else
        Bird();
    glPopMatrix();
    glFlush();

}

void Display5()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();
    sky1();
    sky2();
    //Normal_Tree();
    /////////filed
          glColor3ub(161, 219, 70);
          field();
    glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    ssun();
    glLoadIdentity();
    stone();

    glPushMatrix();
    glTranslatef(-1.0,0.45f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();

    glFlush();

    if(dfivef==0)
    {

         dfivef=1;
    }
}

void Display5s()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();
    //sky1();
    //sky2();
    /////////Cloud
    glColor3ub(242, 245, 243);
    cloud();
    /////////filed
          glColor3ub(161, 219, 70);
          field();

    /*-----------------------------[Bottom Flowers]---------------------------------*/
	    glLoadIdentity();
    ////////////////down garss
               downGrass();
    ///////////////flower down
	           downFlower();
    /*----------------------------------------------------------------------------*/
    //Normal_Tree();
    glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();
    glLoadIdentity();
    stone();
    glPushMatrix();
    glTranslatef(-1.0,0.45f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();

    glFlush();

    if(dfivef==0)
    {

         dfivef=1;
    }
}


void Display4()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();
    glPushMatrix();
    glTranslatef(skypos,0.0,0.0);
    sky1();
    sky2();
    glPopMatrix();

    /////////filed
          glColor3ub(161, 219, 70);
          field();

    glLoadIdentity();
    glTranslatef(position2,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(position2+0.6,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(position2+1.2,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    ssun();

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glColor3f(0.0, 0.0, 1);
     char text[120];
    sprintf(text, "/t I need water ",5.00,8.00);
    glColor3f(0, 0, 0);
    glRasterPos2f( 0.0f , 0.0f );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -20 , 22 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    glPopMatrix();
    glLoadIdentity();
    glFlush();

    if(dfourf==0)
    {

        Sleep(1000);

         dfourf=1;
    }
}
void Display4s()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();
    glPushMatrix();
    glTranslatef(skypos,0.0,0.0);
    sky1();
    sky2();
    glLoadIdentity();
        /////////filed
          glColor3ub(161, 219, 70);
          field();
          glLoadIdentity();
    glTranslatef(position2,0.0,0.0);
    Normal_Tree();






glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.52f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.08f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.52f, 0.08f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.5f, 0.1f, 0.03f);
glPopMatrix();




    glLoadIdentity();
    glTranslatef(position2+0.6,0.0,0.0);
    Normal_Tree();
        glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, -0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, -0.02f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.0f, 0.03f);
glPopMatrix();
    glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.28f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, 0.28f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.3f, 0.03f);
glPopMatrix();
glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.52f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.08f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.52f, 0.08f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.5f, 0.1f, 0.03f);
glPopMatrix();

    glLoadIdentity();
    glTranslatef(position2+1.2,0.0,0.0);
    Normal_Tree();
        glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, -0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, -0.02f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.0f, 0.03f);
glPopMatrix();
    glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.28f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, 0.28f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.3f, 0.03f);
glPopMatrix();

glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.52f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.08f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.52f, 0.08f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.5f, 0.1f, 0.03f);
glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);

    glLoadIdentity();
    sun();

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();

    glPopMatrix();
    glLoadIdentity();
    glFlush();

    if(dfourf==0)
    {
        //std::cout<<"audio played"<<std::endl;
        Sleep(1000);

         dfourf=1;
    }
}

void Display3()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();
    sky1();
    sky2();
    /////////filed
          glColor3ub(161, 219, 70);
          field();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    //Normal_Tree();
    /*-------------------------------------------------------*/
    ////////////////////tree leaf
        //right big
	    glColor3ub(41, 140, 42);
	    circle(-0.35,-0.1,.09);
	    ////left big
	    circle(-0.79,0.04,.09);
	    //right small
	    glColor3ub(78, 186, 28);
	    circle(-0.4,-0.28f,.06);
	     //mid
	    circle(-0.55,.02,.1);
	      //left small
	    glColor3ub(62, 186, 28);
	    circle(-0.895,-0.13,.06);

//////////tree
        tree2();
      glLoadIdentity();
    /*------------------------------------------------------*/
    glTranslatef(0.5,0.0,0.0);
    Home();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    ssun();

    //glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();


    glPopMatrix();
    glLoadIdentity();
    glFlush();

    if(dthreef==0)
    {

         dthreef=1;
    }

}

void Display3s()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();
    //sky1();
    //sky2();
    /////////filed
          glColor3ub(161, 219, 70);
          field();

/////////Cloud
    glColor3ub(242, 245, 243);
    cloud();

/////////filed
          glColor3ub(161, 219, 70);
          field();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);

    ////////////////////tree leaf
        //right big///4
//1
	    glPushMatrix();
	    glTranslatef(0.0f,0.0f,0.0f);
	    glColor3ub(138, 163, 54);
	    circle(-0.36,-0.05,.13);
	    glPopMatrix();
	    glLoadIdentity();


	    //right small////1
	    glPushMatrix();
	    glTranslatef(0.0f,0.0f,0.0f);
	    glColor3ub(159, 173, 50);
	    circle(-0.4,-0.3f,.08);
	    glPopMatrix();
	    glLoadIdentity();



	      //left small///
	      glPushMatrix();
         glTranslatef(0.0f,0.0f,0.0f);
	    glColor3ub(99, 112, 39);
	     circle(-0.895,-0.13,.08);
	     glPopMatrix();
	    glLoadIdentity();

	   //left big/////3
	   glPushMatrix();
	   glTranslatef(0.0f,0.0f,0.0f);
	    glColor3ub(138, 163, 54);

	    circle(-0.77,0.07,.15);
	    glPopMatrix();
	    glLoadIdentity();



 //mid////////2
        glPushMatrix();
        glTranslatef(0.0f,0.0f,0.0f);
        glColor3ub(176, 191, 57);
	    circle(-0.54,0.1,.16);
	    glPopMatrix();
	    glLoadIdentity();


    //////////Tree
    //Normal_Tree();
    tree2();
    glTranslated(-0.3,-0.05,0.0);
        springFlower();
	    glLoadIdentity();

        glTranslated(-0.34,-0.03,0.0);
        springFlower();
	    glLoadIdentity();


	    glTranslated(-0.6,0.15,0.0);
        springFlower();
	    glLoadIdentity();

	    glTranslated(-0.56,0.19,0.0);
	    springFlower();
	    glLoadIdentity();

	    glTranslated(-0.54,0.13,0.0);
	    springFlower();
	    glLoadIdentity();


	    glTranslated(-0.85,0.11,0.0);
	    springFlower();
	    glLoadIdentity();

	    glTranslated(-0.87,0.07,0.0);
	    glColor3ub(247, 183, 225);
	    circle(0.025,.006,.013);
        circle(0.0015,.005,.013);
        glColor3ub(255, 3, 3);
	    circle(0.012,.012,.01);
	    glLoadIdentity();

	    glTranslated(-0.37,-0.3,0.0);
	    glColor3ub(247, 183, 225);
	    circle(0.025,.006,.013);
        circle(0.014,.025,.013);
        glColor3ub(255, 3, 3);
	    circle(0.012,.012,.01);
	    glLoadIdentity();

    glTranslatef(0.5,0.0,0.0);
    Home();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();


    /*-----------------------------[Bottom Flowers]---------------------------------*/
	    glLoadIdentity();
////////////////down garss
               downGrass();
///////////////flower down
	           downFlower();
/*----------------------------------------------------------------------------*/

    //glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();
    glLoadIdentity();
    glFlush();

    if(dthreef==0)
    {

         dthreef=1;
    }

}

void Display2()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();
    sky1();
    sky2();
    /////////filed
          glColor3ub(161, 219, 70);
          field();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(0.6,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(1.2,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    ssun();

    glPushMatrix();
    glTranslatef(position1,0.4f, 0.0f);

    Bird();

    glPopMatrix();
    glLoadIdentity();
    glFlush();

    if(dtwof==0)
    {

         dtwof=1;
    }
}
void Display2s()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();
    //sky1();
    //sky2();
    /////////filed
          glColor3ub(161, 219, 70);
          field();
    /////////Cloud
    glColor3ub(242, 245, 243);
    cloud();

/////////filed
          glColor3ub(161, 219, 70);
          field();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    Normal_Tree();
    glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, -0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, -0.02f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.0f, 0.03f);
glPopMatrix();




    glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.28f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, 0.28f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.3f, 0.03f);
glPopMatrix();

glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.52f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.08f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.52f, 0.08f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.5f, 0.1f, 0.03f);
glPopMatrix();




    glLoadIdentity();
    glTranslatef(0.6,0.0,0.0);
    Normal_Tree();
        glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, -0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, -0.02f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.0f, 0.03f);
glPopMatrix();
    glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.28f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, 0.28f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.3f, 0.03f);
glPopMatrix();
glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.52f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.08f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.52f, 0.08f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.5f, 0.1f, 0.03f);
glPopMatrix();

    glLoadIdentity();
    glTranslatef(1.2,0.0,0.0);
    Normal_Tree();
        glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, -0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, -0.02f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.0f, 0.03f);
glPopMatrix();
    glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.28f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, 0.28f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.3f, 0.03f);
glPopMatrix();

glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.52f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.08f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.52f, 0.08f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.5f, 0.1f, 0.03f);
glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);

    glLoadIdentity();

    sun();

    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();

/*-----------------------------[Bottom Flowers]---------------------------------*/
	    glLoadIdentity();
////////////////down garss
               downGrass();
///////////////flower down
	           downFlower();
/*----------------------------------------------------------------------------*/

    glPopMatrix();
    glLoadIdentity();
    glFlush();

    if(dtwof==0)
    {

         dtwof=1;
    }
}

void Display1()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();
    sky1();
    sky2();
    ssun();
    /////////filed
          glColor3ub(161, 219, 70);
          field();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    Normal_Tree();






    glLoadIdentity();
    glTranslatef(0.6,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(1.2,0.0,0.0);
    Normal_Tree();

    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);

    glLoadIdentity();
    glFlush();
    if(donef==0)
    {

         donef=1;
    }
}
void Display1s()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();
    //sky1();
    //sky2();

/////////Cloud
    glColor3ub(242, 245, 243);
    cloud();
    sun();
    /////////filed
          glColor3ub(161, 219, 70);
          field();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    Normal_Tree();
    glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, -0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, -0.02f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.0f, 0.03f);
glPopMatrix();




    glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.28f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, 0.28f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.3f, 0.03f);
glPopMatrix();

glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.52f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.08f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.52f, 0.08f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.5f, 0.1f, 0.03f);
glPopMatrix();




    glLoadIdentity();
    glTranslatef(0.6,0.0,0.0);
    Normal_Tree();
        glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, -0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, -0.02f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.0f, 0.03f);
glPopMatrix();
    glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.28f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, 0.28f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.3f, 0.03f);
glPopMatrix();
glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.52f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.08f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.52f, 0.08f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.5f, 0.1f, 0.03f);
glPopMatrix();

    glLoadIdentity();
    glTranslatef(1.2,0.0,0.0);
    Normal_Tree();
        glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, -0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.02f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, -0.02f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.0f, 0.03f);
glPopMatrix();
    glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.72f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.28f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.68f, 0.32f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.72f, 0.28f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.7f, 0.3f, 0.03f);
glPopMatrix();

glPushMatrix();

glColor3ub(255, 0, 0);
flower (-0.52f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.08f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.48f, 0.12f, 0.02f);
glColor3ub(255, 0, 0);
flower (-0.52f, 0.08f, 0.02f);


glColor3ub(255, 255, 0);
flower (-0.5f, 0.1f, 0.03f);
glPopMatrix();

/*-----------------------------[Bottom Flowers]---------------------------------*/
	    glLoadIdentity();
////////////////down garss
               downGrass();
///////////////flower down
	           downFlower();

/*-------------------------------------------------------------------*/

    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);

    glLoadIdentity();
    glFlush();
    if(donef==0)
    {

         donef=1;
    }
}

void Display1w()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    backgroundw();
    sky1();
    sky2();
    sun();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    Normal_Treew();






    glLoadIdentity();
    glTranslatef(0.6,0.0,0.0);
    Normal_Treew();
    glLoadIdentity();
    glTranslatef(1.2,0.0,0.0);
    Normal_Treew();

    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);

    glLoadIdentity();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    snow();
    glPopMatrix();
    glFlush();
    if(donef==0)
    {

         donef=1;
    }
}

void Display2w()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    backgroundw();
    sky1();
    sky2();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    Normal_Treew();
    glLoadIdentity();
    glTranslatef(0.6,0.0,0.0);
    Normal_Treew();
    glLoadIdentity();
    glTranslatef(1.2,0.0,0.0);
    Normal_Treew();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();

    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();

    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    snow();
    glPopMatrix();

    glFlush();

    if(dtwof==0)
    {

         dtwof=1;
    }
}

void Display3w()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    backgroundw();
    sky1();
    sky2();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    Normal_Treew();
    glTranslatef(0.5,0.0,0.0);
    Home();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();

    //glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    snow();
    glPopMatrix();
    glFlush();

    if(dthreef==0)
    {

         dthreef=1;
    }

}

void Display4w()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    backgroundw();
    glPushMatrix();
    glTranslatef(skypos,0.0,0.0);
    sky1();
    sky2();
    glPopMatrix();

    glLoadIdentity();
    glTranslatef(position2,0.0,0.0);
    Normal_Treew();
    glLoadIdentity();
    glTranslatef(position2+0.6,0.0,0.0);
    Normal_Treew();
    glLoadIdentity();
    glTranslatef(position2+1.2,0.0,0.0);
    Normal_Treew();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();

    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    snow();
    glPopMatrix();
    glFlush();

    if(dfourf==0)
    {
        //std::cout<<"audio played"<<std::endl;
        Sleep(1000);

         dfourf=1;
    }
}

void Display5w()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    backgroundw();
    pitcher();
    sky1();
    sky2();
    glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();
    glLoadIdentity();
    stone();
    glPushMatrix();
    glTranslatef(-1.0,0.45f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    snow();
    glPopMatrix();

    glFlush();

    if(dfivef==0)
    {

         dfivef=1;
    }
}

void Display6w()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    backgroundw();
    pitcher();
    sky1();
    sky2();
    glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();
    glLoadIdentity();
    stone();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    snow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(xpos,ypos, 0.0f);
     if(xpos>=-0.2f && ypos<=-0.55f && dsixf==0)
    {
         dsixf=1;
         waterflag=1;
    }


    glRotatef(180,0,1,0);
    if(waterflag==1)
    {
        glRotatef(180,0,1,0);
        Bird();
        ideaflag = 1;
    }
    else
        Bird();
    glPopMatrix();
    glFlush();

}
void Display8w()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    road();
    fullsky();
    grass();
    backgroundw();
    pitcher();
    sky1();
    sky2();
    glTranslatef(0.1f,0.0f,0.0f);
    waterdrop();
    glLoadIdentity();

    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();
    glLoadIdentity();
    stone();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    snow();
    glPopMatrix();

    glPushMatrix();
    if(!flyaway)
        {
            glTranslatef(-0.2f,ydown, 0.0f);

            glRotatef(180,0,1,0);
            Bird();
    }
    else
    {
        glTranslatef(xpos-0.2,yuppos-0.4, 0.0f);
        glRotatef(180,0,1,0);
        Bird();

        if(drankwater == 0)
        {
            drankwater = 1;
        }
        if(xpos>1.4 && happilygone == 0)
        {
            happilygone = 1;
        }

    }
    glPopMatrix();
    glFlush();
    if(ydown<-0.6 && deightf == 0)
    {
        deightf = 1;
        flyaway = 1;
        stonereturnflag = 1;
    }
}


void Display7w()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    backgroundw();
    pitcher();
    sky1();
    sky2();
    glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();

    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    sun();
    glLoadIdentity();
    stone();

    glPushMatrix();
    glTranslatef(xpos,yuppos, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    snow();
    glPopMatrix();

    if(!febbleflag)
    {
        glPushMatrix();
        glTranslatef(-0.2,ydown, 0.0f);
        Moving_Stone();
        glPopMatrix();
        if(ydown<-0.7)
        {
            ydown = 0.8;
            glutDisplayFunc(Display8w);

        }
    }

    glFlush();
    if((xpos>=-0.2 && yuppos>=-0.25) && dsevenf == 0)
    {
        waterflag = 1;
        stonereturnflag = 0;
        dsevenf=1;
        febbleflag = 0;
        ydown = 0.2;
    }
}

 void Display1r()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();


    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    Normal_Tree();


    glLoadIdentity();
    glTranslatef(0.6,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(1.2,0.0,0.0);
    Normal_Tree();

    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);

    ///////Rain cloud
glColor3ub(158, 161, 163);
glPushMatrix();
glTranslatef(position, 0.0f,0.0f);
rainCloud();
glPopMatrix();
glLoadIdentity();

    // Rain
  glPushMatrix();
glTranslatef(0.0f,position,0.0f);
glColor3ub(210, 226, 247);
glLineWidth(2);

rain();
glPopMatrix();
glLoadIdentity();
thander();

    glLoadIdentity();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    glPopMatrix();
    glFlush();
    if(donef==0)
    {

         donef=1;
    }
}

void Display2r()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();



     ///////Rain cloud
glColor3ub(158, 161, 163);
glPushMatrix();
glTranslatef(position, 0.0f,0.0f);
rainCloud();
glPopMatrix();
glLoadIdentity();

    // Rain
  glPushMatrix();
glTranslatef(0.0f,position,0.0f);
glColor3ub(210, 226, 247);
glLineWidth(2);

rain();
glPopMatrix();
glLoadIdentity();
thander();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(0.6,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(1.2,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);

    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();

    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);

    glPopMatrix();

    glFlush();

    if(dtwof==0)
    {

         dtwof=1;
    }
}

void Display3r()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();

    ///////Rain cloud
glColor3ub(158, 161, 163);
glPushMatrix();
glTranslatef(position, 0.0f,0.0f);
rainCloud();
glPopMatrix();
glLoadIdentity();

    // Rain
  glPushMatrix();
glTranslatef(0.0f,position,0.0f);
glColor3ub(210, 226, 247);
glLineWidth(2);

rain();
glPopMatrix();
glLoadIdentity();
thander();

    glLoadIdentity();
    glTranslatef(0.0,0.0,0.0);
    Normal_Tree();
    glTranslatef(0.5,0.0,0.0);
    Home();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);

    //glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);

    glPopMatrix();
    glFlush();

    if(dthreef==0)
    {

         dthreef=1;
    }

}

void Display4r()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3ub(124, 252, 0);
    glVertex2f(-1.0f,-0.85f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-1.0);
    glVertex2f(-1.0f,-1.0);
    glEnd();

    fullsky();
    grass();
    background();
    glPushMatrix();
    glTranslatef(skypos,0.0,0.0);

    glPopMatrix();

    ///////Rain cloud
glColor3ub(158, 161, 163);
glPushMatrix();
glTranslatef(position, 0.0f,0.0f);
rainCloud();
glPopMatrix();
glLoadIdentity();

    // Rain
  glPushMatrix();
glTranslatef(0.0f,position,0.0f);
glColor3ub(210, 226, 247);
glLineWidth(2);

rain();
glPopMatrix();
glLoadIdentity();
thander();

    glLoadIdentity();
    glTranslatef(position2,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(position2+0.6,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(position2+1.2,0.0,0.0);
    Normal_Tree();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    //sun();

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(position,0.4f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();

    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    //snow();
    glPopMatrix();
    glFlush();

    if(dfourf==0)
    {
        //std::cout<<"audio played"<<std::endl;
        Sleep(1000);

         dfourf=1;
    }
}

void Display5r()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();

    glLoadIdentity();


    ///////Rain cloud
glColor3ub(158, 161, 163);
glPushMatrix();
glTranslatef(position, 0.0f,0.0f);
rainCloud();
glPopMatrix();
glLoadIdentity();

    // Rain
  glPushMatrix();
glTranslatef(0.0f,position,0.0f);
glColor3ub(210, 226, 247);
glLineWidth(2);

rain();
glPopMatrix();
glLoadIdentity();
thander();


    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    //sun();
    glLoadIdentity();
    stone();
    glPushMatrix();
    glTranslatef(-1.0,0.45f, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    //snow();
    glPopMatrix();

    glFlush();

    if(dfivef==0)
    {

         dfivef=1;
    }
}

void Display6r()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();

    ///////Rain cloud
glColor3ub(158, 161, 163);
glPushMatrix();
glTranslatef(position, 0.0f,0.0f);
rainCloud();
glPopMatrix();
glLoadIdentity();

    // Rain
  glPushMatrix();
glTranslatef(0.0f,position,0.0f);
glColor3ub(210, 226, 247);
glLineWidth(2);

rain();
glPopMatrix();
glLoadIdentity();
thander();

    glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    //sun();
    glLoadIdentity();
    stone();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    //snow();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(xpos,ypos, 0.0f);
     if(xpos>=-0.2f && ypos<=-0.55f && dsixf==0)
    {
         dsixf=1;
         waterflag=1;
    }


    glRotatef(180,0,1,0);
    if(waterflag==1)
    {
        glRotatef(180,0,1,0);
        Bird();
        ideaflag = 1;
    }
    else
        Bird();
    glPopMatrix();
    glFlush();

}
void Display8r()
{

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);
    road();
    fullsky();
    grass();
    background();
    pitcher();

    ///////Rain cloud
glColor3ub(158, 161, 163);
glPushMatrix();
glTranslatef(position, 0.0f,0.0f);
rainCloud();
glPopMatrix();
glLoadIdentity();

    // Rain
  glPushMatrix();
glTranslatef(0.0f,position,0.0f);
glColor3ub(210, 226, 247);
glLineWidth(2);

rain();
glPopMatrix();
glLoadIdentity();
thander();

    glTranslatef(0.1f,0.0f,0.0f);
    waterdrop();
    glLoadIdentity();

    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();
    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    //sun();
    glLoadIdentity();
    stone();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    //snow();
    glPopMatrix();

    glPushMatrix();
    if(!flyaway)
        {
            glTranslatef(-0.2f,ydown, 0.0f);

            glRotatef(180,0,1,0);
            Bird();
    }
    else
    {
        glTranslatef(xpos-0.2,yuppos-0.4, 0.0f);
        glRotatef(180,0,1,0);
        Bird();

        if(drankwater == 0)
        {
            drankwater = 1;
        }
        if(xpos>1.4 && happilygone == 0)
        {
            happilygone = 1;
        }

    }
    glPopMatrix();
    glFlush();
    if(ydown<-0.6 && deightf == 0)
    {
        deightf = 1;
        flyaway = 1;
        stonereturnflag = 1;
    }
}


void Display7r()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    road();
    fullsky();
    grass();
    background();
    pitcher();

    ///////Rain cloud
glColor3ub(158, 161, 163);
glPushMatrix();
glTranslatef(position, 0.0f,0.0f);
rainCloud();
glPopMatrix();
glLoadIdentity();

    // Rain
  glPushMatrix();
glTranslatef(0.0f,position,0.0f);
glColor3ub(210, 226, 247);
glLineWidth(2);

rain();
glPopMatrix();
glLoadIdentity();
thander();

    glLoadIdentity();
    glPushMatrix();
    glTranslated(1.5,0,0 );
    tree();
    glPopMatrix();

    glLoadIdentity();
    glTranslatef(-0.17,0.0,0.0);
    //sun();
    glLoadIdentity();
    stone();

    glPushMatrix();
    glTranslatef(xpos,yuppos, 0.0f);
    glRotatef(180,0,1,0);
    Bird();
    glPopMatrix();

    glPushMatrix();
    glTranslated(0.0f,position1,0.0f);
    //snow();
    glPopMatrix();

    if(!febbleflag)
    {
        glPushMatrix();
        glTranslatef(-0.2,ydown, 0.0f);
        Moving_Stone();
        glPopMatrix();
        if(ydown<-0.7)
        {
            ydown = 0.8;
            glutDisplayFunc(Display8r);

        }
    }

    glFlush();
    if((xpos>=-0.2 && yuppos>=-0.25) && dsevenf == 0)
    {
        waterflag = 1;
        stonereturnflag = 0;
        dsevenf=1;
        febbleflag = 0;
        ydown = 0.2;
    }


}

void handleKeypress(unsigned char key, int x, int y) {

    if (key == '1'){
            glutDestroyWindow(1);
            glutInitWindowSize(1240, 680);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2);
            glutCreateWindow("MORAL STORY");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(Display1);



    }
    else if (key=='q')
            {
                glutDisplayFunc(Display1s);
            }

    else if (key == '2'){
            position=-1.0f;
            glutDisplayFunc(Display2);
    }
    else if (key=='w')
            {
                glutDisplayFunc(Display2s);
            }
    else if (key == '3'){
            position=-1.0f;
            glutDisplayFunc(Display3);

    }
    else if (key=='e' )
            {
                glutDisplayFunc(Display3s);
            }
    else if (key == '4'){
            position=-1.0f;
            glutDisplayFunc(Display4);

    }
    else if (key=='r' )
            {
                glutDisplayFunc(Display4s);
            }
    else if (key == '5'){
            position=-0.9f;
            glutDisplayFunc(Display5);

    }
    else if (key=='t' )
            {
                glutDisplayFunc(Display5s);
            }
    else if (key == '6'){
            position=-0.9f;
            xpos = -1.0 ;
            ypos = 0.45;
            glutDisplayFunc(Display6);

    }
    else if (key=='y' )
            {
               position=-0.9f;
            xpos = -1.0 ;
            ypos = 0.45;
            glutDisplayFunc(Display6s);
            }
    else if (key == '7'){
            position=-0.9f;
            xpos = -1.4 ;
            ypos = -0.85;
            yuppos=ypos;
            febbleflag = 1;
            stonereturnflag = 1;
            glutDisplayFunc(Display7);
            }
     else if (key=='u' )
            {
                position=-0.9f;
            xpos = -1.4 ;
            ypos = -0.85;
            yuppos=ypos;
            febbleflag = 1;
            stonereturnflag = 1;
             glutDisplayFunc(Display7s);
            }
     else if (key=='a' )
            {
                glutDisplayFunc(Display1w);
            }

    else if (key=='s' )
            {
                glutDisplayFunc(Display2w);
            }

    else if (key=='d' )
            {
                glutDisplayFunc(Display3w);
            }

    else if (key=='f' )
            {
                glutDisplayFunc(Display4w);
            }

    else if (key=='g' )
            {
                glutDisplayFunc(Display5w);
            }

    else if (key=='h' )
            {
                position=-0.9f;
            xpos = -1.0 ;
            ypos = 0.45;
            glutDisplayFunc(Display6w);;
            }

    else if (key=='j' )
            {
               position=-0.9f;
            xpos = -1.4 ;
            ypos = -0.85;
            yuppos=ypos;
            febbleflag = 1;
            stonereturnflag = 1;
            glutDisplayFunc(Display7w);


            }
            else if (key=='z' )
            {
                glutDisplayFunc(Display1r);
            }

    else if (key=='x' )
            {
                glutDisplayFunc(Display2r);
            }

    else if (key=='c' )
            {
                glutDisplayFunc(Display3r);
            }

    else if (key=='v' )
            {
                glutDisplayFunc(Display4r);
            }

    else if (key=='b' )
            {
                glutDisplayFunc(Display5r);
            }

    else if (key=='n' )
            {
                position=-0.9f;
            xpos = -1.0 ;
            ypos = 0.45;
            glutDisplayFunc(Display6r);;
            }

    else if (key=='m' )
            {
               position=-0.9f;
            xpos = -1.4 ;
            ypos = -0.85;
            yuppos=ypos;
            febbleflag = 1;
            stonereturnflag = 1;
            glutDisplayFunc(Display7r);


            }
}


void handleMouse(int button, int state, int x, int y) {
if (button == GLUT_LEFT_BUTTON)
{	speed1 = 0.1f;
}
if (button == GLUT_RIGHT_BUTTON)
{speed1 = 0;   }
glutPostRedisplay();}





int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(1240, 680);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-680)/2);
    glutCreateWindow("MORAL STORY");
    init();
    glutReshapeFunc(reshape);
    glutDisplayFunc(Display);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutTimerFunc(1000, update, 0);
    glutMainLoop();
    return 0;
}

