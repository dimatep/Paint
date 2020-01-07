//Assigned by:
//Student_Full_Name: Dima_Tepliakov,    #ID: 314245564, #Group:61307-3, #Lecturer: Dr. Ben-Av Radal
//Student_Full_Name: Aleksey_Smolyarov, #ID: 304742943, #Group:61307-3, #Lecturer: Dr. Ben-Av Radal
#include "myTriangle.h"

void myTriangle::Draw(CDC * dc)
{
	CPoint tringlesPoints[3];
	tringlesPoints[0].SetPoint(xBegin, yEnd);
	tringlesPoints[1].SetPoint(xEnd, yEnd);
	tringlesPoints[2].SetPoint((xBegin+xEnd)/2, yBegin);

	CBrush myBrush;
	CPen myPen(PS_SOLID, isThin ? 1 : 5, bgColor);
	dc->SelectObject(&myPen);
	if (isFill)
	myBrush.CreateSolidBrush(bgColor);
	else
	myBrush.CreateSolidBrush(RGB(240, 240, 240));
	dc->SelectObject(myBrush);
	dc->Polygon(tringlesPoints, 3);
}

bool myTriangle::isExist(CPoint point)
{
	int xMin = minX(), xMax = maxX(), yMin = minY(), yMax = maxY();
	if (!(point.x < xMin || point.x > xMax || point.y < yMin || point.y > yMax))
		return 1;
	return 0;
}
