#pragma once


// CAppCaption

class CAppCaption : public CControlBar
{
	DECLARE_DYNAMIC(CAppCaption)

public:
	CAppCaption();
	virtual ~CAppCaption();
	virtual void OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHndler);

//Operations
public:
	CFont m_fnt;
	void SetContent(const CString &str);
	void Create(CWnd * pParentWnd);
	CSize CalcFixedLayout(BOOL bStretch, BOOL bHorz);
//Impl
public:
	CString m_strContent;
protected:
	//{{AFX_MSG(CAppCaption)
	afx_msg void OnPaint();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


