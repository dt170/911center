
// MFCApplication911centerDlg.h : header file
//

#pragma once
#include "Event.h"

// CMFCApplication911centerDlg dialog
class CMFCApplication911centerDlg : public CDialogEx ,public Event
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
	afx_msg void OnBnClickedRadioEventFormMale();
	afx_msg void OnBnClickedRadioEventFormFemale();
	afx_msg void OnBnClickedRadioPolice();
	afx_msg void OnBnClickedRadioFireman();
	afx_msg void OnBnClickedRadioParamedic();
	afx_msg void OnBnClickedRadioEmployeeMale();
	afx_msg void OnBnClickedRadioEmployeeFemale();
	void clearTextBoxOfClient();
	// Inherited via Event
	virtual bool openEvent();
	virtual bool CloseEvent();
	virtual void HandleEvent(CString event);
	void addEventsToComboBox();

	//all belong to caller
	CComboBox m_comboBoxControlEmergency;
	CString m_strEmergencyList;
	CString m_ClientName;
	CString m_ClientLastName;
	CString m_ClientCity;
	CString m_ClientAddress;
	CString m_ClientReport;
	CString m_ClientGender;
    CString m_ClientPhone;
	//cedit of caller
	CEdit c_ClientReport;
	CEdit c_ClientName;
	CEdit c_ClientLastName;
	CEdit c_clientCity;
	CEdit c_ClientPhone;
	CEdit c_ClientAddress;

	CString m_EmployeeJob;
	CString m_EmployeeGender;

	//afx_msg void HandleEmergency(Client *temp);
	CString m_Activity_log;
	CArray <CString, CString> strActivityDisplayLog;
private:
	int clientsNumber=0;

};
