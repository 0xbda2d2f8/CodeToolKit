#pragma once


// CXTPExplorerPane
#include "ExplorerBar.h"

class CXTPExplorerPane : public CControlBar
{
public:
	CXTPExplorerPane();
	virtual ~CXTPExplorerPane();
	// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAppCaption)
	void OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHndler);
	//}}AFX_VIRTUAL

	void Create(CWnd* pWndParent);
	CSize CalcFixedLayout(BOOL, BOOL /*bHorz*/);

	void OnSize(UINT nType, int cx, int cy);

	LRESULT OnTaskPanelNotify(WPARAM wParam, LPARAM lParam);

	CExplorerBar m_wndExplorerBar;
protected:
	DECLARE_MESSAGE_MAP()
};