// XTPExplorerPane.cpp : 实现文件
//

#include "stdafx.h"
#include "CodeToolKit.h"
#include "XTPExplorerPane.h"


// CXTPExplorerPane

//IMPLEMENT_DYNAMIC(CXTPExplorerPane, CControlBar)

CXTPExplorerPane::CXTPExplorerPane()
{

}

CXTPExplorerPane::~CXTPExplorerPane()
{
}


BEGIN_MESSAGE_MAP(CXTPExplorerPane, CControlBar)
	ON_WM_SIZE()	
#ifdef _XTP_INCLUDE_TOOLKIT
	ON_MESSAGE(XTPWM_TASKPANEL_NOTIFY, OnTaskPanelNotify)
#endif
END_MESSAGE_MAP()



// CXTPExplorerPane 消息处理程序

void CXTPExplorerPane::OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHndler)
{
// update the dialog controls added to the status bar
	UpdateDialogControls(pTarget, bDisableIfNoHndler);
}

void CXTPExplorerPane::Create(CWnd* pParentWnd)
{
	m_dwStyle = CBRS_LEFT;

	CControlBar::Create(AfxRegisterWndClass(0, AfxGetApp()->LoadStandardCursor(IDC_ARROW)), 0, WS_CHILD | WS_VISIBLE| m_dwStyle, 
		CRect(0, 0, 0, 0), pParentWnd, 0xE807);

	m_wndExplorerBar.Create(this);

}

CSize CXTPExplorerPane::CalcFixedLayout(BOOL, BOOL /*bHorz*/)
{
	ASSERT_VALID(this);
	ASSERT(::IsWindow(m_hWnd));

	CSize size(240, 32767);
	return size;
}

void CXTPExplorerPane::OnSize(UINT nType, int cx, int cy)
{
	CControlBar::OnSize(nType, cx, cy);

	if (m_wndExplorerBar)
		{
			m_wndExplorerBar.MoveWindow(0, 0, cx, cy);
		}
}

#ifdef _XTP_INCLUDE_TOOLKIT

LRESULT CXTPExplorerPane::OnTaskPanelNotify(WPARAM wParam, LPARAM lParam)
	{
	switch(wParam)
		{
		case XTP_TPN_CLICK:
			{
			CXTPTaskPanelGroupItem* pItem = (CXTPTaskPanelGroupItem*)lParam;
			TRACE(_T("Click Event: pItem.Caption = %s, pItem.ID = %i\n"), pItem->GetCaption(), pItem->GetID());

			m_wndExplorerBar.OnItemClick(pItem->GetID());
			}
			break;
		}
	return 0;
	}
#endif

