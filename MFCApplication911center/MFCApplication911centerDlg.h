
// MFCApplication911centerDlg.h : header file
//

#pragma once


// CMFCApplication911centerDlg dialog
class CMFCApplication911centerDlg : public CDialogEx
{
// Construction
public:
	CMFCApplication911centerDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION911CENTER_DIALOG };
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
	afx_msg void OnCbnSelchangeComboEmergency();
	afx_msg void OnBnClickedCallerButtonStart();

	CComboBox m_comboBoxControlEmergency;
	CString m_strEmergencyList;
	CString m_ClientName;
	CString m_ClientLastName;
	CString m_ClientCity;
	CString m_ClientAddress;
	CString m_ClientReport;
	CString m_ClientGender;
	bool gender;
	CString m_ClientPhone;
	

	afx_msg void OnBnClickedRadioEventFormMale();
	afx_msg void OnBnClickedRadioEventFormFemale();
	CString m_Activity_log;
	CEdit c_ClientReport;
	CEdit c_ClientName;
	CEdit c_ClientLastName;
	CEdit c_clientCity;
	CEdit c_ClientPhone;
	CEdit c_ClientAddress;
};
