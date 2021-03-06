//Assigned by:
//Student_Full_Name: Dima_Tepliakov,    #ID: 314245564, #Group:61307-3, #Lecturer: Dr. Ben-Av Radal
//Student_Full_Name: Aleksey_Smolyarov, #ID: 304742943, #Group:61307-3, #Lecturer: Dr. Ben-Av Radal
// PaintProjectDlg.h : header file
//
// ProjectBGDlg.h : header file
//

#pragma once

#include <vector>
#include <stack>
#include "Shapes.h"
#include "myEllipse.h"
#include "myPen.h"
#include "myLine.h"
#include "myRectangle.h"
#include "myTriangle.h"
#include "UndoRedo.h"
#include "afxwin.h"

using namespace std;

// CPaintProjectDlg dialog
class CPaintProjectDlg : public CDialog
{
	enum SHAPES { PEN, LINE, ELLIPSE, TRIANGLE, RECTANGLE,COLOR_CHANGE };
	int counter, maxIndex;
	vector <Shapes*> myShape;
	SHAPES typeOfShape;
	COLORREF currentColor;
	UndoRedo moves;
	bool isPressed;
	CPoint start;
	CPoint end;
// Construction
public:
	CPaintProjectDlg(CWnd* pParent = NULL);	// standard constructor
	void newScreen();
	~CPaintProjectDlg();


// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAINTPROJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);

	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedRadio4();
	afx_msg void OnBnClickedRadio5();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedCheck2();
	afx_msg void OnBnClickedRadio6();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	BOOL isThin;
	BOOL isFill;
	CButton undoButton;
	CButton redoButton;
	CButton ClrBtn;

};