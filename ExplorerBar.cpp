// ExplorerBar.cpp : 实现文件
//

#include "stdafx.h"
#include "ExplorerBar.h"

#include "CodeToolKit.h"

#include "MainFrm.h"


// CExplorerBar

IMPLEMENT_DYNAMIC(CExplorerBar, CWnd)

enum IDITEM
{
	ID_ITEM_XMLFORMAT = 1000,
	
	ID_ITEM_ENCYPT,
	
	ID_ITEM_SPY,

	ID_ITEM_RGEX,

	ID_ITEM_COLORTAKE
};


CExplorerBar::CExplorerBar()
{

}

CExplorerBar::~CExplorerBar()
{
}


BEGIN_MESSAGE_MAP(CExplorerBar, CWnd)
END_MESSAGE_MAP()



// CExplorerBar 消息处理程序

void* CExplorerBar::AddGroup(LPCTSTR lpszGroup)
{

#ifdef _XTP_INCLUDE_TOOLKIT
	CXTPTaskPanelGroup* pGroup = CXTPTaskPanel::AddGroup(0);
	pGroup->SetCaption(lpszGroup);

	return pGroup;

#else
	// add the parent item, make it bold
	HTREEITEM htiParent = InsertItem(lpszGroup);

	SetItemState (htiParent, TVIS_BOLD | TVIS_EXPANDED, TVIS_BOLD | TVIS_EXPANDED);

	return htiParent;	

#endif

}

void CExplorerBar::AddLinkItem(void* pGroup, UINT nID, LPCTSTR lpszCaption)
{
#ifdef  _XTP_INCLUDE_TOOLKIT
	CXTPTaskPanelGroupItem *pItem =((CXTPTaskPanelGroup*)pGroup)->AddLinkItem(nID);
	pItem->SetCaption(lpszCaption);
#else
	HTREEITEM htiChild = InsertItem(lpszCaption, (HTREEITEM)pGroup);
	SetItemData(htiChild, nID);
#endif
}

void CExplorerBar::Create(CWnd *pWndParent)	
{
#ifdef _XTP_INCLUDE_TOOLKIT
	CXTPTaskPanel::Create(WS_VISIBLE | WS_CHILD, CRect(0, 0, 0, 0), pWndParent, 0);
	//SetTheme(xtptas);
	//SetTheme(xtpTaskPanelThemeToolboxWhidbey);
	SetHotTrackStyle(xtpTaskPanelHighlightItem);

	SetSingleSelection(TRUE);
	SetSelectItemOnFocus(TRUE);

	SetIconSize(CSize(0, 0));

#else

	CTreeCtrl::Create(WS_VISIBLE | TVS_HASLINES | TVS_LINESATROOT | TVS_HASBUTTONS | 
				  TVS_SHOWSELALWAYS | WS_VISIBLE | WS_CHILD, CRect(0, 0, 0, 0), pWndParent, 100);

#endif	

	void* pGroup = AddGroup(_T("CodeFormat"));

	AddLinkItem(pGroup,ID_ITEM_XMLFORMAT, _T("XML Format"));
}

void  CExplorerBar::OnItemClick(UINT nID)
{
	CMainFrame *pFrame = (CMainFrame*)AfxGetMainWnd();

	switch( nID )
	{
		case ID_ITEM_XMLFORMAT:
			//pFrame->SetView(RUNTIME_CLASS(CCodeToolKitView));
			break;
	}
}
