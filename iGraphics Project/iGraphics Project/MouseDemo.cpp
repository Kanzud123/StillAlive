# include "iGraphics.h"

int x[100];
int y[100];
int total;
int dragMX=0,dragMY=0;
int cursorMX,cursorMY;
int b=0;


double xa5[]={80-b,110,210,240+b,210,110}; double ya5[]={525,545+b,545+b,525,505-b,505-b};


/*void drawFlowerAt(int p, int q)
{
	iSetColor(255, 0, 0);
	iFilledCircle(p+4, q+4, 4);

	iFilledCircle(p+4, q-4, 4);

	iFilledCircle(p-4, q+4, 4);

	iFilledCircle(p-4, q-4, 4);


	iSetColor(255, 255, 0);
	iFilledCircle(p, q, 4);
}

/*
	function iDraw() is called again and again by the system.
*/

void iPassiveMouse(int mx, int my)
{
    //cursorMX = mx;
    //cursorMY = my;
	//place your codes here
	if((mx>= 80 && mx<= 240) && (my>= 505 && my<= 545)){

		 b+=30;
		 

	    }
}
void iDraw()
{
	//place your drawing codes here

	iClear();

    //iFilledRectangle(dragMX,dragMY,100,100);

	int i;
	/*for(i = 0; i < total; i++)
	{
		drawFlowerAt(x[i], y[i]);
	}

	iText(10, 10, "Left click to draw, Right click to delete.");

	/*Drawing pointer*/

    /*iSetColor(255,0,0);
	iLine(cursorMX,cursorMY,cursorMX,cursorMY+10);
	iLine(cursorMX,cursorMY,cursorMX,cursorMY-10);
	iLine(cursorMX,cursorMY,cursorMX+10,cursorMY);
	iLine(cursorMX,cursorMY,cursorMX-10,cursorMY);*/


	iSetColor(225,225,225);
	//iFilledRectangle(500,200-b,100,40+b);

	  iFilledPolygon(xa5,ya5,6);

	  iFilledPolygon(xa5,ya5,6);
	


	  
	


}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
	//dragMX = mx;
	//dragMY = my;
}


/*
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
/*void iPassiveMouse(int mx, int my)
{
    //cursorMX = mx;
    //cursorMY = my;
	//place your codes here
	if((mx>= 80 && mx<= 240) && (my>= 505 && my<= 545)){

		 b+=30;
		 

	    }
}*/


/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		/*if(total < 100)
		{
			x[total] = mx;
			y[total] = my;
			total++;
		}*/
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		/*if(total>0)
		{
			total--;
		}*/
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	/*if(key == 'x')
	{
		//do something with 'x'
		exit(0);
	}*/
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}

int main()
{
	//place your own initialization codes here.
	total = 0;
	iInitialize(1000, 600, "MouseDemo");
	iStart();
	return 0;
}
