#pragma once


// CXTPExplorerPane

class CXTPExplorerPane : public CControlBar
{
	DECLARE_DYNAMIC(CXTPExplorerPane)

public:
	CXTPExplorerPane();
	virtual ~CXTPExplorerPane();
	virtual void OnUpdateCmdUI(CFrameWnd* pTarget, BOOL bDisableIfNoHndler);

protected:
	DECLARE_MESSAGE_MAP()
};