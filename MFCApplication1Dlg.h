
// MFCApplication1Dlg.h: 헤더 파일
//

#pragma once


// CMFCApplication1Dlg 대화 상자
class CMFCApplication1Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCApplication1Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonPrint();
	afx_msg void OnClickedButtonTitle();
	afx_msg void OnClickedButtonHide();
//	afx_msg void OnClickedButtonTarget();
	afx_msg void OnClickedButtonDisable();
//	afx_msg void OnDropdownButtonTarget(NMHDR* pNMHDR, LRESULT* pResult);
private:
//	CString m_szTitle;
public:
//	CString m_EditOne;
	afx_msg void OnChangeEditOne();
//	CString m_EditOne;
//	CString m_EditTwo;
	afx_msg void OnChangeEditTwo();
	afx_msg void OnClickedButtonClean();
//	BOOL m_ctlCheck;
//	CString m_strEdit;
	afx_msg void OnClickedCheckMess();

	afx_msg void OnClickedButtonPrint();
	afx_msg void OnClickedButtonExit();
	CString m_strCombo;
	CProgressCtrl m_ctlPro;
	afx_msg void OnClickedButton10();
	afx_msg void OnClickedButtonStart();
};
