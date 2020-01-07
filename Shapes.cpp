//Assigned by:
//Student_Full_Name: Dima_Tepliakov,    #ID: 314245564, #Group:61307-3, #Lecturer: Dr. Ben-Av Radal
//Student_Full_Name: Aleksey_Smolyarov, #ID: 304742943, #Group:61307-3, #Lecturer: Dr. Ben-Av Radal
#include "Shapes.h"

void Shapes::setColor(COLORREF color)
{
	bgColor = color;
}

int Shapes::minX()
{
	return xBegin > xEnd ? xEnd : xBegin;
}

int Shapes::maxX()
{
	return xBegin>xEnd ? xBegin : xEnd;
}

int Shapes::minY()
{
	return yBegin>yEnd ? yEnd : yBegin;
}

int Shapes::maxY()
{
	return yBegin>yEnd ? yBegin : yEnd;
}

CPoint Shapes::lastPoint()
{
	CPoint point(0, 0);
	return point;
}

